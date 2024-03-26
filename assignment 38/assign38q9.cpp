#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list<int> l1, l2;
    list<int>::iterator x;
    int n;
    for (int i = 0; i <= 6; i++)
    {
        cout << "enter element : ";
        cin >> n;
        l1.push_back(n);
    }
    for (int i = 0; i <= 6; i++)
    {
        cout << "enter element : ";
        cin >> n;
        l2.push_back(n);
    }
    // l1.sort();
    // l2.sort();
    cout << "\nlist one : ";
    for (x = l1.begin(); x != l1.end(); x++)
    {
        cout << *x << "  ";
    }
    cout << "\nlist second : ";
    for (x = l2.begin(); x != l2.end(); x++)
    {
        cout << *x << "  ";
    }
    l1.merge(l2);
    cout << "\nmerge list : ";
    for (x = l1.begin(); x != l1.end(); x++)
    {
        cout << *x << "  ";
    }
    return 0;
}