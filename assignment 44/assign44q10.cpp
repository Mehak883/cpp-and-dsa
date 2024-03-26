// 10. You have a set of integer s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers
// in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.You are given an
// integer array nums representing the data status of this set after the error.Find the number that occurs twice and the number that is missing
// and return them in the form of an array.
#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    multiset<int> s1;

    int i = 0, a,arr[6];
    for (i = 0; i < 6; i++)
    {
        cin >> a;

           if(s1.count(a)==0){
            s1.insert(a);
        }
    }
    for (auto it : s1)
    {
        cout << it << "  ";
    }
    int j=0;
    for (i = 1; i <=6; i++){
        
        if(*s1.find(i)!=i){
            cout<<"hi";
arr[j]=i;
j++;
        }
    }
     
    for (int k = 0; k < j; k++)
    {
        cout<<arr[k]<<"  ";
    }
    
    return 0;
}