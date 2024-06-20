#include<stdio.h>
#include<math.h>

int main(){

  int a,b,c;

  printf("Digite o valor de a: \n");
    scanf("%d", &a);

  printf("Digite o valor de b: \n");
    scanf("%d", &b);

  printf("Digite o valor de c: \n");
    scanf("%d", &c);

   if((a<b+c)&&(b<a+c)&&(c<a+b)){
     printf("Os numeros formam um triangulo");
   }else{
     printf("Os numeros nao formam um triangulo");
   }
}
