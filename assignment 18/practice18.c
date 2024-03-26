 
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i,len, j, k;
 
  	printf(" Enter a String :  ");
  	gets(str);
  	
  	len = strlen(str);
   k = len - 1;
  	
  	printf("\nReverse Order of string  \n"); 	   	
  	for(i = len - 1; i >= 0; i--)
	{
		if(str[i] == 32 || i == 0)
		{
			if(i == 0)
			{
				j = 0;
			}
			else
			{
				j = i + 1;
			}
			for( j; j<=k; j++)
			{
				printf("%c", str[j]);
			}
			k= i - 1;
			printf(" ");				
		} 
	}
}