#include <stdio.h>
int main()
{
    int a;

    printf("The First 10 Even Natural Numbers(in reverse order) are: \n");
    for (a = 10; a >= 1; a--)
    {
        printf("%d \n", 2 * a);
    }
    return 0;
}
