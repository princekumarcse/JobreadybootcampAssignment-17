// 9. Write a C program to sort a string array in ascending order.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], ch;
    int i, j, k, l;
    printf("Enter String:\n");
    fgets(str, 100, stdin);
    l = strlen(str);
    for (i = 1; i < l; i++)
    {
        for (j = 0; j < l - i; j++)
        {
            if (str[j] > str[j + 1])
            {
                ch = str[j];
                str[j] = str[j + 1];
                str[j + 1] = ch;
            }
        }
    }
    printf("Shorted string:\n");
    printf("%s\n",str);
    return 0;
}