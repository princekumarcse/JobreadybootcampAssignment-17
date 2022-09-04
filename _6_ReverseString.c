//6. Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter String:\n");
    fgets(str,20,stdin);
    printf("%s",strrev(str));
    return 0;
}