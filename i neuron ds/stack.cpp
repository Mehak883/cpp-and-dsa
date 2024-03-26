#include <iostream>
using namespace std;
class stack
{
    int s[100];
    int top;

public:
    stack()
    {
        top = -1;
    }
    ~stack()
    {
        top = -1;
    }
    void push(int value)
    {
        if (is_full_stack())
        {
            cout << "\nStack overflow ";
            return;
        }
        top++;
        s[top] = value; // return s[++top]=value;
    }
    int is_empty_stack()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int is_full_stack()
    {
        if (top == 99)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int pop()
    {
        if (is_empty_stack())
        {
            cout << "\nstack underflow ";
            return -1;
        }
        else
        {
            top--;
            return s[top + 1]; // return s[top--];
        }
    }
    int top_stack()
    {
        if (is_empty_stack())
        {
            cout << "\nstack underflow ";
            return -1;
        }
        else
        {
            return s[top];
        }
    }
    int size()
    {
        return top + 1;
    }
void display(){
    if (is_empty_stack())
        {
            cout << "\nstack underflow ";
    
        }
        else{
    for(int i=top;i>=0;i--){
        cout<<s[i]<<endl;
    }
        }
}
};
int main()
{
    int ch, value;
    stack s1;
    while (true)
    {
        cout << "1. PUSH \n2. POP \n3. TOP \n4. SIZE \n5. DISPLAY \n6. EXIT";
        cout << "\nenter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\nenter a number ";
            cin >> value;
            s1.push(value);
            break;
        case 2:
            value = s1.pop();
            cout << "deleted value is : " << value<<endl;
            break;
        case 3:
            cout << "top of the stack is " << s1.top_stack()<<endl;
            break;
        case 4:
            cout << "size of stack is " << s1.size()<<endl;
            break;
            case 5:
            cout<<"\nelements in the stack are : \n";
            s1.display();
            cout<<"\n\n";
            break;
        default:
            exit(0);
        }
    }
    return 0;
}