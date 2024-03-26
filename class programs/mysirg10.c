#include<string.h>
#include<stdio.h>
int main(){
    int i;
    char s[20],a[20],b[20];
    printf("enter 1 string : ");
     gets(s);
    //fgets(s,20,stdin);
      printf("enter 2 string : ");
    gets(b);
    //fgets(b,20,stdin);
   strcpy(a,s);
     //   scanf("%s",s);
   printf("%s", strupr(a));
   strcat(s,b);
   puts(s);
       for(i=0;s[i];i++){
        printf("%c",s[i]);
    }
    return 0;
}