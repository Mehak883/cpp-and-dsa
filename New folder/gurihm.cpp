#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<ctime>
using namespace std;
class customer{
    int id;
    char name[20];                           
    char phone_no[20];
    public:
    customer(){
        id=0;
        strcpy(name,"NO INPUT DETAILS");
        strcpy(phone_no,"NO INPUT DETAILS");
    }
    void setdata(){
            int i;
            customer c1;
            cout<<"Enter ID of Customer:"<<endl;
            cin>>i;
            if(!check_duplicacy(i)){
            id=i;
            cout<<"Enter name of the Customer"<<endl;
            fflush(stdin);
            gets(name);
            cout<<"Enter your phone number:"<<endl;
            fflush(stdin);
            gets(phone_no);
            }
            else
                cout<<"THIS ROOM IS ALREADY BOOKED>>> CHECK FOR OTHER ROOM HERE >"<<endl;
    }
    void showdata(){
        cout<<"****************************************************************************"<<endl;
        cout<<"                                ID is        :"<<id<<endl;
        cout<<"                                Name is      :"<<name<<endl;
        cout<<"                                Phone No. is :"<<phone_no<<endl;
        cout<<"****************************************************************************"<<endl;
    }
    void storedata();
    void readdata();
    void searchdata();
    void deletedata();
    void updatedata();
    int check_duplicacy(int i);
    
};

int customer ::check_duplicacy(int i){
    int flag=0;
    ifstream fin;
    fin.open("customer.dat",ios::in);
    if(!fin){
        cout<<"FILE IS UNABLE TO OPEN"<<endl;
    }
    else{
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof()){
            if(this->id==i){
                flag=1;
                return 1;
            }
            fin.read((char*)this,sizeof(*this));
        }
        if(flag==0){
            return 0;
        }
        fin.close();
}
}
void customer :: storedata(){
    char choice;
    while(1){
    ofstream fout;
    system("cls");
    setdata();
    
    if(id!=0){
        fout.open("customer.dat",ios::app);
        if(!fout){
            cout<<"FILE UNABLE TO CREATE "<<endl;
        }
        else{
        fout.write((char *)this,sizeof(*this));
        fout.close();
    }
    }
    else
    cout<<"CUSTOMER DATA IS NOT INITALIZED!"<<endl;
    cout<<"Do u Want to add more customer :"<<endl;
    cin>>choice;
    if(choice=='n' || choice=='N'){
        break;
    }
    }
}  
void customer::readdata(){
    ifstream fin;
    system("cls");
    fin.open("customer.dat",ios::in);
    if(!fin){
        cout<<"FILE IS NOT AVAILABE !"<<endl;
    }
    else
    {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof()){
            showdata();
            fin.read((char*)this,sizeof(*this));
        }
        fin.close();
    }
}

void customer::searchdata(){
    int i,flag=0;
    char choice;
    while(1){
    cout<<"Enter Id of Customer that u Want to search for"<<endl;
    cin>>i;
    ifstream fin;
    fin.open("customer.dat",ios::in);
    if(!fin){
        cout<<"FILE IS UNABLE TO OPEN"<<endl;
    }
    else{
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof()){
            if(this->id==i){
                this->showdata();
                flag=1;
            }
            fin.read((char*)this,sizeof(*this));
        }
        if(flag==0){
            cout<<"YOUR CUSTOMER LEAVE OVER HOTEL "<<endl;
        }
        fin.close();
    }
    cout<<"Do u Want to Search more customer :"<<endl;
    cin>>choice;
    if(choice=='n' || choice=='N'){
        break;
    }
    }
}
void customer::deletedata(){
    int i,flag=0;
    char choice;
    while(1){
    cout<<"Enter ID of customer u want to delete for:"<<endl;
    cin>>i;
    ifstream fin;
    fin.open("customer.dat",ios::in);
    if(!fin){
        cout<<"FILE IS UNABLE TO OPEN"<<endl;
    }
    else
    {   
        ofstream fout;
        fout.open("temp.dat",ios::out);
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof()){
            if(this->id!=i){
                fout.write((char*)this,sizeof(*this));    
            }
            fin.read((char*)this,sizeof(*this));
            if(this->id==i){
                flag=1;
            }
        } 
        fin.close();
        fout.close();
        remove("customer.dat");
        rename("temp.dat","customer.dat");
        if(flag==1){
            cout<<"CUSTOMER IS DELETED !"<<endl;
        }
    }
    cout<<"Do u Want to Delete more customer :"<<endl;
    cin>>choice;
    if(choice=='n' || choice=='N'){
        break;
    }
    }
}

