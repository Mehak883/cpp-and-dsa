// Write a C++ program to open an output file 'a.txt' and append data to it.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s;
    ofstream fout;
    fout.open("D:/i neuron c++/class programs/file/ans1.txt", ios::app | ios::out | ios::in);
    if (!fout)
    {
        cout << "no epen";
    }
    else
    {
        while (1)
        {
            getline(cin, s);
            if (s != "-1")
            {
                fout << s << endl;
            }
            else
            {
                break;
            }
        }
    }
        fout.close();
        ifstream fin;
        fin.open("D:/i neuron c++/class programs/file/ans1.txt");
        while (!fin.eof())
        {
            getline(fin, s);
            cout << s << endl;
        }
        fin.close();
        return 0;
    }