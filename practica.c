// Ejercicio 24
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int b[3][3] = {{7, 8, 9}, {4, 5, 6}, {1, 2, 3}};
  int c[3][3];
  printf("Esta es A\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  printf("Esta es B\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", b[i][j]);
    }
    printf("\n");
  }
  printf("Esta es C\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      c[i][j] = a[i][j] + b[i][j];
      printf("%d ", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}
