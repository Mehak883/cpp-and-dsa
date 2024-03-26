// 6. Write a C++ program to calculate an average of 3 numbers.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    float avg, sum;
    cout << "enter 1st number : ";
    cin >> a;
    cout << "\nenter 2nd number : ";
    cin >> b;
    cout << "\nenter 3rd number : ";
    cin >> c;
    sum = a + b + c;
    avg = sum / 3;
    cout << "average of 3 numbers : " << avg;
    return 0;
}