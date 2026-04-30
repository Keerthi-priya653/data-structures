class Solution
{
  public:
    Node* deleteNode(Node* head, int x)
    {
        if (head == NULL)
            return head;

        // Case 1: delete head
        if (x == 1)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        Node* curr = head;

        // move to (x-1)th node
        for (int i = 1; i < x - 1 && curr != NULL; i++)
        {
            curr = curr->next;
        }

        // invalid position
        if (curr == NULL || curr->next == NULL)
            return head;

        // delete xth node
        Node* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;

        return head;
    }
};
