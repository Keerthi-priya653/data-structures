class Solution {
public:
    Node* findIntersection(Node* head1, Node* head2) {
        unordered_set<int> s;

        // Store all values of head2
        Node* temp = head2;
        while (temp != NULL) {
            s.insert(temp->data);
            temp = temp->next;
        }

        // Create result list
        Node* dummy = new Node(0);
        Node* tail = dummy;

        temp = head1;
        while (temp != NULL) {
            if (s.find(temp->data) != s.end()) {
                tail->next = new Node(temp->data);
                tail = tail->next;
            }
            temp = temp->next;
        }

        return dummy->next;
    }
};
