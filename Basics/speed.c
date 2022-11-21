#include <stdio.h>

int main(void){
  int speed = 0, time = 0, dist;
  printf("Speed: ");
  scanf("%d", &speed);
  printf("Time: ");
  scanf("%d", &time);
  
  dist = speed * time;
  printf("Distance = %d k.m. \n", dist);
  return 0;
}