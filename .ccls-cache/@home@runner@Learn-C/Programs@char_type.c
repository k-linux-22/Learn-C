#include <stdio.h>

int main(void){
  char s = 'a';

  printf("char: ");
  scanf("%c", &s);

  printf("char: %c \n", s);
  printf("char as ASCII: %d \n", s);
  return 0;
}