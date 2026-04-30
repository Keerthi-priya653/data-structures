class Solution
{
  public:
    Node* sortedInsert(Node* head, int key)
    {
        Node* newNode = new Node(key);

        // Case 1: insert at head
        if (head == NULL || key < head->data)
        {
            newNode->next = head;
            return newNode;
        }

        Node* curr = head;

        // find correct position
        while (curr->next != NULL && curr->next->data < key)
        {
            curr = curr->next;
        }

        // insert after curr
        newNode->next = curr->next;
        curr->next = newNode;

        return head;
    }
};
