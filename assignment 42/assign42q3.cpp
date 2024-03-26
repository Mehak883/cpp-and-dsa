// 3. Check if a queue is empty or not using queue::size() function
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q1;
    if(q1.empty()){
        cout<<"yes it is empty .";
    }
    else{
         cout<<"no it is not empty .";
    }
    
    return 0;
}