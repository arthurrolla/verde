#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    float notas[a];
    for (int i=0;i<a;i++){
        scanf("%f",&notas[i]);
    }
    float maior=notas[0];
    float menor=notas[0];
    float soma=notas[0];
    for (int i=1;i<a;i++){
        if (notas[i]>maior){
            maior=notas[i];
        }
        if (notas[i]<menor){
            menor=notas[i];
        }
        soma=soma+notas[i];
    }
    float media=soma/a;
    printf("%.1f %.1f %.1f", maior, menor, media);

    return 0;
}
