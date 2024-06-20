#include <stdio.h>
#include <stdlib.h>

#define MAX_N 10000 // Define o valor m�ximo para N

int main() {
  int n; // N�mero de pontos de solda na placa
  int pontos_soldados[MAX_N]; // Vetor para armazenar os pontos soldados
  int pontos_visitados[MAX_N]; // Vetor para marcar se um ponto foi visitado
  int i, j, cont_soldas = 0; // Vari�veis auxiliares

  // Ler o valor de N
  printf("Digite o valor de N: ");
  scanf("%d", &n);

  // Verificar se N � v�lido
  if (n <= 0 || n > MAX_N) {
    printf("Valor de N inv�lido! Deve ser entre 1 e %d.\n", MAX_N);
    return 1;
  }

  for (i = 0; i < 2 * n; i++) {
    scanf("%d", &pontos_soldados[i]);
  }

  // Inicializar o vetor de pontos visitados
  for (i = 0; i < n; i++) {
    pontos_visitados[i] = 0;
  }

  // Contar o n�mero de soldas realizadas e marcar os pontos visitados
  for (i = 0; i < 2 * n; i++) {
    if (pontos_visitados[pontos_soldados[i] - 1] == 0) {
      pontos_visitados[pontos_soldados[i] - 1] = 1;
      cont_soldas++;
    }
  }

  // Verificar se todos os pontos foram soldados
  int todos_soldados = 1;
  for (i = 0; i < n; i++) {
    if (pontos_visitados[i] == 0) {
      todos_soldados = 0;
      break;
    }
  }

  // Imprimir o resultado
  if (todos_soldados) {
    printf("O rob� cobriu todos os pontos com %d soldas.\n", cont_soldas);
  } else {
    printf("O rob� n�o cobriu todos os pontos.\n");
  }

  return 0;
}
