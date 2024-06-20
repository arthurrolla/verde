#include <stdio.h>
#include <string.h>

#define MAX_STR_LENGTH 100

int main() {
    char strings[100][MAX_STR_LENGTH]; // matriz para armazenar as strings
    char longest_length[MAX_STR_LENGTH] = ""; // para armazenar a maior string em comprimento
    char longest_lexico[MAX_STR_LENGTH] = ""; // para armazenar a maior string lexicograficamente
    int N;

    // Ler o número de strings
    scanf("%d", &N);
    getchar(); // Consumir o caractere de nova linha após o número inteiro

    // Ler as N strings
    for (int i = 0; i < N; i++) {
        fgets(strings[i], MAX_STR_LENGTH, stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0'; // Remover o caractere de nova linha

        // Verificar maior string em termos de comprimento
        if (strlen(strings[i]) > strlen(longest_length)) {
            strcpy(longest_length, strings[i]);
        }

        // Verificar maior string lexicograficamente
        if (strcmp(strings[i], longest_lexico) > 0) {
            strcpy(longest_lexico, strings[i]);
        }
    }

    // Imprimir a maior string em termos de comprimento
    printf("%s\n", longest_length);
    // Imprimir a maior string lexicograficamente
    printf("%s\n", longest_lexico);

    return 0;
}
