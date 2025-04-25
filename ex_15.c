#include <stdio.h>
/*O programa pede para você inserir 3 números inteiros, e logo após, soma eles e faz uma média. (divide a soma deles por 3).
Com isso ele mostra com printf a soma e a média e encerra o programa.
*/
int main(){
    int num1, num2, num3;
    int soma;
    float media;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;
    media = soma / 3.0; 

    printf("Soma dos números: %d\n", soma);
    printf("Média dos números: %.2f\n", media);

    return 0;
}