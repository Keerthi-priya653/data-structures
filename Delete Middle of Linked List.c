class Solution
{
  public:
    Node* deleteMid(Node* head)
    {
        if (head == NULL || head->next == NULL)
            return NULL;

        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;

        // find middle
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }

        // delete middle node
        prev->next = slow->next;

        delete slow;

        return head;
    }
};
