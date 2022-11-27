#include <stdio.h>
int main()
{
    unsigned int week;
    //Ask user to input week number
    printf("Enter week number (1-7): ");
    scanf("%u", &week);
    if(week == 1)
    {
        printf("Have a good monday.");
    }
    else if(week == 2)
    {
        printf("Have a good tuesday.");
    }
    else if(week == 3)
    {
        printf("Have a good wednesday.");
    }
    else if(week == 4)
    {
        printf("Have a good thursday.");
    }
    else if(week == 5)
    {
        printf("Have a good friday.");
    }
    else if(week == 6)
    {
        printf("Have a good saturday.");
    }
    else if(week == 7)
    {
        printf("Have a good sunday.");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }
    return 0;
}
