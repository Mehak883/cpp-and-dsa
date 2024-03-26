#include <iostream>
using namespace std;
class tree
{
public:
    int t[20] = {0};
    int size = 20;
    void insert(int v, int i)
    {
        if (i == 1)
        {
            t[i] = v;
        }
        else if ((i / 2 != 0) && (i <= size))
        {
            t[i] = v;
        }
        else
        {
            cout << "parent does not exist ";
        }
    }
    void insertleftchild(int v, int i)
    {
        if ((t[i] != 0) && (2 * i <= size))
        {
            t[2 * i] = v;
        }
        else
        {
            cout << "paernt not exist " << endl;
        }
    }
    void insertrightchild(int v, int i)
    {
        if ((t[i] != 0) && (2 * i <= size))
        {
            t[2 * i + 1] = v;
        }
        else
        {
            cout << "paernt not exist " << endl;
        }
    }
    void print()
    {
        int i;
        for (i = 1; i < size; i++)
        {
            if (t[i] != 0)
            {
                cout << t[i] << " ";
            }
            else
            {
                cout << " - ";
            }
        }
    }
    void deleteion(int i)
    {
        if ((t[i] != 0) && (t[2 * i] == 0) && (t[2 * i + 1] == 0))
        {
            t[i] = 0;
            cout<<"hi";
        }
        else
        {
            cout << "not able to delete";
        }
    }
};
int main()
{
    tree t1;
    t1.insert(5, 1);
    t1.insert(10, 2);
    t1.insert(20, 5);
    t1.insert(30, 10);
    t1.insert(40, 21);
    t1.insertleftchild(7, 2);
    t1.print();
    cout<<endl;
    t1.deleteion(5);
    t1.print();
    return 0;
}