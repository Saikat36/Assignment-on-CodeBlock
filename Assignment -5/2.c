
/* 2. Write a program to print the first N natural numbers. */

#include <stdio.h>

int main() {
  int n, i;
  printf("Enter the number of natural numbers you want to print: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    printf("%d\n", i);
  }
  return 0;
}
