class Solution
{
  public:
    Node* insertInMiddle(Node* head, int x)
    {
        Node* newNode = new Node(x);

        if (head == NULL)
            return newNode;

        int len = 0;
        Node* temp = head;

        // Step 1: find length
        while (temp != NULL)
        {
            len++;
            temp = temp->next;
        }

        // Step 2: find position to insert (0-based)
        int pos = len / 2;

        temp = head;

        // Step 3: move to (pos - 1)th node
        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }

        // Step 4: insert
        newNode->next = temp->next;
        temp->next = newNode;

        return head;
    }
};
