#include <iostream>
#include <fstream> //for reading and writing (ofstream and ifstearm)
// 1. read --> fin  (cin)                    2. write -->fout  (cout)
using namespace std;

int main()
{
    ofstream fout; // for printing creating a object of any name
    string line;
    fout.open("D:/i neuron c++/class programs/file/abc.txt", ios ::app | ios::in | ios::out);
     // giving path in func and giving file name eg.(abc.txt)
    if (!fout)
    { // agr file nhi mili ya open nhi kr paya to yha pr null return krega fout
        cout << "file not creats or open" << endl;
    }
    else
    {
        cout << "enter your data" << endl;
        while (1)
        {
            getline(cin, line);
            if (line == "-1")
            {
                break;
            }
            fout << line << endl;
        }
        // fout<<"name : mehak ";
        cout << "file created successfully" << endl;
    }
    fout.close();
    ifstream fin;
    fin.open("D:/i neuron c++/class programs/file/abc.txt", ios::in);
    while (!fin.eof())
    {
        getline(fin, line);
        cout << line << endl;
    }
    fin.close();
    return 0;
} 