class Solution {
public:
    void deleteAlt(Node *head) {
        Node* curr = head;

        while (curr != NULL && curr->next != NULL) {
            Node* temp = curr->next;   // node to delete
            curr->next = temp->next;   // skip it
            delete temp;               // free memory

            curr = curr->next;         // move to next valid node
        }
    }
};
