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
        }
        else
        {
            node *t = head;
            while (t->next != NULL)
            {
                t = t->next;
            }
            t->next = temp;
            temp->prev = t;
        }
    }
    void insertatbegin(int v)
    {
        node *temp = new node();
        temp->value = v;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            head->prev = temp;
            temp->next = head;
            head = temp;
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
            head->prev = temp;
            temp->next = head;
            head = temp;
            flag = 1;
        }
        else
        {
            while (t != NULL)
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
                    if (t == NULL && pos == ++i)
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
            head->prev = NULL;
            cout << t->value << "is deleted \n";
            delete t;
            return;
        }
        else
        {
            while (pos > 1)
            {
                pos--;
                if (t->next == NULL)
                {
                    cout << "position not found " << endl;
                    return;
                }
                t = t->next;
            }
            t->prev->next = t->next;
            if(t->next!=NULL){
            t->next->prev = t->prev;
            }
            cout << t->value <<" is deleted \n";
            delete t;
        }
    }

 void printdll()
{
    node *t = head;
    while (t != NULL)
    {
        cout << t->value << " <=> ";
        t = t->next;
    }
    cout << endl;
}

void search(int v)
{
    node *t = head;
    while (t != NULL)
    {
        if(t->value==v){
        cout << t->value <<" found !!!";
        return;
        }
        t = t->next;
    }
    cout<<"\nnot found !!!\n";
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
    d1.deletion(4);
    d1.printdll();
    d1.search(88);
    return 0;
}
