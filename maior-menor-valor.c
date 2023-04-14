#include <stdio.h>
int main(){
    int num, menor, maior;

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &num);

    menor = num;
    maior = num;
    
    while(num >= 0){
        printf("Digite outro valor inteiro e positivo (ou um negativo para parar): ");
        scanf("%d", &num);
        if(num >= 0){
            if(num < menor){
                menor = num;
            }
            if(num > maior){
                maior = num;
            }
        }
    }

    printf("\nO maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}