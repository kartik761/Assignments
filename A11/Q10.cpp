#include <stdio.h>
int main()
{
    printf("The First 10 Odd Natural Numbers\n");

    for (int a = 1; a <= 10; a++)
    {
        printf("%d\n", 2 * a - 1);
    }
}
