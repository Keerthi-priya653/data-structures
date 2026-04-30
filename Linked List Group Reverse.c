using System;

class Solution
{
    public Node reverseKGroup(Node head, int k)
    {
        if (head == null || k == 1)
            return head;

        Node curr = head;
        Node prev = null;
        Node next = null;

        int count = 0;

        // Step 1: reverse k nodes
        Node temp = head;
        int nodeCount = 0;

        while (temp != null)
        {
            nodeCount++;
            temp = temp.next;
        }

        curr = head;

        while (curr != null && count < k)
        {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        // Step 2: recurse for remaining list
        if (curr != null)
            head.next = reverseKGroup(curr, k);

        return prev;
    }
}
