/* 1. Write a program to print iNeuron N times on the screen */

#include <stdio.h>

int main() {
  int n, i;
  printf("Enter the number of times you want to print iNeuron: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("iNeuron\n");
  }
  return 0;
}
