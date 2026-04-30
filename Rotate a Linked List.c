using System;

class Solution
{
    public Node rotate(Node head, int k)
    {
        if (head == null || head.next == null || k == 0)
            return head;

        // Step 1: find length & last node
        Node temp = head;
        int len = 1;

        while (temp.next != null)
        {
            temp = temp.next;
            len++;
        }

        // make circular
        temp.next = head;

        // Step 2: effective rotations
        k = k % len;

        if (k == 0)
        {
            temp.next = null;
            return head;
        }

        // Step 3: move to (k-1)th node
        Node newTail = head;

        for (int i = 1; i < k; i++)
        {
            newTail = newTail.next;
        }

        Node newHead = newTail.next;

        // break list
        newTail.next = null;

        return newHead;
    }
}
