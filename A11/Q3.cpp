#include <stdio.h>
int main()
{
	 int a = 0;

    printf("Enter a number of times to print hello world:\n ");
    scanf("%d", &a);
    while (a > 0)
    {
        printf("Hello world", a);
        a--;
    }
    return 0;
}
