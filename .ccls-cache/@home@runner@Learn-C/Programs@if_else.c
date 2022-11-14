#include <stdio.h>

int main(void)
{
  int grade = 0;

  printf("Enter grade: ");
  scanf("%d", &grade);

  if (grade >= 50)
  {
    printf("Pass\n");
    printf("Congrats!\n");
  }
  else
  {
    printf("Fail\n");
    printf("Good luck next time!\n");
  }
  
  return 0;
}