#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  char *meses[] = {
    "",
    "Enero",
    "Febrero",
    "Marzo",
    "Abril",
    "Mayo",
    "Junio",
    "Julio",
    "Agosto",
    "Septiembre",
    "Octubre",
    "Noviembre",
    "Diciembre"
  };
  if (n < 1 || n > 12) {
    printf("El argumento tiene que estar entre 1 y 12\n");
  } else {
    printf("%s\n", meses[n]);
  }
  return 0;
}
