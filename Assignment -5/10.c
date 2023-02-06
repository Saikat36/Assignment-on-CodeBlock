

/* 10. Write a program to print a table of N. */

#include <stdio.h>

int main() {
  int n, i, j;
  printf("Enter the number for which you want to print the table: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", n, i, n * i);
  }
  return 0;
}
