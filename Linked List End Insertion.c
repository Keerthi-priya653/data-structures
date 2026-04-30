using System;

class Solution
{
    public Node insertAtEnd(Node head, int x)
    {
        Node newNode = new Node(x);

        // If list is empty
        if (head == null)
            return newNode;

        Node temp = head;

        // Traverse to last node
        while (temp.next != null)
        {
            temp = temp.next;
        }

        // Insert at end
        temp.next = newNode;

        return head;
    }
}
