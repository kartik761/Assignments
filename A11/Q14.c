#include <stdio.h>
int main()
{
    int a;

    printf("Table of 2\n");
    for (a = 1; a <= 10; a++)
    {
        printf("2 x %d = %d \n", a, 2 * a);
    }
    return 0;
}

