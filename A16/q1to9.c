#include<stdio.h>
#include<math.h>
// //Q1

    //function
int sumnatural(int num){
    int sum=0;
    for (int i = 0; i <= num; i++)
    {
        sum=sum+i;
    }
    return sum;
    
}

    //question
int Q1(){int num,sum;
    printf("Enter the number till where you want to add numbers = ");scanf("%d",&num);
    sum = sumnatural(num);
    printf("The sum of all natural numbers till %d is %d",num,sum);
    return 0;
}

//-------------------------------------------------------------------------------------
// //Q2

    //function
int sumevennatural(int num){
    int sum=0;
    for (int i = 0; i <= num; i++)
    {
        sum=sum+((i*2));
    }
    return sum;
    
}

    //question
int Q2(){int num,sum;
    printf("How much even numbers you want to add = ");scanf("%d",&num);
    sum = sumevennatural(num);
    printf("The sum of even natural numbers till %d is %d",num,sum);
    return 0;
}

//-------------------------------------------------------------------------------------
// //Q3

   //function
int sumoddnatural(int num){
    int sum=0;
    for (int i = 1; i <= num; i++)
    {
        sum=sum+((i*2)-1);
    }
    return sum;
    
}

    //question
int Q3(){int num,sum;
    printf("How much odd numbers you want to add = ");scanf("%d",&num);
    sum = sumoddnatural(num);
    printf("The sum of odd natural numbers till %d is %d",num,sum);
    return 0;
}

//-------------------------------------------------------------------------------------
// //Q4

   //function
int sumofsquares(int num){
    int sum=0;
    for (int i = 1; i <= num; i++)
    {
        sum=sum+(i*i);
    }
    return sum;
    
}

    //question
int Q4(){int num,sum;
    printf("How much squared numbers you want to add = ");scanf("%d",&num);
    sum = sumofsquares(num);
    printf("The sum of squared natural numbers till %d is %d",num,sum);
    return 0;
}
//-------------------------------------------------------------------------------------
// //Q5

   //function
int sumofcubes(int num){
    int sum=0;
    for (int i = 1; i <= num; i++)
    {
        sum=sum+(i*i*i);
    }
    return sum;
    
}

    //question
int Q5(){int num,sum;
    printf("How much cubed numbers you want to add = ");scanf("%d",&num);
    sum = sumofcubes(num);
    printf("The sum of cubed natural numbers till %d is %d",num,sum);
    return 0;
}

//-------------------------------------------------------------------------------------
// //Q6

    //function
int factorial(int x){
    if(x==1||x==0){
        return 1;

    }
    else{
        return x * factorial(x-1);
    }
    


}
    // question
int Q6(){
    int n;
    printf("Enter a number to do factorial = ");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,factorial(n));


    return 0;
}

//-------------------------------------------------------------------------------------
// //Q7

    //function
int countdigit(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;

    }
    return count;

}

    //question

int Q7(){
    int n;
    printf("Enter a number to count digit= ");
    scanf("%d",&n);
    countdigit(n);
    printf("There are %d digits in the number(%d)",countdigit(n),n);

    return 0;
}

//-------------------------------------------------------------------------------------
// // Q8

    //function

void lcm(int n1,int n2){
    int max;
    if (n1>n2)
    {
        max=n1;
    }
    else{
        max=n2;
    }
    

    while (1) {
        if ((max % n1 == 0) && (max % n2 == 0)) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }

}    
    //question
int Q8() {

    int n1, n2;

    printf("Enter the first number for lcm: ");scanf("%d", &n1);
    printf("Enter the Second number for lcm: ");scanf("%d", &n2);
    lcm(n1,n2);
    
    return 0;
}

//-------------------------------------------------------------------------------------
// // Q9

    //function

void reverse(int a){int rev=0,rem;
    
    while (a != 0) {
    rem = a % 10;
    rev = rev * 10 + rem;
    a /= 10;
  }
    
    
    printf("The number after reverse is %d",rev);

}

int Q9(){int a;
    printf("Enter the number to revrse = ");scanf("%d",&a);
    printf("The number before revrse is %d\n\t\tInitiating reverse function---\n",a);

    reverse(a);
}

//-------------------------------------------------------------------------------------
// // Q10

    //function
int Fibonacci(int n)
{
if (n <= 1){
return n; }
return Fibonacci(n - 1) + Fibonacci(n - 2); 
}
    //question
int Q10()
{
int n;
printf("Enter the n value to find fibonachi: ");
scanf("%d", &n);
printf("%d", Fibonacci(n - 1));
}



//-------------------------------------------------------------------------------------
// // Q11
    //function
void fabonachi(int n){
    int i;
  int t1 = 0, t2 = 1;
  int t3= t1 + t2;

  printf("Fibonacci Series: %d, %d, ", t1, t2);
    for (i = 3; i <= n; ++i) {
    printf("%d, ", t3);
    t1 = t2;
    t2 = t3;
    t3= t1 + t2;
  }

}
    //question
int Q11() {



  int n;
  

  printf("Enter the number of terms(for fabonachi series): ");
  scanf("%d", &n);

fabonachi(n);

  return 0;
}


