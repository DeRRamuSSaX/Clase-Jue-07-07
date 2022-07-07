#include <stdio.h>
#include <stdlib.h>
//scanf lee salida estandar
//combinacion para EOF es ctrl d
int main(int argc, char *argv[]) {
  int correcta = (rand() % 1000000) + 1;
  int respuesta;
  for (int i = 0; i < 10; i++) {
    printf("Necesito que adivines un numero entre 1 y un millón\n");
    scanf("%d", &respuesta);
    if (respuesta < correcta) {
      printf("Mas Alto!\n");
    } else if (respuesta > correcta) {
      printf("Mas Bajo!\n");
    } else if (respuesta == correcta) {
      printf("Ganaste!!!\n");
      return 0;
    }
  }
  printf("Perdiste...\n");
  return 0;
}

// int num;
// do {
//   scanf("%d", &num);
//   printf("%d\n",num + 10);
// } while(num != EOF);
// return 0;
