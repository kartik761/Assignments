#include <stdio.h>
int main()
{

  char operator;
  int first, second;
  
  printf("Enter first number: ");
  scanf("%d",&first);

  printf("Enter second number: ");
  scanf("%d",&second);

  fflush(stdin);

  printf("Enter an operatorerator (+, -, *, /): ");
  scanf("%c", &operator);

  switch (operator) {
    case '+':
      printf("%d + %d = %d", first, second, first + second);
      break;
    case '-':
      printf("%d - %d = %d", first, second, first - second);
      break;
    case '*':
      printf("%d * %d = %d", first, second, first * second);
      break;
    case '/':
      printf("%d / %d = %d", first, second, first / second);
      break;
    
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}

