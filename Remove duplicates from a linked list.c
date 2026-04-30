class Solution
{
  public:
    Node* removeDuplicates(Node* head)
    {
        if (head == NULL)
            return head;

        unordered_set<int> seen;

        Node* curr = head;
        Node* prev = NULL;

        while (curr != NULL)
        {
            if (seen.find(curr->data) != seen.end())
            {
                // duplicate → remove node
                prev->next = curr->next;
                delete curr;
            }
            else
            {
                seen.insert(curr->data);
                prev = curr;
            }

            curr = prev->next;
        }

        return head;
    }
};
