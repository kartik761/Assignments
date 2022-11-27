#include <stdio.h>
int main()
{int num,fnl;
    printf("Enter the number to make last digit 0= ");scanf("%d", &num);
    fnl=num/10;
    fnl=fnl*10;
    printf("The end digit of %d is replaced with 0 and gives %d",num,fnl);
    
    return 0;
}
