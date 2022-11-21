#include <stdio.h>

int main(void)
{
  int i = 0, num = 0, total = 0;
  while(i < 5)
  {
    // average of 5 numbers entered by User
    printf("Enter Number %d: ", i+1); // 0+1
    scanf("%d", &num);
    total += num;
    i++;
  }
  printf("Total: %d\n", total);
  printf("Average: %d\n", total/5);

  return 0;
}