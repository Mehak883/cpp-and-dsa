// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     q.push(6);

//     while(!q.empty()){

//         cout<<q.front()<<" ";
//         q.pop();
//     }
//     return 0;
// }
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> q;   //max priority
  //    priority_queue<int,vector<int>,greater<int>> q;  //min priority 
    q.push(1);
    q.push(11);
    q.push(12);
    q.push(8);
    q.push(4);
    q.push(6);

    while(!q.empty()){

        cout<<q.top()<<" ";
        q.pop();
    }
    return 0;
}