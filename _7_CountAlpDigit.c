/*7. Write a program in C to count the total
number of alphabets, digits and special
characters in a string.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int alpa, digit, spech, i;
    alpa = digit = spech = 0;
    printf("Enter String:\n");
    fgets(str, 100, stdin);
    for (i = 0; str[i]; i++)
    {
        if ((str[i] > 'a' && str[i] < 'z') || (str[i] > 'A' && str[i] < 'z'))
            alpa++;
        else
            if (str[i] > '0' && str[i] < '9')
            {
                digit++;
            }
        else
        {
            spech++;
        }
    }
    printf("No.Of Alphabet: %d\n ", alpa);
    printf("No.Of Digit: %d \n", digit);
    printf("No.Of Special character: %d ", spech);
    return 0;
}