#include <stdio.h>
/*O programa pede para inserir 2 números inteiros, soma eles, salvando o resultando na variável soma, e logo após determina se a soma é maior ou igual a 10, mostrando o resultado no printf.
*/
int main(){
    int num1, num2, soma;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    if (soma >= 10){
        printf("A soma é %d, que é maior ou igual a 10.\n", soma);
    } else{
        printf("A soma é %d, que é menor que 10.\n", soma);
    }

    return 0;
}