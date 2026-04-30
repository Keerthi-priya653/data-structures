using System;

class Solution
{
    public Node removeDuplicates(Node head)
    {
        if (head == null)
            return head;

        Node curr = head;

        while (curr != null && curr.next != null)
        {
            if (curr.data == curr.next.data)
            {
                // skip duplicate
                curr.next = curr.next.next;
            }
            else
            {
                curr = curr.next;
            }
        }

        return head;
    }
}
