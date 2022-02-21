#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char array[][100] = {"s", "xsxc"};

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        char newString[100] = "Hi!";
        // for (int j = 0; j < sizeof(array[i]); j++)
        // {
        //     printf("%c", array[i][j]);
        // }

        strcat(array[i], newString);
    }

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        printf("%s\n", array[i]);
    }

    return 0;
}