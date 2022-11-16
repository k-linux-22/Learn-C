#include <stdio.h>

int main()
{
  double num1=0, num2=0, ans=0;
  printf("Enter 1st num: ");
  scanf("%lf", &num1);
  printf("Enter 2nd num: ");
  scanf("%lf", &num2);

  printf("Answer: %f", ans); // can use %f instead of %lf in printf
  return 0;
}