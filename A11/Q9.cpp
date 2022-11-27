#include <stdio.h>
int main()
{

    int a, b;

    printf("Enter starting value to revrse it: ");
    scanf("%d", &b);

    for (a = b; a >= 1; a--)
    {
        printf("%d\n", a);
    }

    return 0;
}
