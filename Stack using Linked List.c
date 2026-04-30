class StackNode
{
  public:
    int data;
    StackNode* next;

    StackNode(int val)
    {
        data = val;
        next = NULL;
    }
};

class myStack   // ✅ MUST be lowercase as per driver
{
  private:
    StackNode* top;
    int sz;

  public:
    myStack()
    {
        top = NULL;
        sz = 0;
    }

    void push(int x)
    {
        StackNode* newNode = new StackNode(x);
        newNode->next = top;
        top = newNode;
        sz++;
    }

    int pop()
    {
        if (top == NULL)
            return -1;

        StackNode* temp = top;
        int val = top->data;
        top = top->next;

        delete temp;
        sz--;

        return val;
    }

    int peek()
    {
        if (top == NULL)
            return -1;

        return top->data;
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    int size()
    {
        return sz;
    }
};
