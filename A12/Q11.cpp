#include <stdio.h>
int main()
{
    int i;

    printf("The First 10 Even Natural Numbers(in reverse order) are: \n");
    for (i = 10; i >= 1; i--)
    {
        printf("%d \n", 2 * i);
    }
    return 0;
}

