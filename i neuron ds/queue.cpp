#include <iostream>
using namespace std;
class queue
{
public:
    int q[20];
    int front;
    int rear;
    int size;
    queue()
    {
        front = -1;
        rear = -1;
        size = 19;
    }
};
class operation
{
    queue q1;

public:
    void enqueue(int v)
    {
        if (q1.rear == -1)
        {
            q1.rear++;
            q1.front++;
            q1.q[q1.rear] = v;
        }
        else if (q1.rear == q1.size - 1)
        {
            cout << "\n NO PLACE , OVERFLOW CONDITION\n";
            return;
        }
        else
        {
            q1.rear++;
            q1.q[q1.rear] = v;
        }
    }
    void dequeue()
    {
        if (q1.front == -1)
        {
            cout << "\n NO PLACE , UNDERFLOW CONDITION\n";
            return;
        }
        else if (q1.front == q1.rear)
        {
            cout << "\n"
                 << q1.q[q1.front] << " is deleted \n";
            q1.front = -1;
            q1.rear = -1;
        }
        else
        {
            cout << q1.q[q1.front] << "is deleted \n";
            q1.front++;
        }
    }
    void display()
    {
        cout << endl;
        if (q1.front == -1)
        {
            cout << "\n QUEUE IS EMPTY\n";
            return;
        }
        for (int i = q1.front; i <= q1.rear; i++)
        {
            cout << q1.q[i];
            if (i != q1.rear)
            {
                cout << " -> ";
            }
        }
        cout << endl;
    }
};
int main()
{
    operation o1;
    int a[10];
    int ch;
    while (true)
    {
        cout << "1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n4.EXIT";
        cout << "\nENTER YOUR CHOICE : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            int num;
            cout << "\nenter the number : ";
            cin >> num;
            o1.enqueue(num);
            break;
        case 2:
            o1.dequeue();
            break;
        case 3:
            o1.display();
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}