//-------------------------------------------------------------------------------------
// // Q12

    //function
  int isPerfectSquare(int x)
    {
       int s = (int)sqrt(x); 
       return (s*s == x);
     }  
   int isFibonacci(int x)
      {
         return isPerfectSquare(5*x*x + 4) ||
           isPerfectSquare(5*x*x - 4);
     }

     //questuion
    int Q12()
    {   int n;
     printf("Enter the number to find in fibonachi series =  ");
  scanf("%d", &n);
	  if (n>0)
		{	
            if (isFibonacci(n)==1)
            {
                 printf("The number %d is present in fibonacci series.",n);
            }
            else
            {
                 printf("The number %d is not present in fibonacci series.",n);
            }
            
		
		} 
		return 0;        
   }



//-------------------------------------------------------------------------------------
// // Q13
    //function
void hcf(int a,int b){
    int hcf;
    for(int i = 1; i <= a || i <= b; i++) {
   if( a%i == 0 && b%i == 0 )
      hcf = i;
   }

   printf("HCF = %d", hcf);
  
}

    //question
int Q13() {
   int a, b;

    printf("Enter the first number for HCF: ");scanf("%d", &a);
    printf("Enter the Second number for HCF: ");scanf("%d", &b);
    hcf(a,b);

   
   return 0;
}



//-------------------------------------------------------------------------------------
// // Q14


    //function
int coprime(int num1, int num2)  
{  
    int min, count, flag = 1;  
    
    // if(num1>num2){
    //     min=num1;
    // }
    // else{
    //     min=num2;
    // }
    min = num1 < num2 ? num1 : num2; // (jo bada hoga vo min me save ho jaega)
  
    for(count = 2; count <= min; count++)  
    {  
        if( num1 % count == 0 && num2 % count == 0 )  
        {  
            flag = 0;  
            break;  
        }  
    }  
  //agar flag 1 hai to co prime hai
    return(flag);  
}  
    //question
int Q14()  
{  
    int n1, n2;  
  
    printf("Enter the first number to find co prime: ");scanf("%d", &n1);
    printf("Enter the Second number to find co prime ");scanf("%d", &n2);
  
    if( coprime(n1, n2) )  
    {  
        printf("%d and %d are co-prime numbers.\n", n1, n2);  
    }  
    else  
    {  
        printf("%d and %d are not co-prime numbers.\n", n1, n2);  
    }  
  
    return 0;  
} 

//-------------------------------------------------------------------------------------
// // Q15
    //function
void generateprimenumbers(int a){
    int count,c,i=3;

     if(a >= 1)
    {
        printf("\n\nFirst %d prime numbers are :  ", a);
        printf("2 ");
    }
    for(count = 2; count <= a; i++)  
    {
        
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }

        if(c == i)
        {
            printf("%d ", i);
            count++;  
        }

    }
    

}

    //question
int Q15(){int a=100;
printf("The prime numbers under 100 are = \n");
generateprimenumbers(a);

    return 0;
}

//-------------------------------------------------------------------------------------
// // Q16


    //function
int checkPrimeNumber(int n) {
  int j, flag = 1;

  for (j = 2; j <= n / 2; ++j) {

    if (n % j == 0) {
      flag = 0;
      break;
    }
  }

  return flag;
}

    //question
int Q16() {

  int n1, n2, i, flag;

  printf("Enter the first number to find prime in between: ");scanf("%d", &n1);
    printf("Enter the Second number to find prime in between ");scanf("%d", &n2);


  if (n1 > n2) {
    int temp;
    temp =n1;
    n1 = n2;
    n2 = temp;
  }

  printf("Prime numbers between %d and %d are: ", n1, n2);
  for (i = n1 + 1; i < n2; ++i) {

    // flag will be equal to 1 if i is prime
    flag = checkPrimeNumber(i);

    if (flag == 1) {
      printf("%d ", i);
    }
  }
  
  return 0;
}

//-------------------------------------------------------------------------------------
// // Q17

    //function
int nextprimeno(int n){
      

   int i,j,chk=0;


   for(i=n+1;i<=100;i++)
   {

      chk=0;

      for(j=2;j<i;j++)
      {
         if(i%j==0)
         {
            chk=1;
            break;
         }
      }

      if(chk==0)
      {
         
         return i;
         break;
      }
   }
}

    //question
int Q17(){int n,fnl;
    
    printf("Enter the number of whose next prime number you want = ");
    scanf("%d",&n);
    fnl = nextprimeno(n);
    printf("next prime is:%d",fnl);


    return 0;
}


//-------------------------------------------------------------------------------------
// // Q18

void armstrongcheck(int num){
    int originalNum, remainder, result = 0;
originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
}
int Q18() {
    int num;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    armstrongcheck(num);

    return 0;
}

//-------------------------------------------------------------------------------------
// // Q19




 
int Q19()
{
    int temp, digit1, digit2, digit3;
 
    printf("All Armstrong numbers between 1 and 1000 are:\n");
    for(int n=1;n<=1000;n++)
    {
        if(n<=9)
        {
            printf("%d ",n);
        }
        else
        {
            digit1 = n % 10;   
            digit2 = (n % 100 - digit1) / 10;  
            digit3 = (n % 1000 - digit2) /100; 
            temp = (digit1 * digit1 * digit1) + (digit2 * digit2 * digit2) + (digit3 * digit3 * digit3); 
	if (temp == n)
            {
                printf("%d ", temp);
            }
        }
    }
}



// **************************Finish assignment************************

int main(){
    Q19();
    
    return 0;
}