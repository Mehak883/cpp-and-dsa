#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    vector<float> v;
    vector<float>::iterator x;
    float a;
    cout << "enter 6 element : ";
    for (int i = 0; i <= 6; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    cout << " elements are : ";
    for (x = v.begin(); x != v.end(); x++)
    {
        cout << *x << "  ";
    }
    return 0;
}