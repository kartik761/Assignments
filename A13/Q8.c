#include <stdio.h>
int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    switch (num > 0)
    {
        
        case 1:
            printf("%d was positive but now it is negative(%d)", num,-1*num);
        break;

     
        case 0:
            switch (num < 0)
            {
                case 1: 
                    printf("%d was negative but now it is positive(%d)", num,-1*num);
                    break;
                case 0:
                    printf("%d is zero.", num);
                    break;
            }
        break;
    }

    return 0;
}
