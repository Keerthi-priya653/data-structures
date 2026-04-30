class Node
{
  public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class myQueue   // ✅ must match driver EXACTLY
{
  private:
    Node* front;
    Node* rear;
    int sz;

  public:
    myQueue()
    {
        front = rear = NULL;
        sz = 0;
    }

    void enqueue(int x)
    {
        Node* temp = new Node(x);

        if (rear == NULL)
        {
            front = rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }

        sz++;
    }

    int dequeue()
    {
        if (front == NULL)
            return -1;

        Node* temp = front;
        int val = front->data;

        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete temp;
        sz--;

        return val;
    }

    int getFront()
    {
        if (front == NULL)
            return -1;

        return front->data;
    }

    bool isEmpty()
    {
        return front == NULL;
    }

    int size()
    {
        return sz;
    }
};
