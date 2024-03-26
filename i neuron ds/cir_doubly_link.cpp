#include <iostream>
using namespace std;
class node
{
public:
    int value;
    node *prev;
    node *next;
    node()
    {
        value = 0;
        next = NULL;
        prev = NULL;
    }
};
class dll
{
    node *head;

public:
    dll()
    {
        head = NULL;
    }
    void insertatend(int v)
    {
        node *temp = new node();
        temp->value = v;
        if (head == NULL)
        {
            head = temp;
            temp->next=temp;
            temp->prev=temp;
        }
        else
        {
            node *t = head;
            while (t->next != head)
            {
                t = t->next;
            }
            temp->next=t->next;
            t->next = temp;
            temp->prev = t;
            temp->next->prev=temp;
        }
    }
    void insertatbegin(int v)
    {
        node *temp = new node();
        temp->value = v;
        if (head == NULL)
        {
            head = temp;
              temp->next=temp;
            temp->prev=temp;
        }
        else
        {
            temp->next = head;
            temp->prev=head->prev;
            head->prev = temp;
            head = temp;
            temp->prev->next=temp;
        }
    }
    void insertatmiddle(int v, int pos)
    {
        int i = 1;
        int flag = 0;
        node *temp = new node;
        node *t = new node;
        t = head->next;
        t->prev = head;
        //  node *loc = head;
        temp->value = v;
        if (pos == i)
        {
            temp->prev=head->prev;
            head->prev = temp;
            temp->next = head;
            temp->prev->next=temp;
            head = temp;
            flag = 1;
        }
        else
        {
            while (t!=head)
            {
                i++;
                if (pos == i)
                {
                    temp->prev = t->prev;
                    t->prev->next = temp;
                    temp->next = t;
                    t->prev = temp;
                    flag = 1;
                    break;
                }
                else
                {
                    // loc = t;
                    t = t->next;
                    if (t== head && pos == ++i)
                    {
                        insertatend(v);
                        flag = 1;
                    }
                }
            }
        }
        if (flag == 0)
        {
            cout << "\n position not exist \n";
        }
    }
    void deletion(int pos)
    {
        node *t = head;
        if (head == NULL)
        {
            cout << "\n position not found \n";
        }
        if (pos == 1)
        {
            head = t->next;
            head->prev = t->prev;
            head->prev->next=head;
            cout << t->value << " is deleted \n";
            delete t;
            return;
        }
        else
        {
            while (pos > 1)
            {
                pos--;
                if (t->next == head)
                {
                    cout << "position not found " << endl;
                    return;
                }
                t = t->next;
            }
            t->prev->next = t->next;
            if(t->next!=head){
            t->next->prev = t->prev;
            }
            cout << t->value <<" is deleted \n";
            delete t;
        }
    }

 void printdll()
{
    node *t = head;
    while (t->next != head)
    {
        cout << t->value << " <=> ";
        t = t->next;
        if(t->next==head){
             cout << t->value << " <=> ";   
        }
    }

    cout << endl;
}
}
;
int main()
{
    dll d1;
    d1.insertatend(5);
    d1.insertatend(10);
    d1.insertatend(15);
    d1.insertatend(20);
    d1.insertatbegin(1);
   d1.insertatmiddle(17, 6);
    d1.printdll();
    d1.deletion(1);
    d1.printdll();
    return 0;
}
