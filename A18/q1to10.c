#include<stdio.h>

// Q1

int Q1(){
    int a[10],sum=0;
    for (int i = 0; i < 10; i++)
    {
        printf("The array value at position %d is : ",i+1);
        scanf("%d",&a[i]);
        sum+=a[i];

    }

    printf("The sum of the all elements of the array is %d",sum);
    
    

    return 0;
}

//-------------------------------------------------------------------------------
//Q2

int Q2(){
    int a[10],sum=0;
    for (int i = 0; i < 10; i++)
    {
        printf("The array value at position %d is : ",i+1);
        scanf("%d",&a[i]);
        sum+=a[i];

    }

    printf("The average of the all elements of the array is %.2f",((float)sum)/10);
    



    return 0;
}

//-------------------------------------------------------------------------------
//Q3

int Q3(){
    int a[10],sumodd=0,sumeven=0;
    for (int i = 0; i < 10; i++)
    {
        printf("The array value at position %d is : ",i+1);
        scanf("%d",&a[i]);
        if (a[i]%2==0)
        {
            sumeven+=a[i];

        }
        else{
            sumodd+=a[i];
        }
        

    }

    printf("The sum of the all even elements of the array is %d\n",sumeven);
    printf("The sum of the all odd elements of the array is %d\n",sumodd);
    




    return 0;
}

//-------------------------------------------------------------------------------
//Q4

int Q4(){
    int a[10],largest=0,i;
    for ( i = 0; i < 10; i++)
    {
        printf("The array value at position %d is : ",i+1);
        scanf("%d",&a[i]);
        
    }

    for ( i = 0; i < 10; i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    printf("The Largest number in the array is %d\n",largest);
    



    return 0;
}

//-------------------------------------------------------------------------------
//Q5

int Q5(){
    int a[10],smallest,i;
    for ( i = 0; i < 10; i++)
    {
        printf("The array value at position %d is : ",i+1);
        scanf("%d",&a[i]);
        
    }

    for ( i = 0; i < 10; i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
    }
    printf("The smallest number in the array is %d\n",smallest);

    

    return 0;
}

//-------------------------------------------------------------------------------
//Q6
int Q6(){
    int a[10],smallest,i,temp;
    for ( i = 0; i < 10; i++)
    {
        printf("The array value at position %d is : ",i+1);
        scanf("%d",&a[i]);
        
    }
    printf("The original array : \n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    printf("The sorted array is : \n");

    for ( i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    

    

    return 0;
}


//-------------------------------------------------------------------------------
//Q7

int Q7(){
    int a[10],largest=-999999,i,second_largest=-99999;
    for ( i = 0; i < 10; i++)
    {
        printf("The array value at position %d is : ",i+1);
        scanf("%d",&a[i]);
        
    }

    for ( i = 0; i < 10; i++)
    {
        if(a[i]>largest)
        {   second_largest=largest;
            largest=a[i];
        }
    }
    printf("The Second Largest number in the array is %d\n",second_largest);
    



    return 0;
}

//-------------------------------------------------------------------------------
//Q8

int Q8(){
    int a[10],smallest=100000,i,second_smallest=100000;
    for ( i = 0; i < 10; i++)
    {
        printf("The array value at position %d is : ",i+1);
        scanf("%d",&a[i]);
        
    }

    for ( i = 0; i < 10; i++)
    {
        if(a[i]<smallest)
        {   
            second_smallest=smallest;
            smallest=a[i];
        }
    }
    printf("The Second smallest number in the array is %d\n",second_smallest);

    

    return 0;
}


//-------------------------------------------------------------------------------
//Q9
int Q9(){
    int a[10],i,temp;
    for ( i = 0; i < 10; i++)
    {
        printf("The array value at position %d is : ",i+1);
        scanf("%d",&a[i]);
        
    }
    printf("The array before reversing.\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    
    for ( i = 0; i < 5; i++)
    {
        temp=a[i];
        a[i]=a[9-i];
        a[9-i]=temp;

    }
    printf("\nThe array after reversing.\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }



    
    

    return 0;
}

//-------------------------------------------------------------------------------
//Q10
int Q10(){
    int a[10],b[10],i,temp;
    for ( i = 0; i < 10; i++)
    {
        printf("The array value at position %d is : ",i+1);
        scanf("%d",&a[i]);
        
    }
    for ( i = 0; i < 10; i++)
    {
        b[i]=a[i];
       
    }
    printf("The elements of a {array} are :\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nThe elements of b {array} are :\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}


//*******************************Assignment Finish************************************'
int main(){
    Q6();

    return 0;
}