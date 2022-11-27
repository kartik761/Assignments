#include <stdio.h>
int main()
{
    printf("The First 10 Odd Natural Numbers in reverse are\n");

    for (int i = 10; i >= 1; i--)
    {
        printf("%d\n", 2 * i - 1);
    }
}

