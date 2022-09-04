//2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
#include<stdio.h>
int main()
{
 char name[20],ch;
 int count=0,i;
 printf("Enter String:\n");
 fgets(name,20,stdin);
 printf("Enter a Character:\n");
 ch=getchar();
for(i=0;name[i];i++)
 {
     if(name[i]==ch)
     {
        count++;
     }
 }
 printf("Number of Occurance of '%c' is : %d \n",ch,count);
 return 0;
}
