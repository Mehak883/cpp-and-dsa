#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class student
{

public:
    int roll_no;
    int package;
    char company[15];
    char name[15];
    char phone_number[15];
    char email[25];
    int year;
    int company_id;
    int id;
    student()
    {
        id = 0;
        roll_no = 0;
        strcpy(name, "NO ");
        strcpy(phone_number, "NO");
        strcpy(email, "NO");
        strcpy(company, "NO");
        company_id = 0;
        package = 0;
        year = 0;
    }
    void display();
    void setdata();
    void getdata();
    void enter_record();
    void search();
    void update();
    void delete_rec();
};
class company_c : public student
{

public:
    void comp_enter();
    void comp_show();
};
void company_c::comp_show(){
ifstream fin;
 int flag=0;
 char duplicacy[10];
 char dupli[10];
 strcpy(dupli,"");
 fin.open("D:/i neuron c++/class programs/file/std.txt", ios::in);
        if (!fin)
        {
            cout << "FILE IS NOT AVAILABLE !" << endl;
        }
         else
        {
            fin.read((char *)this, sizeof(*this));

            while (!fin.eof())
            {
                flag=0;
                strcpy(duplicacy,company);
                if(strcmp(duplicacy,dupli)==0){
                 flag=1;
                }
                if(flag==0){
               cout<<company<<"\t\t"<<company_id<<endl;
                }
                 strcpy(dupli,duplicacy);
                fin.read((char *)this, sizeof(*this));
                }
            }
            fin.close();
        }
