/*10. Unlike a set, a multiset may contain multiple occurrences of same number. The multiset equivalence problem states to check
if two given multisets are equal or not. For example let A = {1, 2, 3} and B = {1, 1, 2, 3}. Here A is set but B is not (1 
occurs twice in B), whereas A and B are both multisets. More formally, “Are the sets of pairs defined as \(A' = \{ (a, 
frequency(a)) | a \in \mathbf{A} \}\) equal for the two given multisets?” Given two multisets A and B, write a program to check
if the two multisets are equal.*/
#include <iostream>
#include <set>
#include <iterator>
using namespace std;
multiset<int> multi()
{
     multiset<int> s1;
    int a;
    cout<<"enter elements : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        s1.insert(a);
    }
    return s1;
}
void show(multiset<int> s1){
      multiset<int>::iterator it;
      cout<<"elemnts are : ";
   for (it = s1.begin(); it != s1.end(); it++)
    {
        cout<<*it<<"  ";
    }
    cout<<"\n\n";
}
int main()
{
    multiset<int> s1;
    multiset<int> s2;
      multiset<int>::iterator it;
    s1 = multi();
    s2 = multi();
    show(s1);
    show(s2);
    return 0;
}