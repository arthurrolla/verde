#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Função para encontrar o ponto de cobertura
int encontrar_ponto_de_cobertura(int N, int soldas[]) {
    // Array para armazenar quais pontos foram soldados
    bool *pontos_soldados = (bool *)calloc(N + 1, sizeof(bool));
    int count = 0;

    // Iterar sobre a lista de soldas
    for (int i = 0; i < 2 * N; i++) {
        int ponto = soldas[i];

        // Se o ponto ainda não foi soldado, marcar como soldado
        if (!pontos_soldados[ponto]) {
            pontos_soldados[ponto] = true;
            count++;
        }

        // Verificar se todos os pontos de 1 a N foram cobertos
        if (count == N) {
            free(pontos_soldados);
            // Retornar o índice + 1 porque o problema pede a posição 1-baseada
            return i + 1;
        }
    }

    // Se todos os pontos não foram cobertos, retornar 0
    free(pontos_soldados);
    return 0;
}

int main() {
    int N;
    scanf("%d", &N);

    // Alocar espaço para a lista de soldas
    int *soldas = (int *)malloc(2 * N * sizeof(int));

    // Ler os pontos de solda
    for (int i = 0; i < 2 * N; i++) {
        scanf("%d", &soldas[i]);
    }

    // Chamar a função e imprimir o resultado
    int resultado = encontrar_ponto_de_cobertura(N, soldas);
    printf("%d\n", resultado);

    // Liberar a memória alocada
    free(soldas);

    return 0;
}

