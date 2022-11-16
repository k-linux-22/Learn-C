// using if-else statements

#include <stdio.h>

int main()
{
  double num1=0, num2=0, ans=0;
  char op;
  printf("Enter 1st num: ");
  scanf("%lf", &num1);
  printf("Enter operator: ");
  scanf(" %c", &op); // always give a space before %c when intaking character
  printf("Enter 2nd num: ");
  scanf("%lf", &num2);

  if (op == '+') printf("%f \n", num1+num2);
  else if (op == '-') printf("%f \n", num1-num2);
  else if (op == '*') printf("%f \n", num1*num2);
  else if (op == '/') printf("%f \n", num1/num2);
  else printf("Invalid Operator");
  
  return 0;
}