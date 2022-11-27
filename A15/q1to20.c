#include<stdio.h>
#include<math.h>

// Q1
#include<stdio.h>
    //function
int carea(int a){
   return 3*a*a;
}

    //Question
int Q1(){
     int a,b;
        printf("Enter radius of circle = ");
        scanf("%d",&a);
        b=carea(a);
        printf("The Area of circle with radius %d is %d",a,b);
    return 0;
}


//-------------------------------------------------------------------------------------
// // Q2

        //function
float Sinterest(float p, float r, float t) 
{
    float si;   
    si = (p * r * t)/100; 
    return si; 
}
    //Question
 int Q2()
{
    float a,b,c;
    float intrest;
    printf("\nEnter Prinicpal :\t");
    scanf("%f",&a);
    printf("\nEnter year:\t");
    scanf("%f",&b);
    printf("\nEnter Rate:\t");
    scanf("%f",&c); 
    intrest = Sinterest(a,b,c);
    printf("\nSimple Interest = %.2f\nTotal amount at final to recieve = %.2f", intrest,a+intrest); 
    printf("\n");
    return 0;
}

//-------------------------------------------------------------------------------------
// // Q3

    //function
int evenornot(int a){
    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }


}
    //question
int Q3(){int a,chck;
    printf("Enter the value = ");scanf("%d",&a);
    chck = evenornot(a);

    if(chck==1){
        printf("Value is even");
    }
    else{
        printf("Value is odd");
    }
    return 0;
}

//-------------------------------------------------------------------------------------
// // Q4

    //function
int printnumbers(int a)
{
    for(int i=1;i<=a;i++)
    {
        printf("%d\n", i);
       
    }

}
    //Question
int Q4()
{
    int a = 0, i;
    printf("Till where you need to print natural numbers = ");
    scanf("%d", &a);
    printnumbers(a);
    return 0;
}

//-------------------------------------------------------------------------------------
// // Q5

    //function
void oddnos(int a)
{
    

    for (int i = 1; i <= a; i++)
    {
        printf("%d\n", 2 * i - 1);
    }
}
    //question
int Q5()
{
    int a = 0, i;
    printf("How much odd natural numbers you want = ");
    scanf("%d", &a);
    oddnos(a);
    return 0;
}

//-------------------------------------------------------------------------------------
// // Q6

    //function
int factorial(int a)
{
    int b = 1;
    if(a == 0){
	return 1;}
 
    for (int i = 1; i <= a; i++)
    {
        b = b * i;
    }
    return b;
    

}

    //Question
int Q6()
{
    int a = 0, i,b;
    printf("Enter the number of which you want factorial = ");
    scanf("%d", &a);
    b=factorial(a);
    printf("The value of factorial is %d", b);
    return 0;
}


//-------------------------------------------------------------------------------------
// // Q7

    //functions
//factorial function already defined so commented here

/*
    int factorial(int n) {
        if(n == 0)
        return 1;
        int factorial = 1;
        for (int i = 2; i <= n; i++)
            factorial = factorial * i;
        return factorial;

}*/

int nCr(int n, int r) {
	return factorial(n) / (factorial(r) * factorial(n - r));
}
    //question
int Q7() {
	int n,r;
    printf("Enter the value of n = ");scanf("%d",&n);
    printf("Enter the value of r = ");scanf("%d",&r);
	printf("The vale of %dC%d is %d",n,r, nCr(n, r));
	return 0;
}

//-------------------------------------------------------------------------------------
// // Q8

// Same as question 7

//-------------------------------------------------------------------------------------
// // Q9

    //function
int checkdigit(int a,int b){
    int rem;
    while(a!=0)
	{
		rem=a%10;
		if(rem==b)
		{
			
			return 1;
		}
		a=a/10;
	}
	return 0;

}
    //question
