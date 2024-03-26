/*10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks
 having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.*/
 #include<stdio.h>
#include<string.h>
struct marks{
char name[10];
int roll_no;
int chem_marks;
int maths_marks;
int phy_marks;
};
struct marks input(){
    struct marks m;
    fflush(stdin);
printf("\n enter name : ");
fgets(m.name,10,stdin);
m.name[strlen(m.name)-1]='\0';
printf("enter roll no :");
scanf("%d",&m.roll_no);
printf("enter chem marks :");
scanf("%d",&m.chem_marks);
printf("enter maths marks :");
scanf("%d",&m.maths_marks);
printf("enter phy marks :");
scanf("%d",&m.phy_marks);
return m;
}
void display(struct marks m3){
    float avg;
    printf("name : %s \t",m3.name);
    printf("roll_no : %d\t",m3.roll_no);
avg=(m3.chem_marks+m3.maths_marks+m3.phy_marks)/3.0;
printf("percentage : %.2f\n",avg);
}
 int main(){
struct marks m1[5];
int i;
for(i=0;i<5;i++){
m1[i] = input();
}
for(i=0;i<5;i++){
    display(m1[i]);
}
    return 0;
 }