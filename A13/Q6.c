#include <stdio.h>
int main()
{
    int var;
    printf("Enter::=1) for good. \n2) for better. \n3) for best.");
    scanf("%d",&var);
    
    // if(var == 1) printf("good"); 
    // else if(var == 2) printf("better"); 
    // else if(var == 3) printf("best"); 
    // else
    // printf("invalid"); 
    switch(var)
    {
        case 1:{printf("good"); 
            break;
        }
        case 2:{printf("better"); 
            break;
        }
        case 3:{printf("best"); 
            break;
        }
        default:{printf("invalid"); 
            break;}

    }

}
