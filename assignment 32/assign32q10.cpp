// Create a C++ class for player objects with the following attributes: player no., name, number of matches and number of goals done in 
// each match. The number of matches varies for each player. Write a parameterized constructor which initializes player no., name, number
// of subjects and creates an array for number of goals and number of matches dynamically.
// . Create a C++ class for player objects with the following attributes: player no., name,
// number of matches and number of goals done in each match. The number of
// matches varies for each player. Write a parameterized constructor which initializes
// player no., name, number of subjects and creates an array for number of goals and
// number of matches dynamically
#include<iostream>
#include<string.h>
using namespace std;
class player{
    int no;
    char name[10];
    int number_of_matches;
    int *number_of_goals_done;
    public:
    player(){
      strcpy(name,"no");
      no=0;
      number_of_matches=0;
    }
    void setdata(){
        cout<<"Enter Player number :"<<endl;
        cin>>no;
        cout<<"Enter Player Name :"<<endl;
        fflush(stdin);
        cin>>name;
        cout<<"Enter total NUmber of matches Played :"<<endl;
        cin>>number_of_matches;
    }
    void goal_counter(){
        number_of_goals_done=new int[number_of_matches];
        for (int i = 0; i < number_of_matches; i++)
        {
            cout<<"Enter Number of goals done :"<<endl;
            cin>>number_of_goals_done[i];
        }
    }
    void display(){
        cout<<"******************************************************"<<endl;
        cout<<"Player Number :"<<no<<endl;
        cout<<"Player Name :"<<name<<endl;
        cout<<"Number of matches :"<<number_of_matches<<endl;
        for (int i = 0; i < number_of_matches; i++)
        {
            cout<<"Number of goals done in Matches"<<i+1<<"="<<number_of_goals_done[i]<<endl;
        }
        cout<<"******************************************************"<<endl;
    }
};
int main(){
    int total;
    cout<<"Enter total number of players :"<<endl;
    cin>>total;
    player p[total];
    for (int i = 0; i < total ; i++)
    {
        p[i].setdata();
        fflush(stdin);
        p[i].goal_counter();
    }
    for (int i = 0; i < total ; i++)
    {
        p[i].display();
    }
    return 0;
}