class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
        if (arr.size() == 0)
            return NULL;

        Node* head = new Node(arr[0]);
        Node* tail = head;

        for (int i = 1; i < arr.size(); i++)
        {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }

        return head;
    }
};
