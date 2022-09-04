//1.Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
#include<string.h>
int main()
{
    char name[20],count,i;
    printf("Enter Your Name:\n");
    gets(name);
   while(name[i]!='\0')
    {
        count++;
        i++;
    }
    printf("\nLength Of String is : %d\n",count);
    return 0;
}
