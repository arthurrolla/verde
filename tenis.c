#include <stdio.h>

int main(){

      char resultados[6];
      int vitorias = 0;


      for (int i = 0; i < 6; i++) {
            scanf(" %c", &resultados[i]);
        if (resultados[i] == 'v') {
            vitorias++;
        }
      }

       if (vitorias >= 5) {
        printf("1");
    } else if (vitorias >= 3) {
        printf("2");
    } else if (vitorias >= 1) {
        printf("3");
    } else {
        printf("-1");
    }

    return 0;
}

