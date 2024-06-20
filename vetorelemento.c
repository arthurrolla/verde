#include <stdio.h>

int main(){
     int n;

     scanf(" %d",&n);

     int vetor[n];

     for (int i = 0; i < n; i++){
        scanf(" %d",&vetor[i]);
     }
      int elemento = vetor[0];
      int posicao = 0;

      for (int i = 1; i < n; i++) {
        if (vetor[i] >= elemento) {
            elemento = vetor[i];
            posicao = i;
        }
      }
      printf("%d %d\n",elemento, posicao);


}



