#include <stdio.h>

int main(void)
{
  int grade = 0;

  printf("Enter grade: ");
  scanf("%d", &grade);

  if (grade == 100) printf("S\n");
  else if (grade >= 90)
  {
    printf("A\n");
  }
  else if (grade >= 75) printf("B\n");
  else if (grade >= 60) printf("C\n");
  else if (grade >= 45)
  {
    printf("D\n");
  }
  else printf("Other\n");
  
  return 0;
}