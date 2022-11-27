#include <stdio.h>
int main()
{ 
    int a,chck;
    printf("Enter a year = ");scanf("%d",&a);
    

    if(a%400==0||(a%4==0&&a%100!=0)){chck=1;}

    else{chck=2;}

    switch (chck)
    {
    case 1:{
        printf("The year was a leap year.");
        break;}
    
    default:{
        printf("The year is not a leap year.");
        break;}
    }
    return 0;
}
