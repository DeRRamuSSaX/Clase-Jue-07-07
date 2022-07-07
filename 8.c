#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int N = 6;
  for (int i = N - 1; i < 1; i--) {
    printf("%d ", array[i]);
  }
  printf("\n");
  return 0;
}
