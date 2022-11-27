#include <stdio.h>
int main()
{
    int a;

    printf("The First 10 Even Natural Numbers are: \n");
    for (a = 1; a <= 10; a++)
    {
        printf("%d \n", 2 * a);
    }
    return 0;
}

