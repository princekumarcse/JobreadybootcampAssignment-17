//4. Write a program to convert a given string into uppercase
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter Lower case String:\n");
    fgets(str,20,stdin);
    printf("%s",strupr(str));
    return 0;
}