// 8. Write a program to find common elements between two vectors.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vector1 = {1, 45, 5, 7, 76, 12};
    vector<int> vector2 = {1, 7, 5, 4, 6, 12};
    sort(vector1.begin(), vector1.end());
    sort(vector2.begin(), vector2.end());
    cout << "First Vector : ";
    for (int i = 0; i < vector1.size(); i++)
        cout << vector1[i] << " ";
    cout << "\nSecond Vector : ";
    for (int i = 0; i < vector2.size(); i++)
        cout << vector2[i] << " ";
    vector<int> v(vector1.size() + vector2.size());
    vector<int>::iterator it, st;
    it = set_intersection(vector1.begin(), vector1.end(), vector2.begin(), vector2.end(), v.begin());
    cout << "\nCommon elements : ";
    for (st = v.begin(); st != it; ++st)
        cout << *st << "  ";
    cout << "\n";
    vector<int> v1(vector1.size() + vector2.size());
    vector<int>::iterator a, b;
    a = set_difference(vector1.begin(), vector1.end(), vector2.begin(), vector2.end(), v1.begin());
    for (b = v1.begin(); b != a; ++b)
        cout << *b << "  ";
    return 0;
}