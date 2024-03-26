#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
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
	    int i;char n[20],p[20];
	    customer c1;
	    cout<<"Enter ID of Customer:"<<endl;
	    cin>>i;
	    cout<<"Enter name of the Customer"<<endl;
	    fflush(stdin);
	    fgets(n,20,stdin);
	    cout<<"Enter your phone number:"<<endl;
	    fflush(stdin);
	    fgets(p,20,stdin);
	    id=i;
	    strcpy(name,n);
	    strcpy(phone_no,p);
    }
    void showdata(){
	cout<<"****************************************************************************"<<endl;
	cout<<"\t\t\tID is        :"<<id<<endl;
	cout<<"\t\t\tName is      :"<<name;
	cout<<"\n\t\t\tPhone No. is :"<<phone_no;
	cout<<"\n****************************************************************************"<<endl;
    }
    void storedata();
    void readdata();
    void searchdata();
    void deletedata();
    void updatedata();

};
void customer :: storedata(){
    char choice;
    while(1){
    ofstream fout;
    clrscr();
    setdata();
    if(id!=0){
	fout.open("customer.txt",ios::out|ios::app);
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
    cout<<"Do u Want to add more customer :(Y/N)"<<endl;
    cin>>choice;
    if(choice=='n' || choice=='N'){
	break;
    }
    }
}
void customer::readdata(){
    ifstream fin;
    clrscr();
    fin.open("customer.txt",ios::in);
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
    fin.open("customer.txt",ios::in);
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
void customer::deletedata(){
    int i,flag=0;
    char choice;
    while(1){
    cout<<"Enter ID of customer u want to delete for:"<<endl;
    cin>>i;
    ifstream fin;
    fin.open("customer.txt",ios::in);
    if(!fin){
	cout<<"FILE IS UNABLE TO OPEN"<<endl;
    }
    else
    {
	ofstream fout;
	fout.open("temp.txt",ios::out);
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
	remove("customer.txt");
	rename("temp.txt","customer.txt");
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

void customer::updatedata(){
    int i,pos,count=0;
    char choice;
    while(1){
    char n[10];
    long p;
    cout<<"Enter Id u want to update :"<<endl;
    cin>>i;
    fstream file;
    file.open("customer.txt",ios::in|ios::out|ios::ate);
    if(!file){
	cout<<"FILE IS UNABLE TO OPEN "<<endl;
    }
    else
    {
	file.seekg(0);
	file.read((char *)this,sizeof(*this));
	count=0;
	while(!file.eof()){
	    if(id==i){
		if(count==0)
		  file.seekp(0);
		if(count!=0){
		    pos=file.tellp()-sizeof(*this)-1;            //-1 because it also includes the null character at the end of string
		    file.seekp(pos);
		}
		setdata();
		file.write((char *)this,sizeof(*this));
	    }
	    count++;
	    file.read((char *)this,sizeof(*this));
	}
	file.close();
    }
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
/*    cout<<"*************** WELCOME ****************** TO ********************** OUR **************************"<<endl;
    cout<<"ooooo   oooooo   ooooooo   ooooooo   o         o   ooooooooo   o         o   oooooooo   ooooooo"<<endl;
    cout<<"o   o   o        o         o     o   o o       o   o       o   o o       o   o          o      "<<endl;
    cout<<"o   o   o        o         o     o   o  o      o   o       o   o  o      o   o          o      "<<endl;
    cout<<"ooooo   oooooo   oooooo    o     o   o   o     o   ooooooooo   o   o     o   o          ooooooo"<<endl;
    cout<<"oo      o              o   o     o   o    o    o   o       o   o    o    o   o          o      "<<endl;
    cout<<"o  o    o              o   o     o   o     o   o   o       o   o     o   o   o          o      "<<endl;
    cout<<"o   o   o              o   o     o   o      o  o   o       o   o      o  o   o          o      "<<endl;
    cout<<"O    o  oooooo   ooooooo   ooooooo   o       o o   o       o   o       o o   oooooooo   ooooooo"<<endl;
    cout<<"***************************************************************************************************"<<endl;
    */
    clrscr();
    do{
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
    getch();
    return 0;
}