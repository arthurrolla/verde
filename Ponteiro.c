#include <stdio.h>

void inverterNumero(int numero, int *invertido) {
  if (numero == 0) {
    return;
  } else {
    *invertido = (*invertido * 10) + (numero % 10);
    inverterNumero(numero / 10, invertido);
  }
}

int main() {
  int numero, invertido = 0;

  printf("Digite um n�mero inteiro: ");
  scanf("%d", &numero);

  inverterNumero(numero, &invertido);

  printf("O n�mero invertido �: %d\n", invertido);

  return 0;
}
