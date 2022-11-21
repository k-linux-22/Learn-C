#include <stdio.h>

int main(void)
{
  int i = 0, num = 0, total = 0, total_num = 0;
  
  printf("Number of entries: ");
  scanf("%d", &total_num);
  
  while(i < total_num)
  {
    // average of n numbers entered by User
    printf("Enter Number %d: ", i+1); // 0+1
    scanf("%d", &num);
    total += num;
    i++;
  }
  printf("Total: %d\n", total);
  printf("Average: %d\n", total/total_num);

  return 0;
}