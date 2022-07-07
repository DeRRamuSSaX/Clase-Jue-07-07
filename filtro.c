#include <stdio.h>
#include <stdlib.h>
//scanf lee salida estandar
//combinacion para EOF es ctrl d
int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int s = atoi(argv[2]);
  srand(s);
  for (int i = 0; i < n; i++) {
    int num;
    scanf("%d", &num);
    printf("%d ", num = (rand() % n) + 1);
  }
  printf("\n");
  return 0;
}
//
// int main(int argc, char const *argv[]) {
//   int i = 0;
//   char line[20];
//   int c;
//   while ((c = getchar()) != EOF) {
//     if (c != '\n') {
//       line[i++] = c;
//     } else {
//        line[i] = 0;
//        i = 0;
//        if (atoi(line) > 10 && atoi(line) < 20;
//          printf("%s\n", line);
//     }
//   }
//   return 0;
// }
