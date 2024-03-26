#include <iostream>
#include <fstream>
using namespace std;
int ID;
class stduent
{
public:
    int id;
    string name;
    int age;
    string stream;
    void addstudent()
    {
        cin.ignore();
        // cin.get();
        cout << "enter your name : ";
        getline(cin, name);
        fflush(stdin);
        cout << "emter your age : ";
        cin >> age;
        fflush(stdin);
        cout << "enter your stream : ";
        getline(cin, stream);
        ID++;
        ofstream fout;
        fout.open("D:/i neuron c++/class programs/file/student.txt", ios ::app | ios::in | ios::out);
        fout << "\n"
             << ID;
        fout << "\n"
             << name;
        fout << "\n"
             << age;
        fout << "\n"
             << stream;
        fout.close();

        fout.open("D:/i neuron c++/class programs/file/id.txt", ios ::app | ios::in | ios::out);
        fout << "\n"
             << ID;
        fout.close();
        cout << "record added succesfully";
    }
    void displaystudent()
    {
        ifstream fin;
        stduent s;
        fin.open("D:/i neuron c++/class programs/file/student.txt", ios::in);
        while (!fin.eof())
        {       
            fin >> s.id;
            fin.ignore();
            getline(fin, s.name);
            fin >> s.age;
            fin.ignore();
            getline(fin, s.stream);
            fflush(stdin);
            s.print();
        }
        fin.close();
    }
    void print()
    {
        cout << " ID = " << id << endl;
        cout << "NAME = " << name << endl;
        cout << "AGE = " << age << endl;
        cout << "STREAM = " << stream << endl;
        cout << "____________________________________" << endl
             << endl;
    }
    void searchstudent(int id)
    {
        ifstream fin;
        stduent s;
        fin.open("D:/i neuron c++/class programs/file/student.txt", ios::in);
        while (!fin.eof())
        {
            fin >> s.id;
            fin.ignore();
            getline(fin, s.name);
            fin >> s.age;
            fin.ignore();
            getline(fin, s.stream);
            if (s.id == id)
            {
                s.print();
                getchar();
                break;
            }
        }
        fin.close();
    }
    void updatestudent(int id)
    {
        ifstream fin;
        fin.open("D:/i neuron c++/class programs/file/student.txt", ios::in);

        ofstream fout;
        fout.open("D:/i neuron c++/class programs/file/temp.txt", ios::app);
        stduent s;
        while (!fin.eof())
        {
            fin >> s.id;
            fin.ignore();
            getline(fin, s.name);
            fin >> s.age;
            fin.ignore();
            getline(fin, s.stream);
            if (s.id != id)
            {
                fout << "\n"
                     << s.id;
                fout << "\n"
                     << s.name;
                fout << "\n"
                     << s.age;
                fout << "\n"
                     << s.stream;
            }
        }
        fin.close();
        fout.close();
        remove("D:/i neuron c++/class programs/file/student.txt");
        rename("D:/i neuron c++/class programs/file/temp.txt", "D:/i neuron c++/class programs/file/student.txt");
        cin.ignore();
        // cin.get();]
        s.id = id;
        cout << "\nenter your name : ";
        getline(cin, s.name);
        fflush(stdin);
        cout << "emter your age : ";
        cin >> s.age;
        fflush(stdin);
        cout << "enter your stream : ";
        getline(cin, s.stream);
        fout.open("D:/i neuron c++/class programs/file/student.txt", ios ::app | ios::in | ios::out);
        fout << "\n"
             << s.id;
        fout << "\n"
             << s.name;
        fout << "\n"
             << s.age;
        fout << "\n"
             << s.stream;
        fout.close();
    }
    void deletestudent(int id)
    {
        ifstream fin;
        fin.open("D:/i neuron c++/class programs/file/student.txt", ios::in);

        ofstream fout;
        fout.open("D:/i neuron c++/class programs/file/temp.txt", ios::app);
        stduent s;
        while (!fin.eof())
        {
            fin >> s.id;
            fin.ignore();
            getline(fin, s.name);
            fin >> s.age;
            fin.ignore();
            getline(fin, s.stream);
            if (s.id != id)
            {
                fout << "\n"
                     << s.id;
                fout << "\n"
                     << s.name;
                fout << "\n"
                     << s.age;
                fout << "\n"
                     << s.stream;
            }
        }
        fin.close();
        fout.close();
        remove("D:/i neuron c++/class programs/file/student.txt");
        rename("D:/i neuron c++/class programs/file/temp.txt", "D:/i neuron c++/class programs/file/student.txt");
        cout << "\n record deleted successfully \n";
    }
};

int main()
{
    system("cls");
    int choice;
    cout << "enter your choice : ";
    ifstream fin;
    fin.open("D:/i neuron c++/class programs/file/id.txt", ios::in);
    if (!fin)
    {
        cout << "file not found !!!" << endl;
    }
    else
    {
        while (!fin.eof())
        {
            fin >> ID;
        }
    }
    fin.close();
    cout << "ID = " << ID << endl;
    while (true)
    {
        cout << "1. add student" << endl;
        cout << "2. print all the students" << endl;
        cout << "3. search a student " << endl;
        cout << "4. update a student " << endl;
        cout << "5. delete a student " << endl;

        cin >> choice;
        getchar;
             system("cls");
             
        stduent s;
        int id;
        switch (choice)
        {
        case 1:
            s.addstudent();
            cin.ignore();
            getchar;
            system("cls");
            break;
        case 2:
            s.displaystudent();
              cin.ignore();
            getchar;
            system("cls");
            break;
        case 3:
            cout << "enter student id : ";
            cin >> id;
            s.searchstudent(id);
             cin.ignore();
            getchar;
            system("cls");
            break;
        case 4:
            cout << "enter student id : ";
            cin >> id;
            s.updatestudent(id);
             cin.ignore();
            getchar;
            system("cls");
            break;
        case 5:
            cout << "enter student id : ";
            cin >> id;
            s.deletestudent(id);
             cin.ignore();
            getchar;
            system("cls");
            break;
        default:
            return 0;
        }
    }
    return 0;
}