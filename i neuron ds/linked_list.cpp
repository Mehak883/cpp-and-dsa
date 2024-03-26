#include <iostream>
using namespace std;
class node
{
public:
    int value;
    node *next;
    node()
    {
        value = 0;
        next = NULL;
    }
};
class linkedlist
{

    node *head;

public:
    linkedlist()
    {
        head = NULL;
    }
    void insertatend(int v)
    {
        node *temp = new node();
        temp->value = v;
        if (head == NULL) // for first node
        {
            head = temp;
        }
        else
        {
            node *ptr = new node();
            ptr = head;
            // head->next =temp;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = temp;
        }
    }
    void display()
    {
        node *ptr = new node();
        ptr = head;
        while (ptr != NULL)
        {

            cout << ptr->value;
            if (ptr->next != NULL)
            {
                cout << " -> ";
            }
            ptr = ptr->next;
        }
        cout << "\n";
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
            temp->next = head;
            head = temp;
        }
    }
    void insertatmiddle(int v, int n)
    {
        node *temp = new node();
        temp->value = v;
        if (n == 1)
        {
            temp->next = head;
            head = temp;
        }
        else
        {
            node *ptr = new node();
            ptr = head;
            while (n > 2)
            {
                n--;
                if (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                else
                {
                    cout << "\nposition does not exist \n";
                }
            }
            temp->next = ptr->next;
            ptr->next = temp;
        }
    }
    void deleteatloc(int n)
    {
        node *temp = head;
        if (n == 1)
        {
            head = head->next;
            cout << "\n"
                 << temp->value << " deleted" << endl;
            delete temp;
        }
        else
        {
            node *ptr = new node();
            ptr = head;
            while (n > 2)
            {
                n--;
                if (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                else
                {
                    cout << "\nposition does not exist \n";
                }
            }
            cout << "\n"
                 << ptr->next->value << " is deleted \n";
            ptr->next = ptr->next->next;
        }
    }
    void search(int v)
    {
        int count = 0;
        node *temp = head;
        if (temp == NULL)
        {
            cout << "\nlinked list is empty \n";
        }
        else
        {
            while (temp != NULL)
            {
                count++;
                if (temp->value == v)
                {
                    cout << temp->value << " is found at " << count;
                    return;
                }
                temp = temp->next;
            }
            cout << "\nelement not found \n";
        }
    }
};
int main()
{
    linkedlist l1;
    int ch, val, pos;
    while (true)
    {
        cout << "\n 1.INSERT AT BEGIN " << endl;
        cout << "\n 2.INSERT AT MIDDLE " << endl;
        cout << "\n 3.INSERT AT END" << endl;
        cout << "\n 4.SEARCH " << endl;
        cout << "\n 5.DELETE " << endl;
        cout << "\n 6.DISPLAY " << endl;
        cout << "\n 7.EXIT " << endl;
        cout << "\n\n ENTER YOUR CHOICE : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "enter element you want to insert at beginning : ";
            cin >> val;
            l1.insertatbegin(val);
            break;
        case 2:
            cout << "enter position where you want to insert : ";
            cin >> pos;
            cout << "enter element you want to insert at middle : ";
            cin >> val;
            l1.insertatmiddle(val, pos);
            break;
        case 3:
            cout << "enter element you want to insert at end : ";
            cin >> val;
            l1.insertatend(val);
            break;
        case 4:
            cout << "enter element you want to search : ";
            cin >> val;
            l1.search(val);
            break;
        case 5:
            cout << "enter position where you want to delete : ";
            cin >> pos;
            l1.deleteatloc(pos);
            break;
        case 6:
            l1.display();
            break;
        case 7:
            exit(0);
            break;
        }
    }
  
    return 0;
}