//5. Write a program to convert a given string into lowercase
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter Upper Case String:\n");
    fgets(str,20,stdin);
    printf("%s",strlwr(str));
    return 0;
}