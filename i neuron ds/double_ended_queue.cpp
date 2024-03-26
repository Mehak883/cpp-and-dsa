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
    void insert_at_end(int v)
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
    void insert_at_beg(int v)
    {
        if (q1.rear == -1)
        {
            q1.front++;
            q1.rear++;
            q1.q[q1.rear] == v;
        }
        else if (q1.rear == q1.size - 1)
        {
            cout << "\n NO PLACE , UNDERFLOW CONDITION\n";
            return;
        }
        else
        {
            for (int i = q1.rear; i >= q1.front; i--)
            {
                q1.q[i + 1] = q1.q[i];
            }
            q1.rear++;
            q1.q[q1.front] = v;
        }
    }
    void del_at_beg()
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
            cout << "\n"
                 << q1.q[q1.front] << "is deleted \n";
            q1.front++;
        }
    }
    void del_at_end()
    {
        if (q1.front == -1)
        {
            cout << "NO QUEUE , UNDERFLOW CONDITION \n";
        }
        else if (q1.rear == q1.front)
        {
            cout << endl
                 << q1.q[q1.rear] << " is deleted \n";
            q1.front = -1;
            q1.rear = -1;
        }
        else
        {
            cout << endl
                 << q1.q[q1.rear] << " is deleted \n";
            q1.rear--;
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
        cout << "1. INSERT AT END\n2. DELETE FROM BEGINNING\n3. INSERT AT BEGINNING \n4. DELETE FROM END \n5. DISPLAY\n6. EXIT";
        cout << "\n ENTER YOUR CHOICE : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            int num;
            cout << "\nenter the number : ";
            cin >> num;
            o1.insert_at_end(num);
            break;
        case 2:
            o1.del_at_beg();
            break;
        case 3:
            int num1;
            cout << "\nenter the number : ";
            cin >> num1;
            o1.insert_at_beg(num1);
            break;
        case 4:
            o1.del_at_end();
            break;
        case 5:
            o1.display();
            break;
        case 6:
            exit(0);
        }
    }
    return 0;
}