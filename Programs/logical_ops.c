#include <stdio.h>

int main(void)
{
  int weight = 0, height = 0;
  printf("Enter height: ");
  scanf("%d", &height);
  printf("Enter weight: ");
  scanf("%d", &weight);

  // AND operator
  if (height > 150 && weight > 50) printf("Good to ride.\n");
  else printf("Not good to ride.\n");

  // OR operator
  if (height > 150 || weight > 50) printf("Good to ride.\n");
  else printf("Not good to ride.\n");

  // NOT Operator
  if (! (height > 150)) printf("Not tall enough.\n");
  else printf("Tall enough.\n");
  
  return 0;
}