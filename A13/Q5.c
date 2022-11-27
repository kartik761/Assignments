#include <stdio.h>
int main()
{
   int side1, side2, side3,v;
   printf("Enter sides of triangle:");
   scanf("%d%d%d",&side1,&side2,&side3);
   
   if(side1 == side2 && side2 == side3){
    v=1;
   }
      
      
   else if(side1 == side2 || side2 == side3 || side3 == side1){
    v=2;
   }
      
      
   else{
    v=3;
   }
      
      
    switch (v)
    {
    case 1 :{
        printf("The Given Triangle is equilateral");
        break;}
    case 2 :{
        printf("The given Triangle is isosceles");
        break;}
    case 3 :{
        printf("The given Triangle is scalene");
        break;}
    
    default:
        break;
    }
   return 0;
}
