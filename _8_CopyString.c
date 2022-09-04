//8. Write a program in C to copy one string to another string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], cop[100];
    printf("Enter String:\n");
    fgets(str,100,stdin);
    printf("%s",strcpy(cop,str));
    return 0;
}