void customer::updatedata(){
    fstream f1;
	  int r1,g=0,choi;
      char choice,n[20];
      while(1){
	  f1.open("customer.dat",ios::in|ios::out|ios::ate);
	  cout<<"\n\t\tEnter id no for updation:"<<endl;
	  cin>>r1;
	  f1.seekg(ios::beg);
	  while(f1.read((char*)this,sizeof(*this)))
	    {
	      if(id==r1)
		{
		 g=1;
		 break;
		}
	    }
	  if(g==1)
	    {
	     cout<<"\n\t\tRecord found...."<<endl;
	     this->showdata();
	     //cout<<"\n\t\tEnter data u want to update:"<<endl;
         //this->setdata();
         cout<<"MAIN-MENU>               "<<endl;
         cout<<"                                    1.Update Name "<<endl;
         cout<<"                                    2.Update Phone Number Details "<<endl;
         cout<<"Enter your choice :"<<endl;
         cin>>choi;
         switch (choi)
         {
         case 1:
            cout<<"Enter New Name :"<<endl;
            cin>>n;
            strcpy(name,n);
            break;
        case 2:
            cout<<"Enter New Phone Number :"<<endl;
            cin>>n;
            strcpy(phone_no,n);
            break;
         
        case 3:
            break;
        }
	     f1.seekp(f1.tellp()-sizeof(*this));
	     f1.write((char*)this,sizeof(*this));
	     }
	  f1.close();
    cout<<"Do u Want to Update more customer :(Y/N)"<<endl;
    cin>>choice;
    if(choice=='n' || choice=='N'){
        break;
    }
    }
}

int main(){
     int choice;
     customer c1;
     time_t timetoday;
     time(&timetoday);
     cout<<"\t\t -------------------------------------------------------------------\n";
	cout<<"\t\t|  OOOOOO OOOOOO OOOOOO OOOOOO O    O OOOOOO O    O OOOOOO OOOOOO   |\n";
	cout<<"\t\t|  O    O O      O      O    O OO   O O    O OO   O O      O        |\n";
	cout<<"\t\t|  OOOOOO OOOOOO OOOOOO O    O O O  O OOOOOO O O  O O      OOOOOO   |\n";
	cout<<"\t\t|  O O    O           O O    O O  O O O    O O  O O O      O        |\n";
	cout<<"\t\t|  O   O  OOOOOO OOOOOO OOOOOO O   OO O    O O   OO OOOOOO OOOOOO   |\n";
	cout<<"\t\t -------------------------------------------------------------------\n";
     cout << "Calendar date and time as per todays is : " << asctime(localtime(&timetoday));
     cout<<"\t\t	*************************************************\n";
	cout<<"\t\t	*                                               *\n";
	cout<<"\t\t	*       -----------------------------           *\n";
	cout<<"\t\t	*        WELCOME TO HOTEL RESONANCE             *\n";
	cout<<"\t\t	*       -----------------------------           *\n";
	cout<<"\t\t	*                                               *\n";
	cout<<"\t\t	*         GOLDEN AVENUE,AMRITSAR                *\n";
    cout<<"\t\t	*         "<<asctime(localtime(&timetoday))<<"  *";
	cout<<"\t\t	*************************************************\n";
    cout<<"Press Enter >"<<endl;
    getchar();
    system("cls");
    do{
    cout<<"MAIN-MENU>               "<<endl;    
    cout<<"                                    1.ADD CUSTOMER "<<endl;
    cout<<"                                    2.DISPLAY DETAILS "<<endl;
    cout<<"                                    3.SEARCH CUSTOMER "<<endl;
    cout<<"                                    4.DELETE CUSTOMER "<<endl;
    cout<<"                                    5.UPDATE CUSTOMER "<<endl;
    cout<<"                                    6.EXIT "<<endl;
    cout<<"ENTER YOUR CHOICE :"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        {   
            c1.storedata();
            break;
        }
    case 2:
        { 
            c1.readdata();
            break;
        }
    case 3:
        {
            c1.searchdata();
            break;
        }
    case 4:
        {
        
            c1.deletedata();
            break;
        }
    case 5:
        {
        
            c1.updatedata();
            break;
        }    
    case 6:
        {
        exit(0);
        }
    }
    }while(choice!=6);
    return 0;
}