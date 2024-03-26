// 7. There are 50 records in a file. Each record contains 6-character item-code, 20 characters for item-name and an integer price.
// Write a program to read these records, arrange them in the descending order of price and write them in the same file, overwriting
// the earlier records.
#include <iostream>
#include <fstream>
using namespace std;
class record
{
    int price;
    char item_code[6];
    char item_name[20];

public:
void enter_rec(){
     fflush(stdin);
            cout << "enter item code : ";
            gets(item_code);
           
            fflush(stdin);
           cout << "enter item name : ";
            gets(item_name);
          
            fflush(stdin);
            cout << "enter price : ";
            cin >> price;
           
}
    void enter_record()
    {
        char ch;
        ofstream fout;
        fout.open("D:/i neuron c++/class programs/file/record.txt", ios::app | ios::out | ios::in);
        do
        {

            enter_rec();
            fout.write((char*)this,sizeof(*this));
            cout << "do you want to enter more record : ";
            cin >> ch;
           
        } while (ch == 'y');
        fout.close();
    }
    void display_rec(){
        cout<<"\nitem code : "<<item_code;
        cout<<"\nitem name : "<<item_name;
        cout<<"\nprice : "<<price;
    }
    void display()
    {
        ifstream fin;
        fin.open("D:/i neuron c++/class programs/file/record.txt", ios::in);
        if(!fin.eof()){
            cout<<"no avail"<<endl;
        }
           fin.read((char*)this,sizeof(*this));
        while (!fin.eof())
        {
            display_rec();
            fin.read((char*)this,sizeof(*this));
        }
        fin.close();
    }

    void sorting()
    {
        int arr[10];
        int c,i=0;
        ifstream fin;
        fin.open("D:/i neuron c++/class programs/file/record.txt", ios::in);
      
    fin.read((char*)this,sizeof(*this));
        while (!fin.eof())
        {
         arr[i]=price;
         c=i;
         i++;
            fin.read((char*)this,sizeof(*this));
        }
        fin.close();
        int t;
        for(i=0;i<=c;i++){
            for(int j=i+1;j<=c;j++){
              if(arr[i]>arr[j]){
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
              }  
            }
        }
ofstream fout;
  fout.open("D:/i neuron c++/class programs/file/record1.txt", ios::app|ios::in|ios::out);
i=0;
    while(i<=c){
fin.open("D:/i neuron c++/class programs/file/record.txt", ios::in);

    fin.read((char*)this,sizeof(*this));
while(!fin.eof()){
  if(arr[i]==this->price){

    fout.write((char*)this,sizeof(*this));  
i++;
    break;
}
    fin.read((char*)this,sizeof(*this));
    }
fin.close();
    }

        fout.close();
        ifstream fin2;
  fin2.open("D:/i neuron c++/class programs/file/record1.txt", ios::in);
        if(!fin2){
            cout<<"no avail"<<endl;
        }
           fin2.read((char*)this,sizeof(*this));
        while (!fin2.eof())
        {
            display_rec();
            fin2.read((char*)this,sizeof(*this));
        }
        fin2.close();
         remove("D:/i neuron c++/class programs/file/record.txt");
        rename("D:/i neuron c++/class programs/file/record1.txt", "D:/i neuron c++/class programs/file/record.txt");
    }   


};
    int main()
    {
        int select;
        record r1;
        while (true)
        {
            cout << "1. Enter record\n2. Display";
            cout << "\nselect one : ";
            cin >> select;
            switch (select)
            {
            case 1:
                r1.enter_record();
                break;
                case 2:
                r1.sorting();
                break;
            default:
                exit(0);
            }
        }
        return 0;
    }