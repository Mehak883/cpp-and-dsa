#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<ctime>
using namespace std;
class customer{
    protected:
    int id;
    char name[20];                           
    char phone_no[20];
    int room_number_allocator;
    int Number_of_days_u_stay;
    char room_type[6];
    public:
    customer(){
        id=0;
        strcpy(name,"NO INPUT DETAILS");
        strcpy(phone_no,"NO INPUT DETAILS");
        strcpy(room_type,"NO");
        room_number_allocator=0;
        Number_of_days_u_stay=0;
        }
    void setdata();                //for entring data from user
    void storedata();              //for entring data into file
    void readdata();               //reading data from file
    void searchdata();             //searching data from the file  
    void showdata();               //displaying data from file  
    void deletedata();             //deleting data from file
    void updatedata();             //updating data from file
    int check_duplicacy(int i);    //removing duplicay
    int room_allocator();          //room allocation by pc 
};



int customer ::check_duplicacy(int i){                     //function for duplicacy of room booking
    int flag=0;
    ifstream fin;
    fin.open("customer.dat",ios::in);
    if(!fin){
        cout<<"First Customer :"<<endl;
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
void customer::setdata(){                     //function for storing data
            int i;
            customer c1;
            cout<<"Enter Entry ID of Customer:"<<endl;
            cin>>i;
            if(!check_duplicacy(i)){
            id=i;
            cout<<"Enter Name of the Customer"<<endl;
            fflush(stdin);
            gets(name);
            cout<<"Enter your Phone number:"<<endl;
            fflush(stdin);
            gets(phone_no);
            cout<<"Enter Number of Days u want to stay for :"<<endl;
            cin>>Number_of_days_u_stay;
            fflush(stdin);
            cout<<"Enter Type of Room :(SNA/SA/DNA/DA)"<<endl;
            fflush(stdin);
            gets(room_type);
            room_number_allocator=room_allocator();
            }
            else
                cout<<"THIS ROOM IS ALREADY BOOKED>>> CHECK FOR OTHER ROOM HERE >"<<endl;
    }
void customer:: showdata(){             
        cout<<"****************************************************************************"<<endl;
        cout<<"                                ENTRY ID is         :"<<id<<endl;
        cout<<"                                Name is             :"<<name<<endl;
        cout<<"                                Phone No. is        :"<<phone_no<<endl;
        cout<<"                                Stay                :"<<Number_of_days_u_stay<<endl;
        cout<<"                                Type                :"<<room_type<<endl;
        cout<<"                                Your Room is BOOKED :"<<room_number_allocator<<endl;
        cout<<"****************************************************************************"<<endl;
    }
void customer :: storedata(){                             //function for storing data into file
    char choice; 
    while(1){
    ofstream fout;
    system("cls");
    setdata();
    
    if(id!=0){
        fout.open("customer.dat",ios::app);
        if(!fout){
            cout<<"FILE UNABLE TO CREATE "<<endl;
            exit(0);
        }
        else{
        fout.write((char *)this,sizeof(*this));
        fout.close();
    }
    }
    else
    cout<<"CUSTOMER DATA IS NOT INITALIZED!"<<endl;
    cout<<"Do u Want to add more customer :(Y/N)"<<endl;
    cin>>choice;
    if(choice=='n' || choice=='N'){
        break;
    }
    }
}  
void customer::readdata(){                        // function reads data from file to  screen
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
            getchar(); 

        }
        fin.close();
    }
}

void customer::searchdata(){                                 //function for searching data 
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
    cout<<"Do u Want to Search more customer :(Y/N)"<<endl;
    cin>>choice;
    if(choice=='n' || choice=='N'){
        break;
    }
    }
}
void customer::deletedata(){                             //function for deleting data 
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
    cout<<"Do u Want to Delete more customer :(Y/N)"<<endl;
    cin>>choice;
    if(choice=='n' || choice=='N'){
        break;
    }
    }
}

