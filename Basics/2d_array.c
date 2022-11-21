#include <stdio.h>

int main()
{
  int nums[3][2] = {
                  {1, 2},
                  {3, 4},
                  {5, 6},
                 };
  printf("%d \n", nums[0][1]); // 2
  printf("%d \n", nums[1][1]); // 4
  return 0;
}