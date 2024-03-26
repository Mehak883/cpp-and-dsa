//5. Write a C++ program to merge the two files.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s;
    ofstream fout;
        ifstream fin;
        ifstream fin2;
    fout.open("D:/i neuron c++/class programs/file/ans1.txt", ios::app | ios::out | ios::in);
        fin.open("D:/i neuron c++/class programs/file/ans4.txt",ios::in);
        while (!fin.eof())
        {
            getline(fin, s);
                fout << s << endl;
        }
        fout.close();
        fin.close();
        fin2.open("D:/i neuron c++/class programs/file/ans1.txt",ios::in);
        while(!fin2.eof()){
            getline(fin2,s);
            cout << s << endl;
        }
        fin2.close();
        return 0;
    }