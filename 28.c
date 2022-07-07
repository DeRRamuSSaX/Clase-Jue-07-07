#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int a[n][n] = {1, 2, 3, 4};
  int b[n][n] = {4, 3, 2, 1};
  int mult;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", a[i*i][j*j]);
    }
    printf("\n");
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", b[i][j]);
    }
    printf("\n");
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      mult = a[i][j] * b[i][j];
      printf("%d ", mult);
    }
    printf("\n");
  }
  return 0;
}
