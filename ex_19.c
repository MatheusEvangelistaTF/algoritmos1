#include <stdio.h>
/*O programa pede para que insira dois números reais e logo após afirma que a multiplicação de ambos é igual ao resultado, e caso o resultado seja um número inteiro, ele dirá, e caso não seja,
ele irá dizer que não é um número inteiro.
*/
int main(){
    float num1, num2;
    float resultado;

    printf("Digite o primeiro número real: ");
    scanf("%f", &num1);

    printf("Digite o segundo número real: ");
    scanf("%f", &num2);

    resultado = num1 * num2;

    if ((int)resultado == resultado){
        printf("O resultado da multiplicação é: %.0f (número inteiro)\n", resultado);
    } else{
        printf("O resultado da multiplicação é: %.2f (não é um número inteiro)\n", resultado);
    }

    return 0;
}