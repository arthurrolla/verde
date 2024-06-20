#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);
    int prim_f = 1;

    if (numero == 0 || numero == 1) {
        printf("nao primo");
    } else if (numero == 2) {
        printf("primo");
    } else {
        for (int i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                printf("nao primo");
                prim_f = 0;
                break;
            }
        }
        if (prim_f == 1) {
            printf("primo");
        }
    }

    return 0;
}
