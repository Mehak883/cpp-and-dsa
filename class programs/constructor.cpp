#include <iostream>
using namespace std;
class complex_no
{
    int real;
    int imaginary;

public:
    complex_no(int x, int y){real = x;imaginary = y;}
    complex_no(int x){real = x;imaginary = 0;}
   complex_no(){ real = 0;imaginary = 0;}
   complex_no(complex_no &c){//c is like just another name of c1
real=c.real;
imaginary=c.imaginary;
   }
    void display()
    {
        cout << real << " + i" << imaginary << endl;
    }
    void set_data(int x, int y)
    {
        real = x;
        imaginary = y;
    }
 complex_no add(complex_no x, complex_no y)
    {
complex_no c;
        c.real = x.real + y.real;
        c.imaginary = x.imaginary + y.imaginary;
return c;
    }
   friend complex_no operator+(complex_no,complex_no);
 
//     complex_no operator-(){
// complex_no temp;
// temp.real=-real;
// temp.imaginary=-imaginary;

//         return temp; 
//     }
 friend complex_no operator-(complex_no);
 complex_no operator+(int k){
    complex_no temp;
    temp.real=real+k;
    return temp;
 }
 friend complex_no operator+(int , complex_no);
//    ~complex_no(){
//     static int i=1;
//     cout<<"destructor called !!!"<<i++<<endl;
//    }
};
complex_no operator+(int k,complex_no t){
complex_no temp;
temp.real=k+t.real;
return temp;
}
complex_no operator-(complex_no x){
complex_no temp;
temp.real=-x.real;
temp.imaginary=-x.imaginary;
        return temp; 
    }
complex_no operator+(complex_no x,complex_no y)
    {   complex_no temp;
        temp.real = x.real + y.real;
        temp.imaginary = x.imaginary + y.imaginary;
        return temp;
    }

int main()
{
    complex_no c1,c2,c3,c4,c6,c7;
    complex_no c5=c1;
     c1.set_data(7, 3);
     c2.set_data(3, 6);
     //c7.set_data(5,5);
    c3=c3.add(c1, c2);    //  c4 = c1.operator+(c2);
    //c4=c1+c2;  //  c4 = c1.operator+(c2);
    c4=c1+c2;   //c4=operator+(c1,c2);
    //c6=-c4;    //c6=c4.operator-;
    c6=-c4;  //c6=operator-(c4);
    c7=c1+7;//c7=c1.operator+(7);
    c7=7+c1;//c7=operator+(7,c1);
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();
    c6.display();
    c7.display();
    return 0;
}