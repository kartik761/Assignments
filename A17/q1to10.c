#include<stdio.h>


// //Q1

//function
int primecheck(int n){
    int i,chk=0;
    if (n == 0 || n == 1)
    chk = 1;//chk 1 matlb not prime number

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      chk = 1;
      break;
    }
  }

  if (chk == 0){
    return 0;}//prime number
  else{
    return 1;}//not a prime number

}

int Q1(){
    int number,sum=0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number : ");scanf("%d",&number);
        if(primecheck(number)==0)
        {//prime number  hai to enter hoga
            break;
           
        }
        sum=sum+number;
    }
    printf("The sum is %d",sum);

    return 0;
}






//-------------------------------------------------------------------------------------
// // Q2

    //function(already written)

/*
int primecheck(int n){
    int i,chk=0;
    if (n == 0 || n == 1)
    chk = 1;//chk 1 matlb not prime number

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      chk = 1;
      break;
    }
  }

  if (chk == 0){
    return 0;}
  else{
    return 1;}

}
*/
    //question
int Q2() {

  int n,fnl;
  printf("Enter a positive number: ");
  scanf("%d", &n);
  fnl=primecheck(n);
  if (fnl == 0){
    printf("%d is a prime number.", n);
    }
  else{
    printf("%d is not a prime number.", n);
   }
  return 0;
}


//-------------------------------------------------------------------------------------
// // Q3
int Q3(){
    int number;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a Natural Number(%d) ",i+1);
        scanf("%d",&number);
        if(number==10){
            printf("Entered number is 10.Stopping asking number. ");
            break;
        }
        printf("The Entered number is %d\n",number);


    }
    

    return 0;
}


//-------------------------------------------------------------------------------------
// // Q4
int Q4(){
    int number,sum=0;

    printf("Enter a numbers to Calculate sum one by one.\n");
    
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number (%d) ",i+1);
        scanf("%d",&number);
        if(number<0){
            break;
        }
        else{
            sum=sum+number;
        }


    }
    printf("The sum of the numbers is %d",sum);
    

    return 0;
}

//-------------------------------------------------------------------------------------
// // Q5

int Q5(){
    int number;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number : ");
        scanf("%d",&number);
        if(number==0){
            printf("THE number is 0.Exiting the program.\n");
            break;
        }
        printf("The entered number is %d\n",number);


    }
    

    return 0;
}

//-------------------------------------------------------------------------------------
// // Q6

//function
/*
int primecheck(int n){
    int i,chk=0;
    if (n == 0 || n == 1)
    chk = 1;//chk 1 matlb not prime number

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      chk = 1;
      break;
    }
  }

  if (chk == 0){
    return 0;}//prime number
  else{
    return 1;}//not a prime number

}
*/

int Q6(){
    int number,sum=0;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter a number : ");scanf("%d",&number);
        if(primecheck(number)==0)
        {//prime number  hai to enter hoga
            i--;
            printf("The entered number is a prime number.Please enter a another number.\n");
            continue;
           
           
        }
        else{
            sum=sum+number;

        }
    }
    printf("The sum is %d",sum);

    return 0;
}

//-------------------------------------------------------------------------------------
// // Q7

int Q7(){
    int number;
    for (int i = 0; ; i++)
    {
        printf("Enter a Natural Number ");
        scanf("%d",&number);
        if(number==10){
            continue;;
        }
        printf("The Entered number is %d\n",number);


    }
    

    return 0;
}

//-------------------------------------------------------------------------------------
// // Q8
int Q8(){
    int number,sum=0;

    printf("Enter a numbers to Calculate sum one by one.\n");
    
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number (%d) ",i+1);
        scanf("%d",&number);
        if(number<0){
            printf("The entered number is a negative number please enter a posititve number.\n");
            i--;
        }
        else{
            sum=sum+number;
        }


    }
    printf("The sum of the numbers is %d",sum);
    

    return 0;
}

//-------------------------------------------------------------------------------------
// // Q9

int Q9(){
    int number;
    for (int i = 0; ; i++)
    {
        printf("Enter a Natural Number ");
        scanf("%d",&number);
        if(number==10){
            continue;;
        }
        else if(number%10==0&&number!=0){
            continue;
        }
        printf("The Entered number is %d\n",number);


    }
    

    return 0;
}

//-------------------------------------------------------------------------------------
// // Q10

int Q10(){int sum=0;
    for (int i = 1; i <11; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        else{
            sum+=i;
        }
        
    }
    
    printf("The sum of odd numbers between 0 to 10 is : %d",sum);

    return 0;
}


// **************************Finish assignment************************

int main(){
    Q10();
    
    return 0;
}