#include <stdio.h>
int main()
{   
    int input;
    printf("How much pairs you want to add = ");scanf("%d",&input);
    for (int i = 1; i <= input; i++)
    {   int a=0,b=0;
        printf("(pair %d)Enter the 1st value =",i);scanf("%d",&a);
        printf("(pair %d)Enter the 2nd value =",i);scanf("%d",&b);
        printf("The sum of %d and %d is %d \n",a,b,a+b);
    }
    
    
    return 0;
}
