#include <stdio.h>
#include <stdlib.h>
//scanf lee salida estandar
//combinacion para EOF es ctrl d
int main(int argc, char *argv[]) {
  double nota = 4.00;
  double nota2 = 5.00;
  double nota3 = 2.50;
  printf("(1) Tipos de Datos\n");
  printf("(2) Condicionales y Loops\n");
  printf("(3) Arrays\n");
  printf("(4) I/O\n");
  printf("(5) Funciones\n");
  printf("(6) Salir del Menu\n");
  while (1) {
    printf("Elegi un tema:\n");
    int num;
    scanf("%d", &num);
    if (num == 1) {
      printf("Nota: %.2f\n", nota);
    } else if (num == 2) {
      printf("Nota: %.2f\n", nota2);
    } else if (num == 3) {
      printf("Nota: %.2f\n", nota3);
    } else if (num == 4) {
      printf("Tema pendiente para 3er Bimestre\n");
    } else if (num == 5) {
      printf("Tema pendiente para 4to Bimestre\n");
    } else if (num == 6) {
      return 0;
    }
    else if (num < 1 || num > 6) {
      printf("Opcion Desconocida\n");
    }
  }
  return 0;
}

// int main(int argc, char const *argv[]) {
//   int res;
//   while (1) {
//     printf("(1) Tipos de Datos\n");
//     printf("(2) Condicionales y Loops\n");
//     printf("(3) Arrays\n");
//     printf("(4) I/O\n");
//     printf("(5) Funciones\n");
//     printf("(6) Salir del Menu\n");
//     printf("Elegi un tema:\n");
//     scanf("%d", &res);
//     switch (res) {
//       case 1:
//       printf("Nota: %.2f\n", nota);
//       case 2:
//       printf("Nota: %.2f\n", nota2);
//       case 3:
//       printf("Nota: %.2f\n", nota3);
//       case 4:
//       printf("Tema pendiente para 3er Bimestre\n");
//       case 5:
//       printf("Tema pendiente para 4to Bimestre\n");
//       case 6:
//       return 0;
//       default:
//       printf("Opcion Desconocida\n");
//     }
//   }
//   return 0;
// }