void company_c::comp_enter()
{
    ifstream fin;
    int i;
    int temp = 0;
    int flag=0;
    char ch;
    do
    {
        cout << "enter id of company to show details : ";
        cin >> i;
        temp = 0;
flag=0;
        fin.open("D:/i neuron c++/class programs/file/std.txt", ios::in);
        if (!fin)
        {
            cout << "FILE IS NOT AVAILABLE !" << endl;
        }
        else
        {
            fin.read((char *)this, sizeof(*this));
            while (!fin.eof())
            {
                if (this->company_id == i)
                {
                    if(flag==0){
                        cout<<company<<endl;
                        cout<<endl;
                    }
                    flag=1;
                    temp = 1;
                    cout << name << " \t\t" << package << "\t\t" << year << "\n";
                }
                fin.read((char *)this, sizeof(*this));
            }
            if (temp == 0)
            {
                cout << "RECORD NOT FOUND " << endl;
            }
        }
        fin.close();
        cout << "Do u Want to Search more data : ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}
void student::setdata()
{
    id++;
    cout << "enter  roll number : ";
    cin >> roll_no;
    fflush(stdin);
    cout << "enter name : ";
    gets(name);
    fflush(stdin);
    cout << "enter phone number : ";
    gets(phone_number);
    fflush(stdin);
    cout << "enter email : ";
    gets(email);
    fflush(stdin);
    cout << "enter company : ";
    gets(company);
    cout << "enter company id : ";
    cin >> company_id;
    cout << "enter package : ";
    cin >> package;
    cout << "enter year : ";
    cin >> year;
}

void student::enter_record()
{
    char ch;
    while (true)
    {
        ofstream fout;
        //  ofstream f2;
        this->setdata();
        if (id != 0)
        {

            fout.open("D:/i neuron c++/class programs/file/std.txt", ios::app | ios::in | ios::out);
            if (!fout)
            {
                cout << "\nFILE UNABLE TO CREATE\n";
            }
            else
            {
                fout.write((char *)this, sizeof(*this));
                fout.close();
                fout.open("D:/i neuron c++/class programs/file/stdid.txt", ios::app | ios::in | ios::out);
                fout << endl
                     << id << endl;
                fout.close();
            }
        }
        else
        {
            cout << "STUDENT DATA IS NOT INITIALIZED" << endl;
        }
        cout << "Do u Want to add more data :(Y/N)" << endl;
        cin >> ch;
        if (ch == 'n' || ch == 'N')
        {
            break;
        }
        cout << "\nRecord added successfully";
    }
}

void student::getdata()
{
    cout << "\n*************************************\n\n";
    cout << "\n ID : " << id;
    cout << "\nRoll number : " << roll_no;
    cout << "\nName : " << name;
    cout << "\nPhone Number : " << phone_number;
    cout << "\nEmail id : " << email;
    cout << "\nComapany : " << company;
    cout << "\nComapany id : " << company_id;
    cout << "\nPackage : " << package;
    cout << "\nYear : " << year;
    cout << "\n**************************************\n\n";
}

void student::display()
{
    ifstream fin;
    fin.open("D:/i neuron c++/class programs/file/std.txt", ios::in);
    if (!fin)
    {
        cout << "FILE IS NOT AVAILABLE !" << endl;
    }
    else
    {
        fin.read((char *)this, sizeof(*this));
        while (!fin.eof())
        {
            this->getdata();
            fin.read((char *)this, sizeof(*this));
        }
        fin.close();
    }
}

void student::search()
{
    ifstream fin;
    int temp = 0, i;
    char ch;
    while(true)
    {
        temp = 0;
        cout << "ENTER ID TO SEARCH : ";
        cin >> i;
        fin.open("D:/i neuron c++/class programs/file/std.txt", ios::in);
        if (!fin)
        {
            cout << "FILE IS NOT AVAILABLE !" << endl;
        }
        else
        {
            fin.read((char *)this, sizeof(*this));
            while (!fin.eof())
            {

                if (this->id == i)
                {
                    cout << "RECORD FOUND!!!" << endl;
                    temp = 1;
                    this->getdata();
                }
                fin.read((char *)this, sizeof(*this));
            }
            if (temp == 0)
            {
                cout << "RECORD NOT FOUND " << endl;
            }
        }
        fin.close();
        cout << "Do u Want to Search more data : ";
        cin >> ch;
        if(ch=='N'||ch=='n'){
            break;
        }
        system("cls");
        getchar();
    } 
}

void student::update()
{
    fstream f1;
    int r1, g = 0, choi;
    char choice, n[20];
    while (1)
    {
        f1.open("D:/i neuron c++/class programs/file/std.txt", ios::in | ios::out | ios::ate);
        cout << "\n\t\tEnter id no for updation:" << endl;
        cin >> r1;
        f1.seekg(ios::beg);

        while (f1.read((char *)this, sizeof(*this)))
        {
            if (id == r1)
            {
                g = 1;
                break;
            }
        }
        if (g == 1)
        {
            cout << "\n\t\tRecord found...." << endl;
            this->getdata();

            cout << "UPDATE ->" << endl;
            cout << "                                    1. Update Name " << endl;
            cout << "                                    2. Update Phone Number Details " << endl;
            cout << "                                    3. Update Email " << endl;
            cout << "Enter your choice :" << endl;
            cin >> choi;
            switch (choi)
            {
            case 1:
                cout << "Enter New Name :" << endl;
                cin >> n;
                strcpy(name, n);
                cout << "\n RECORD UPDATED !!!\n";
                break;
            case 2:
                cout << "Enter New Phone Number :" << endl;
                cin >> n;
                strcpy(phone_number, n);
                cout << "\n RECORD UPDATED !!!\n";
                break;

            case 3:
                break;
            }
            f1.seekp(f1.tellp() - sizeof(*this));
            f1.write((char *)this, sizeof(*this));
        }
        f1.close();
        cout << "Do u Want to Update more student :(Y/N)" << endl;
        cin >> choice;
        if (choice == 'n' || choice == 'N')
        {
            break;
        }
        system("cls");
        getchar();
    }
}

void student::delete_rec()
{
    int i, flag = 0;
    char choice;
    while (1)
    {
        cout << "Enter ID of student u want to delete for:" << endl;
        cin >> i;
        ifstream fin;
        fin.open("D:/i neuron c++/class programs/file/std.txt", ios::in);
        if (!fin)
        {
            cout << "FILE IS UNABLE TO OPEN" << endl;
        }
        else
        {
            ofstream fout;
            fout.open("D:/i neuron c++/class programs/file/std_temp.txt", ios::out);
            fin.read((char *)this, sizeof(*this));
            while (!fin.eof())
            {
                if (this->id != i)
                {
                    fout.write((char *)this, sizeof(*this));
                }
                fin.read((char *)this, sizeof(*this));
                if (this->id == i)
                {
                    flag = 1;
                }
            }
            fin.close();
            fout.close();
            remove("D:/i neuron c++/class programs/file/std.txt");
            rename("D:/i neuron c++/class programs/file/std_temp.txt", "D:/i neuron c++/class programs/file/std.txt");
            if (flag == 1)
            {
                cout << "STUDENT IS DELETED !" << endl;
            }
        }
        cout << "Do u Want to Delete more customer :" << endl;
        cin >> choice;
        if (choice == 'n' || choice == 'N')
        {
            break;
        }
        system("cls");
        getchar();
    }
}
int main()
{
    int id_s;
    char m;
    student s1;
    company_c c1;
    cout << sizeof(s1);
    int choice, first_ch;
    ifstream fin;
    fin.open("D:/i neuron c++/class programs/file/stdid.txt", ios::in);
    if (!fin)
    {
        cout << "file not found !!!" << endl;
    }
    else
    {
        while (!fin.eof())
        {
            fin >> c1.id;
        }
    }
    fin.close();
    // cout << "ID = " << s1.id << endl;
    system("cls");
    //   getchar();
    while (true)
    {
        cout << "\n<><><><><><><><><><><><><><><><><><><><><>";
        cout << "\n<><>PLACEMENT RECORD MANAGEMENT SYSTEM<><>";
        cout << "\n<><><><><><><><><><><><><><><><><><><><><>\n";
        cout << "\n\n________________________\n";
        cout << "     1. STUDENT DETAILS\n";
        cout << "     2. COMPANY DERAILS\n";
        cout << "________________________\n";
        cout << "\n\n\nENTER YOUR CHOICE : ";
        cin >> first_ch;
        // system("cls");
        // getchar();
        switch (first_ch)
        {
        case 1:
            while (true)
            {
                  getchar();
              system("cls");

                cout << " __________________\n";
                cout << " 1. ENTER RECORD  \n";
                cout << " __________________\n";
                cout << " 2.DISPLAY RECORD \n";
                cout << " __________________\n";
                cout << " 3.SEARCH RECORD\n";
                cout << " __________________\n";
                cout << " 4.UPDATE RECORD\n";
                cout << " __________________\n";
                cout << " 5.DELETE RECORD\n";
                cout << " __________________\n";
                cout << " 6.EXIT\n";
                cout << " __________________\n";

                cout << "\nENTER YOUR CHOICE : ";
                cin >> choice;
                system("cls");
                 getchar();
                switch (choice)
                {
        
                case 1:
                    c1.enter_record();
                    break;
                case 2:
                    c1.display();
                    break;
                case 3:
                    c1.search();
                    break;
                case 4:
                    c1.update();
                    break;
                case 5:
                    c1.delete_rec();
                    break;
                default:
                    cout << "\nGO TO MAIN MENU (Y/N)\n";
                    m = 'y';
                    break; 
                }
                if (m == 'y')
                {
                    break;
                }
    
            }
            break;
        case 2:
            char sec_ch;
            while (true)
            {
                cout << "<><><><><><><><><><><><><><><><><><><><>\n";
                cout << "<><><><><>COMPANY DATA<><><><><>\n";
                cout << "<><><><><><><><><><><><><><><><><><><><>\n\n\n\n";
c1.comp_show();
                c1.comp_enter();

                cout << "\nGO TO MAIN MENU (Y/N)\n";
                cin >> m;
                if ((m == 'y') || m == 'Y')
                {
                    break;
        
                }
            }
                  system("cls");   
getchar();
            break;
        default:
            exit(0);
        }
    }
    return 0;
}