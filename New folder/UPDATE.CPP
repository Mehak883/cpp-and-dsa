// Program to find sum of two numbers

	# include<iostream.h>
	# include<conio.h>
	# include<stdio.h>
	# include<string.h>
	#include<fstream.h>

	class stu
	{
	  public:
	  int rn;
	  char name[20];
	  void get()
	  {
	    cin>>rn;
	    fflush(stdin);
	    gets(name);
	  }
	  void show()
	  {
	  printf("\t\t%d  %s\n\n",rn,name);
	  }
	}s1;
	void main()
	 {
	  fstream f1;
	  int r1,g=0;
	  clrscr();
	  f1.open("aa.dat",ios::in|ios::out|ios::ate);
	  cout<<"\n\t\tEnter rollno for updation:";
	  cin>>r1;
	  f1.seekg(0);
	  while(f1.read((char*)&s1,sizeof(s1)))
	    {
	      if(s1.rn==r1)
		{
		 g=1;
		 break;
		}
	    }
	  if(g==1)
	    {
	      char n[20];
	      cout<<"\n\t\tRecord found....";
	      s1.show();
	      cout<<"\n\t\tEnter name to be updated:";
	      gets(n);
	      strcpy(s1.name,n);
	      f1.seekp(f1.tellp()-sizeof(s1));
	      f1.write((char*)&s1,sizeof(s1));
	     }
	  f1.close();
	  getch();
     }


