class Solution
{
  public:
    Node* deleteK(Node* head, int k)
    {
        if (k == 1)
            return NULL;

        Node* curr = head;
        Node* prev = NULL;

        int count = 1;

        while (curr != NULL)
        {
            if (count == k)
            {
                // delete current node
                prev->next = curr->next;
                delete curr;

                curr = prev->next;
                count = 1;
            }
            else
            {
                prev = curr;
                curr = curr->next;
                count++;
            }
        }

        return head;
    }
};
