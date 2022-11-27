#include <stdio.h>
int main()
{   
    int num,a;
    printf("Enter the number to make last digit 0= ");scanf("%d", &num);
    a=num/10;
    a=a*10;
    printf("The end digit of %d is replaced with 0 and gives %d",num,a);
    
    return 0;
}

