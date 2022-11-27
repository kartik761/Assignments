#include <stdio.h>
int main()
{  
    int a;
    printf("Enter from where you want natural numbers in reverse order : ");
    scanf("%d",&a);

    for (int i = a; i > 0; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}
