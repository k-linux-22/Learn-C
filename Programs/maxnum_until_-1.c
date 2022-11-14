#include <stdio.h>

int main(void)
{
  int num = 0, max = -1;
  // until -1 is entered, loop will keep taking inputs
  while (num != -1)
  {
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > max) // max number out of all digits entered
    {
      max = num;
    }
  }
  printf("Max: %d\n", max);

  return 0;
}