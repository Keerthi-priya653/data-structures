class Solution
{
  public:
    void deleteNode(Node *del_node)
    {
        // copy next node data into current node
        Node *temp = del_node->next;

        del_node->data = temp->data;

        // skip next node
        del_node->next = temp->next;

        delete temp;
    }
};
