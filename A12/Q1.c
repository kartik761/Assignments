#include <stdio.h>
int main()
{
    int a,i;

    printf("How many times do you need to print \"HELLO WORLD\" = ");
    scanf("%d", &a);
    for(i=0;a>i;i++)
    {
        if(i==a){
            break;
        }
        printf("\n%d) Hello world", i+1);
       
    }
    return 0;
}

