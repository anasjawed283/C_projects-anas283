#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{

  int operation;
  double num1, num2;
  printf("Enter an operation number-: (1 to add, 2 to substract, 3 to multiply, 4 to divide):\n ");
  scanf("%c", &operation);
  printf("Enter two numbers to solve:\n");
  scanf("%lf %lf", &num1, &num2);

//using switch to make code less lenthy//
  switch (operation) {
    case '1':
      printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
      break;
    case '2':
      printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
      break;
    case '3':
      printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
      break;
    case '4':
      printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
      break;
    // operator doesn't match any case number given
    default:
      printf("Enter a valid number for operator");
  }

  return 0;
}