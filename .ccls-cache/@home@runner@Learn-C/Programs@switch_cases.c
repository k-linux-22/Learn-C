#include <stdio.h>

int main()
{
  char grade = 'C';
  switch(grade)
  {
    case 'A': 
      printf("You did great! \n");
      break;
    case 'B':
      printf("You did alright! \n");
      break;
    case 'C': 
      printf("You did poorly! \n");
      break;
    case 'D':
      printf("You did very bad! \n");
      break;
    case 'F': 
      printf("You Failed! \n");
      break;
    default:
      printf("Invalid Grade \n"); 
  }
  
  return 0;
}