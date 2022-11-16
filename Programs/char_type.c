#include <stdio.h>

int main(void){
  /*char s = 'a';

  printf("char: ");
  scanf("%c", &s);

  printf("char: %c \n", s);
  printf("char as ASCII: %d \n", s);
  */
  
  char str[10];
  printf("Write a sentence: \n");
  // scanf("%s", str); // it will only scan till a space occurs in a sentence
  
  // fgets(str, 10, stdin); // only takes 10 characters as Input from User, and is able to intake a whole string
  
  scanf("%[^\n]%*c", str); // ^\n tells to take input until a newline comes, %*c reads newline, * indicates that this newline character is discarded
  
  printf("%s \n", str);
  return 0;
}