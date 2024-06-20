#include <stdio.h>
int main(){
    int num, a=0, soma=0;
    scanf("%d",&num);
    int vet[num];
    for(int i=0;i<num;i++){
    scanf("%d",&vet[i]);
    }
    for (int i=0;i<num;i++){
        if (vet[i]<0){
        a++;
        }
        else{
        soma=soma+vet[i];
        }
    }
    printf("%d %d",a, soma);
    return 0;
}
