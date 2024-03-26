#include <iostream>
#include <fstream>
using namespace std;
int ID;
class stduent
{
    int id;
    int roll_no;
    char phn_no[12];
    string mail;
    string company;
    string name;
    int age;
    int package;
    string stream;
    int year;

public:
   void setdata(stduent s){
     cin.ignore();
        cout << "enter roll_no : ";
        cin >> s.roll_no;
        fflush(stdin);
        cout << "enter your name : ";
        getline(cin, s.name);
        fflush(stdin);
        cout << "emter your age : ";
        cin >> s.age;
        fflush(stdin);
        cout << "enter phone number : ";
        cin.getline(s.phn_no, 15);
        fflush(stdin);
        cout << "enter mail : ";
        getline(cin, s.mail);
        fflush(stdin);
        cout << "enter your stream : ";
        getline(cin, s.stream);
        cout << "enter package : ";
        cin >> s.package;
        fflush(stdin);
        cout << "enter company : ";
        getline(cin, s.company);
        cout << "enter year : ";
        cin >> s.year;
   }
   void foutdata(stduent s){
     ofstream fout;
        fout.open("D:/i neuron c++/class programs/file/temp.txt", ios ::app);
        fout << "\n"
             << s.id;
        fout << "\n"
             << s.roll_no;
        fout << "\n"
             << s.name;
        fout << "\n"
             << s.age;
        fout << "\n"
             << s.phn_no;
        fout << "\n"
             << s.mail;
        fout << "\n"
             << s.stream;
        fout << "\n"
             << s.package;
        fout << "\n"
             << s.company;
        fout << "\n"
             << s.year;
        fout.close();
   }
   void stufout(stduent s){
    
       ofstream fout;
        fout.open("D:/i neuron c++/class programs/file/student.txt", ios ::app|ios::in|ios::out);
        fout << "\n"
             << id;
        fout << "\n"
             << roll_no;
        fout << "\n"
             << name;
        fout << "\n"
             << age;
        fout << "\n"
             << phn_no;
        fout << "\n"
             << mail;
        fout << "\n"
             << stream;
        fout << "\n"
             << package;
        fout << "\n"
             << company;
        fout << "\n"
             << year;
             fout.close();
   }
    void addstudent()
    {
        setdata(*this);
        ID++;
 ofstream fout;
 stufout(*this);
        fout.open("D:/i neuron c++/class programs/file/id.txt", ios ::trunc | ios::in | ios::out);
        fout << "\n"
             << ID;
        fout.close();
        cout << "record added succesfully";
    }
    void findata(stduent s){ 
ifstream fin;
              fin.open("D:/i neuron c++/class programs/file/student.txt", ios::in);
        while (!fin.eof())
        {
            fin >> s.id;
            fin >> roll_no;
            fin.ignore();
            getline(fin, s.name);
            fin >> s.age;
            fin.ignore();
            fin >> phn_no;
            fin.ignore();
            fin >> mail;
            getline(fin, s.stream);
            fin >> package;
            fin.ignore();
            fin >> company;
            fin >> year;
            fflush(stdin);
            s.print();
        }
        fin.close();
        }

    void displaystudent()
    {
        stduent s;
    findata(s);
    }
    void print()
    {
        cout << " ID = " << id << endl;
        cout << "ROLL NUMBER = " << roll_no << endl;
        cout << "NAME = " << name << endl;
        cout << "AGE = " << age << endl;
        cout << " PHONE number = " << phn_no << endl;
        cout << "E-MAIL = " << mail << endl;
        cout << "STREAM = " << stream << endl;
        cout << "PACKAGE = " << package << endl;
        cout << "COMPANY = " << company << endl;
        cout << "YEAR = " << year << endl;
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
            fin >> roll_no;
            fin.ignore();
            getline(fin, s.name);
            fin >> s.age;
            fin.ignore();
            fin >> phn_no;
            fin.ignore();
            fin >> mail;
            getline(fin, s.stream);
            fin >> package;
            fin.ignore();
            fin >> company;
            fin >> year;
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
    stduent s;
        while (!fin.eof())
        {
  fin >> s.id;
            fin >> roll_no;
            fin.ignore();
            getline(fin, s.name);
            fin >> s.age;
            fin.ignore();
            fin >> s.phn_no;
            fin.ignore();
            fin >> s.mail;
            getline(fin, s.stream);
            fin >>s.package;
            fin.ignore();
            fin >> s.company;
            fin >> s.year;
           
            if (s.id != id)
            {
              foutdata(s);
            }
        }
        fin.close();
        remove("D:/i neuron c++/class programs/file/student.txt");
        rename("D:/i neuron c++/class programs/file/temp.txt", "D:/i neuron c++/class programs/file/student.txt");
        setdata(s);
      stufout(s);
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
                foutdata(s);
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