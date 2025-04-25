#include <stdio.h>
/*O programa pede com que se insira o primeiro e depois um segundo número inteiro, e calcula uma divisão, logo após mostrando o resultando em printf.
Caso o segundo número seja 0, a operação é negada.
Caso a divisão entre os dois números inteiros tenha resto, a operação dirá que não resulta em um número inteiro.
*/
int main(){
    int num1, num2;

    printf("Digite o primeiro número inteiro (dividendo): ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro (divisor): ");
    scanf("%d", &num2);

    if (num2 == 0){
        printf("Divisão por zero não é permitida.\n");
        return 1;
    }

    if (num1 % num2 == 0){
        int resultado = num1 / num2;
        printf("Resultado da divisão inteira: %d\n", resultado);
    } else {
        printf("A divisão de %d por %d não resulta em um número inteiro.\n", num1, num2);
    }

    return 0;
}