#include <stdio.h>
int main()
{
    printf("The First 10 Odd Natural Numbers in reverse are\n");

    for (int a = 10; a >= 1; a--)
    {
        printf("%d\n", 2 * a - 1);
    }
}
