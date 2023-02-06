/* 4. Write a program to print the first N odd natural numbers */

#include <stdio.h>

int main() {
  int n, i;
  printf("Enter the number of odd natural numbers you want to print: ");
  scanf("%d", &n);
  for (i = 1; i <= 2 * n - 1; i += 2) {
    printf("%d\n", i);
  }
  return 0;
}