int Q9(){int a,b,chk;
    printf("Enter the full number = ");scanf("%d",&a);
    printf("Enter the digit you want to find = ");scanf("%d",&b);
    chk = checkdigit(a,b);
    if (chk==1)
    {
        printf("DIGIT IS PRESENT IN THE NUMBER.");
    }
    else{
        printf("DIGIT IS NOT PRESENT IN THE NUMBER.");
    }
    
    return 0;
}

//-------------------------------------------------------------------------------------
// // Q10

    //function
void primeFactors(int n)
{
	while (n % 2 == 0) {
		printf("%d ", 2);
		n = n / 2;
	}


	for (int i = 3; i <= sqrt(n); i = i + 2) {
		while (n % i == 0) {
			printf("%d ", i);
			n = n / i;
		}
	}


	if (n > 2){
		printf("%d ", n);}
}
    //question
int Q10()
{int n;
	printf("Enter the number to find prime factors = ");scanf("%d",&n);
	primeFactors(n);
	return 0;
}


//-------------------------------------------------------------------------------------
// // Q11

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
int Q11() {

    int n1, n2, max;

    printf("Enter the first number for lcm: ");scanf("%d", &n1);
    printf("Enter the Second number for lcm: ");scanf("%d", &n2);
    lcm(n1,n2);
    
    return 0;
}



//-------------------------------------------------------------------------------------
// // Q12

    //function
void hcf(int a,int b){
    int hcf,i;
    for(i = 1; i <= a || i <= b; i++) {
   if( a%i == 0 && b%i == 0 )
      hcf = i;
   }

   printf("HCF = %d", hcf);
  
}

    //question
int Q12() {
   int a, b;

    printf("Enter the first number for HCF: ");scanf("%d", &a);
    printf("Enter the Second number for HCF: ");scanf("%d", &b);
    hcf(a,b);

   
   return 0;
}

//-------------------------------------------------------------------------------------
// // Q13

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
    return 0;}
  else{
    return 1;}

}
    //question
int Q13() {

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
// // Q14

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
int Q14(){int n,fnl;
    
    printf("Enter the number of whose next prime number you want = ");
    scanf("%d",&n);
    fnl = nextprimeno(n);
    printf("next prime is:%d",fnl);


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
int Q15(){int a;
printf("How many prime numbers you want = ");scanf("%d",&a);
generateprimenumbers(a);

    return 0;
}


//-------------------------------------------------------------------------------------
// // Q16

    // didnot understand

//-------------------------------------------------------------------------------------
// // Q17
int Q17() {

  int i, n;
  int t1 = 0, t2 = 1;
  int t3= t1 + t2;

  printf("Enter the number of terms(for fabonachi series): ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", t1, t2);


  for (i = 3; i <= n; ++i) {
    printf("%d, ", t3);
    t1 = t2;
    t2 = t3;
    t3= t1 + t2;
  }

  return 0;
}


//-------------------------------------------------------------------------------------
// // Q18

    //function
int square(int a){
    return a*a;
}
int Q18(){int a,b;
    printf("You want square of : ");scanf("%d",&a);
    b = square(a);
    printf("Square of %d is %d",a,b);

}
//-------------------------------------------------------------------------------------
// // Q19

    //function
int cube(int a){
    return a*a*a;
}
    //question
int Q19(){int a,b;
    printf("You want cube of : ");scanf("%d",&a);
    b = cube(a);
    printf("Cube of %d is %d",a,b);

}

//-------------------------------------------------------------------------------------
// // Q20

    //function(already defined)
/*
    int factorial(int a)
    {
        int b = 1;
        if(a == 0){
        return 1;}
    
        for (int i = 1; i <= a; i++)
        {
            b = b * i;
        }
        return b;
    }    

 */   
        



    //question
int Q20()
{
    int sum;
    sum=factorial(1)/1+factorial(2)/2+factorial(3)/3+factorial(4)/4+factorial(5)/5;
	printf("The sum of 1!/1+2!/2+3!/3+4!/4+5!/5 :\n%d",sum); 
    return 0;
}

// **************************Finish assignment************************

int main(){
    Q20();
    
    return 0;
}