void customer::updatedata(){                                       //function for updating data
    fstream f1;
	  int r1,g=0,choi,i;
      char choice,n[20];
      while(1){
	  f1.open("customer.dat",ios::in|ios::out|ios::ate);
	  cout<<"Enter id no for updation:"<<endl;
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
         cout<<"MAIN-MENU>               "<<endl;
         cout<<"                                    1.Update Name "<<endl;
         cout<<"                                    2.Update Phone Number Details "<<endl;
         cout<<"                                    3.Update ROOM type "<<endl;
         cout<<"                                    4.Update Stay Days "<<endl;
         cout<<"Enter your choice :"<<endl;
         cin>>choi;
         switch (choi)
         {
         case 1:
            cout<<"Enter New Name :"<<endl;                               
            fflush(stdin);
            cin>>n;
            strcpy(name,n);
            break;
        case 2:
            cout<<"Enter New Phone Number :"<<endl;                         
            fflush(stdin);
            cin>>n;
            strcpy(phone_no,n);
            break;
        case 3:
            cout<<"Enter New Type of Room :(SNA/SA/DNA/DA)"<<endl;                        
            fflush(stdin);
            cin>>n;
            strcpy(room_type,n);
            break;        
        case 4:
            cout<<"Enter New Stay Days :"<<endl;                        
            cin>>i;
            Number_of_days_u_stay=i;
            break; 
        default :
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

class Room :public customer{ 
    public:
    void room_details();           //introducing the various features of hotel
    void room_reader();            //giving the avaliability of room
    void room_rent();              //giving the bill info about customer
};
void Room::room_details(){
     cout<<"\t\t	*************************************************\n";
	cout<<"\t\t	*                                               *\n";
	cout<<"\t\t	*       -----------------------------           *\n";
	cout<<"\t\t	*        WELCOME TO HOTEL RESONANCE             *\n";
	cout<<"\t\t	*       -----------------------------           *\n";
	cout<<"\t\t	*                                               *\n";
	cout<<"\t\t	*         GOLDEN AVENUE,AMRITSAR                *\n";
	cout<<"\t\t	*************************************************\n";
    cout<<"\t\t Single Room: A room assigned to one person. May have one or more beds "<<endl<<"\t\t Double Room: A room assigned to two people. May have one or more beds.  "<<endl;
    cout<<"\t\t               ROOM RENTS                         "<<endl;
    cout<<"\t\t        (i)  . Single Non-AC ROOM is : 1000(one night)"<<endl;
    cout<<"\t\t        (ii) . Single AC ROOM is : 1500(one night)"<<endl;
    cout<<"\t\t        (iii). Double Non-AC ROOM is : 2000(one night)"<<endl;
    cout<<"\t\t        (iv) . Double AC ROOM is : 2500(one night)"<<endl;
    getchar();                          

}
void Room::room_rent(){
    float bill_amount=0,rate=0;
    int i,flag=0;
    char choice;
    cout<<"Enter Id of Customer "<<endl;
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
                showdata();
                if(strcmp(room_type,"SNA")==0)
                rate=1000;
                else if(strcmp(room_type,"SA")==0)
                rate=1500;
                else if(strcmp(room_type,"DNA")==0)
                rate=2000;
                else if(strcmp(room_type,"DA")==0)
                rate=2500;
                else
                {cout<<"Update Room type first:"<<endl;
                break;}
                bill_amount=Number_of_days_u_stay*rate;
                flag=1;
            }
            fin.read((char*)this,sizeof(*this));
        }
        if(flag==1){
            cout<<"****************************************************************************"<<endl;
            cout<<"                            Your bill is :"<<bill_amount<<endl;
            cout<<"**********************(THANKS FOR STAYING IN OUR HOTEL)*********************"<<endl;
        }
        if(flag==0){
            cout<<"YOUR CUSTOMER LEAVE OVER HOTEL "<<endl;
        }
        fin.close();
    }
}
void Room::room_reader(){
    ifstream fin;
    system("cls");
    fin.open("customer.dat",ios::in);
    if(!fin){
        cout<<"FILE IS NOT AVAILABE !"<<endl;
    }
    else
    {   
        fin.read((char*)this,sizeof(*this));
        cout<<"TOTAL ROOMS : 100 "<<endl;
        cout<<"Rooms allocated :"<<endl;

        while(!fin.eof()){
            cout<<"Room number '"<<room_number_allocator<<"' is allocated to '"<<name<<"' this customer "<<endl;
            fin.read((char*)this,sizeof(*this));
            getchar(); 

        }
        fin.close();
    }
}
int customer::room_allocator(){
    //Total numer of room are 100;
    int i,j,temp,a[100];
    srand(time(0));
    for (i = 0; i<=99; i++)
    {
        temp=rand()%100;
        for (j = 0; j <=i-1; j++)
        {
            if(temp==a[j]){
                break;
            }
        }
        if(i==j){
            return temp;
        }
        else
           i--;
    }

}
int main(){
     int choice;
    Room c1;
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
    cout<<"MAIN-MENU>               "<<endl;                                              //main menu()
    cout<<"                                    1.ROOM DETAILS "<<endl;
    cout<<"                                    2.CUSTOMER DETAILS"<<endl;
    cout<<"                                    3.BILLS"<<endl;
    cout<<"                                    4.Exit"<<endl;
    
    cout<<"ENTER YOUR CHOICE :"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        { 
                       int choi;
                       system("cls");        
                       do{
                       cout<<"MAIN-MENU>               "<<endl;                                              //main menu()
                       cout<<"                                    1.ROOM AVAILABLE "<<endl;
                       cout<<"                                    2.ROOM BOOOKING "<<endl;
                       cout<<"                                    3.LIST OF TOTAL ROOM ALLOCATED "<<endl;
                       cout<<"                                    4.EXIT "<<endl;
                       cout<<"ENTER YOUR CHOICE :"<<endl;
                       cin>>choi;
                       switch (choi)
                       {
                       case 1:
                           {   
                               c1.room_details();
                               break;
                           } 
                       case 2:
                           {   
                               c1.storedata();
                               break;
                           }
                       case 3:
                           {   
                               c1.room_reader();
                               break;
                           }   
                       case 4:
                           {
                              break;
                           }
                       }
                       }while(choi!=4);
                       break;
        }
    case 2:
    {   
                       int choi;        
                       do{
                       cout<<"MAIN-MENU>               "<<endl;                                              //main menu()
                       cout<<"                                    1.ADD CUSTOMER (no)"<<endl;
                       cout<<"                                    2.DISPLAY DETAILS "<<endl;
                       cout<<"                                    3.SEARCH CUSTOMER "<<endl;
                       cout<<"                                    4.DELETE CUSTOMER "<<endl;
                       cout<<"                                    5.UPDATE CUSTOMER "<<endl;
                       cout<<"                                    6.EXIT "<<endl;
                       cout<<"ENTER YOUR CHOICE :"<<endl;
                       cin>>choi;
                       switch (choi)
                       {
                       case 1:
                           {   
                               //c1.storedata();
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
                           break;
                           }
                       }
                       }while(choi!=6);
                               break;
        }
    case 3:
        {             
                        char chapcha[6];
                        cout<<"U WANT TO GENERATE A BILL"<<endl;
                        cout<<"Enter CHAPCHA          (Me57i)"<<endl;
                        cin>>chapcha;
                        if(strcmp(chapcha,"Me57i")==0){
                         c1.room_rent();
                         getch();       
                        }   
                         break;
        }
    case 4:
        {
        exit(0);
        }
    }
    }while(choice!=4);
    return 0;
}