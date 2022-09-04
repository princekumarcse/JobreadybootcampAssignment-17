// 10. Write a program in C to Find the Frequency of Characters.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], ch;
    int i, j, count = 0;
    printf("Enter String:\n");
    fgets(str, 100, stdin);
    printf("Enter Character to find its frequency:\n");
    scanf("%c", &ch);
    for (i = 0; str[i]; i++)
    {
        if (ch == str[i])
        {
            count++;
        }
    }
    printf("Number of %c == %d",ch, count);
    return 0;
}