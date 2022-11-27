#include <stdio.h>
int main()
{
    int a, b = 1, num;
    printf("Enter the number for factorial = ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        b=b*i;
    }
    printf("The value of factorial is %d", b);

    return 0;
}

