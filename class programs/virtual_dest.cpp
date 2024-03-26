#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string s;
    ofstream  fout;
    fout.open("hi.txt",ios::app|ios::in|ios::out);
    fout<<"hib how are yoye";
    fout.close();
    ifstream fin;
    fin.open("hi.txt",ios::in);
    getline(fin,s);
    cout<<s;
    return 0;
}

// #include<iostream>
// using namespace std;
// class base {
//     public:
//     base(){
//         cout<<"base class \n";
//     }
// virtual ~base(){
//     cout<<"dest \n";
// }
// };
// class der :public base{
// public:
// der(){
//     cout<<"const der\n";
// }
// ~der(){
//     cout<<"dest der\n";
// }
// };
// int main(){
//  der *d1=new der;
//  base *b1=d1;
//   delete b1;
//     return 0;
// }