// //entrada estandar
// #include <stdin.h>
// //salida estandar
// #include <stdout.h>
// //error estandar
// #include <stderr.h>

#include <stdio.h>
#include <stdlib.h>
//scanf lee entrada estandar
int main(int argc, char *argv[]) {
  for (int i = 0; i < 1000; i++) {
    // int r = rand() % 10;
    // printf("%d\n", r);
    int num;
    scanf("%d", &num);
    printf("%d\n", num * 2);
  }
  return 0;
}
