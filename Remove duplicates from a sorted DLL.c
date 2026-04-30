class Solution {
public:
    Node* removeDuplicates(Node* head) {
        if (head == NULL) return head;

        Node* curr = head;

        while (curr != NULL && curr->next != NULL) {
            
            if (curr->data == curr->next->data) {
                Node* temp = curr->next;

                // Remove temp node
                curr->next = temp->next;

                if (temp->next != NULL) {
                    temp->next->prev = curr;
                }

                delete temp;
            }
            else {
                curr = curr->next;
            }
        }

        return head;
    }
};
