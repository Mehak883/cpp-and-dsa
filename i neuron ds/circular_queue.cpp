#include<iostream>
using namespace std;
class circular{
public:
int a[5];
int rear,front; 
int size;
circular(){
    rear=-1;
    front=-1;
    size=5;
}
};
class operation{
circular c1;
public:
void enqueue(int v){
    if(c1.rear==-1){
c1.rear++;
c1.front++;
c1.a[c1.rear]=v;
    }
    else if((c1.rear+1)%c1.size==c1.front){
        cout<<"\n NO SPACE , OVERFLOW OCCURS \n";
    }
    else{
c1.rear=(c1.rear+1)%c1.size;
c1.a[c1.rear]=v;
    }
}
void dequeue(){
if(c1.front ==-1){
cout<<"\n NO QUEUE , UNDERFLOW OCCURS \n";
}
else if(c1.rear==c1.front){
cout<<"\n"<<c1.a[c1.front]<<" is deleted ";
c1.front=-11;
c1.rear=-1;
}
else{
cout<<"\n"<<c1.a[c1.front]<<" is deleted ";
c1.front = (c1.front+1)%c1.size;
}
}
void display(){
    int i;
        cout<<"\n";
        if(c1.front==-1){
            cout<<"\nQUEUE IS EMPTY , UNDERFLOW OCCURS\n";
        }
        else{
    for( i=c1.front;(i%c1.size)!=(c1.rear);i=(i+1)%c1.size){
cout<<c1.a[i]<<"  ";        
    }
    if((i%c1.size)==c1.rear)
    cout<<c1.a[i]<<"  "; 
    cout<<"\n";
        }
}
};
int main(){
    operation o1;
    int ch;
    while (true)
    {
        cout << "1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n4.EXIT";
        cout << "\nENTER YOUR CHOICE : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            int num;
            cout << "\nenter the number : ";
            cin >> num;
            o1.enqueue(num);
            break;
        case 2:
            o1.dequeue();
            break;
        case 3:
            o1.display();
            break;
        case 4:
            exit(0);
        }
    }   
    return 0;
    }