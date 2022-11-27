#include<stdio.h>

//Q1

//function
int grtinarray(int siz,int a[siz]){

    int largest=-99999;

    for (int i = 0; i < siz; i++)
    {
        if (a[i]>largest)
        {
            largest=a[i];
        }
        
    }
    


    return largest;
}

//question
int Q1(){
    int siz,i;
    printf("Enter the size of your array - ");
    scanf("%d",&siz);
    
    int a[siz];
    for ( i = 0; i < siz; i++)
    {
        printf("Enter the value of array at position %d : ",i+1);
        scanf("%d",&a[i]);
    }
        printf("The array is : \n");

    for ( i = 0; i < siz; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nFinding the greatest number....\n");

    grtinarray(siz,a);


    printf("The largest integer in this array is %d",grtinarray(siz,a));
    
    


    return 0;
}

//-----------------------------------------------------------------------------------------------------------------
//Q2


//function
int smtinarray(int siz,int a[siz]){

    int smallest=99999;

    for (int i = 0; i < siz; i++)
    {
        if (a[i]<smallest)
        {
            smallest=a[i];
        }
        
    }
    


    return smallest;
}

//question

int Q2(){
    int siz,i;
    printf("Enter the size of your array - ");
    scanf("%d",&siz);
    
    int a[siz];
    for ( i = 0; i < siz; i++)
    {
        printf("Enter the value of array at position %d : ",i+1);
        scanf("%d",&a[i]);
    }
        printf("The array is : \n");

    for ( i = 0; i < siz; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nFinding the smallest number....\n");

    smtinarray(siz,a);


    printf("The smallest integer in this array is %d",smtinarray(siz,a));
    
    


    return 0;
}

//-----------------------------------------------------------------------------------------------------------------
//Q3


//function
int ascending(int siz ,int a[]){

    int temp;
    for (int i = 0; i < siz; i++)
    {
        for (int j = i+1; j < siz; j++)
        {
            if (a[i]>a[j])
            {   
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    
}

//question
int Q3()
{
    int siz,i;
    printf("Enter the size of your array - ");
    scanf("%d",&siz);
    
    int a[siz];
    for ( i = 0; i < siz; i++)
    {
        printf("Enter the value of array at position %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("The array is : \n");

    for ( i = 0; i < siz; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    ascending(siz,a);
    printf("The arranged order in ascending is :\n");
    for ( i = 0; i < siz; i++)
    {
        printf("%d ",a[i]);
    }

    


return 0;

}


//-----------------------------------------------------------------------------------------------------------------
//Q4

//function
int firstduplicate(int siz,int a[]){
    int i;
    for ( i = 0; i < siz; i++)
    {
        if (a[i]==a[i+1])
            {   
              break;
            }
    }
  
        return a[i];

}

//Question
int Q4(){

    int siz,i;
    printf("Enter the size of your array - ");
    scanf("%d",&siz);
    
    int a[siz];
    for ( i = 0; i < siz; i++)
    {
        printf("Enter the value of array at position %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("The array is : \n");

    for ( i = 0; i < siz; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    

    printf("The first occurrence of adjacent duplicate value is : %d",firstduplicate(siz,a));

    

    return 0;
}





//-----------------------------------------------------------------------------------------------------------------
//Q5

//function


//function
void reverse(int siz,int a[])
{
    int temp,i;
    for ( i = 0; i < siz/2; i++)
    {
        temp=a[i];
        a[i]=a[(siz-1)-i];
        a[(siz-1)-i]=temp;

    }

}

//Question
int Q5()
{
    int siz,i;
    printf("Enter the size of your array - ");
    scanf("%d",&siz);
    
    int a[siz];
    for ( i = 0; i < siz; i++)
    {
        printf("Enter the value of array at position %d : ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("The array is : \n");

    for ( i = 0; i < siz; i++)
    {
        printf("%d ",a[i]);
    }

    printf("The reversed array is : \n");
    reverse(siz,a);

    
    for ( i = 0; i < siz; i++)
    {
        printf("%d ",a[i]);
    }

return 0;
}

//-----------------------------------------------------------------------------------------------------------------
//Q6

//function
void countelements(int siz,int a[],int rpt[]){
    int i,j,count;

    
    for(i=0; i<siz; i++)
    {
        count = 1;
        for(j=i+1; j<siz; j++)
        {
           
            if(a[i]==a[j])
            {
                count++;

               
                rpt[j] = 0;
            }
        }

       
        if(rpt[i] != 0)
        {
            rpt[i] = count;
        }
    }

    
    printf("\nfrequency of all elements of array : \n");
    for(i=0; i<siz; i++)
    {
        if(rpt[i] != 0)
        {
            printf("%d occurs %d times\n", a[i], rpt[i]);
        }
    }



}

//Question

int Q6()
{
    int siz, i, j, count;

   
    printf("Enter size of array: ");
    scanf("%d", &siz);
    int a[siz], rpt[siz];

   
    for(i=0; i<siz; i++)
    {
        printf("Enter elements %d : ",i+1);
        scanf("%d", &a[i]);

      
        rpt[i] = -1;
    }

    countelements(siz,a,rpt);

    return 0;
}


//-----------------------------------------------------------------------------------------------------------------
//Q7
//function
void DuplicatesInArray(int siz,int a[]){
    int i,j;

     for( i = 0; i < siz; i++) {    
        for(j = i + 1; j < siz; j++) {    
            if(a[i] == a[j])    
                printf("%d ", a[j]);    
        }    
    } 
}



//Question
int Q7(){
    int siz,i;
    printf("Enter the size of your array - ");
    scanf("%d",&siz);
    
    int a[siz];
    for ( i = 0; i < siz; i++)
    {
        printf("Enter the value of array at position %d : ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("The array is : \n");

    for ( i = 0; i < siz; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nThe duplicates in array are : \n");

    DuplicatesInArray(siz,a);
    

    return 0;
}

//-----------------------------------------------------------------------------------------------------------------
//Q8

void UniqueInArray(int siz,int a[]){
    int i,j,counter;

     for( i = 0; i < siz; i++) {   
        counter=0; 
        for(j = 0; j < siz+1; j++) {    
            if(a[i] == a[j])  {  
                counter++;  
            } 
        }
        if(counter<2)
        {
          printf("%d ",a[i]);
        }    
    } 
}



//Question
int Q8(){
    int siz,i;
    printf("Enter the size of your array - ");
    scanf("%d",&siz);
    
    int a[siz];
    for ( i = 0; i < siz; i++)
    {
        printf("Enter the value of array at position %d : ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("The array is : \n");

    for ( i = 0; i < siz; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nThe uniques in array are : \n");

    UniqueInArray(siz,a);
    

    return 0;
}



//-----------------------------------------------------------------------------------------------------------------
//Q9

//function
void mergearray(int siz1,int tsiz,int a1[],int a2[],int a3[])

{   
    int i,count=0;
    for ( i = 0; i < tsiz; i++)
    {   
        if (i<siz1)
        {   
            printf("i is %d\n",i);
            a3[i]=a1[i];
        }
        else
        {    
            printf("hghi is %d\n",i);
            a3[i]=a2[count];
           count++;
        }
    }
    
    

    

}



//question
int Q9(){
    int siz1,siz2,tsiz,i;
    printf("Enter the size of first array : ");
    scanf("%d",&siz1);
    int a1[siz1];

    for ( i = 0; i < siz1; i++)
    {
        printf("The array value at position %d is : ",i+1);
        scanf("%d",&a1[i]);
        
    }


    printf("Enter the size of Second array : ");
    scanf("%d",&siz2);
    int a2[siz2];

    for ( i = 0; i < siz2; i++)
    {
        printf("The array value at position %d is : ",i+1);
        scanf("%d",&a2[i]);
        
    }

    tsiz=siz1+siz2;
    int a3[tsiz];

    mergearray(siz1,tsiz,a1,a2,a3);

    printf("The first array was : \n");
    for ( i = 0; i < siz1; i++)
    {
        printf("%d ",a1[i]);
    }
    printf("\n");

    printf("The Second array was : \n");
    for ( i = 0; i < siz2; i++)
    {
        printf("%d ",a2[i]);
    }
    printf("\n");
    
    

    

    printf("The Combined array is : \n");
    for ( i = 0; i < tsiz; i++)
    {
        printf("%d ",a3[i]);
    }
    printf("\n");




    return 0;
}


//-----------------------------------------------------------------------------------------------------------------
//Q10

int descending(int siz ,int a[]){

    int temp;
    for (int i = 0; i < siz; i++)
    {
        for (int j = i+1; j < siz; j++)
        {
            if (a[i]<a[j])
            {   
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    
}
//already created functions
/*

//function



void mergearray(int siz1,int tsiz,int a1[],int a2[],int a3[])

{   
    int i,count=0;
    for ( i = 0; i < tsiz; i++)
    {   
        if (i<siz1)
        {   
            printf("i is %d\n",i);
            a3[i]=a1[i];
        }
        else
        {    
            printf("hghi is %d\n",i);
            a3[i]=a2[count];
           count++;
        }
    }
    
    

    

}
*/



//question
int Q10(){
    int siz1,siz2,tsiz,i;
    printf("Enter the size of first array : ");
    scanf("%d",&siz1);
    int a1[siz1];

    for ( i = 0; i < siz1; i++)
    {
        printf("The array value at position %d is : ",i+1);
        scanf("%d",&a1[i]);
        
    }


    printf("Enter the size of Second array : ");
    scanf("%d",&siz2);
    int a2[siz2];

    for ( i = 0; i < siz2; i++)
    {
        printf("The array value at position %d is : ",i+1);
        scanf("%d",&a2[i]);
        
    }

    tsiz=siz1+siz2;
    int a3[tsiz];

    mergearray(siz1,tsiz,a1,a2,a3);

    printf("The first array was : \n");
    for ( i = 0; i < siz1; i++)
    {
        printf("%d ",a1[i]);
    }
    printf("\n");

    printf("The Second array was : \n");
    for ( i = 0; i < siz2; i++)
    {
        printf("%d ",a2[i]);
    }
    printf("\n");
    
    

    

    printf("The Combined array is : \n");
    for ( i = 0; i < tsiz; i++)
    {
        printf("%d ",a3[i]);
    }
    printf("\n");

    descending(tsiz,a3);


    printf("The Sorted Combined array is : \n");
    for ( i = 0; i < tsiz; i++)
    {
        printf("%d ",a3[i]);
    }
    printf("\n");




    return 0;
}




//***********************************Assingment finish**********************
int main(){

    Q8();

    return 0;
}