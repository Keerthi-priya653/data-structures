class Solution {
public:
    int count(struct Node* head, int key) {
        int cnt = 0;
        
        while (head != NULL) {
            if (head->data == key) {
                cnt++;
            }
            head = head->next;
        }
        
        return cnt;
    }
};
