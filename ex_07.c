#include <stdio.h>
/*Nesse programa ele pede para inserir dois números inteiros, e após isso, ele soma o num1 com o num2, e atribui esse valor no soma1, enquanto o num3 e o num4 passam pelo mesmo processo, com seu valor
indo para a soma2.
Após isso, se verifica se a soma2 não é igual a 0, devido 0 vezes qualquer número ser 0.
Caso não seja, soma1 é divido por soma2, assim o resultados sendo salvo como a variável resultado, que é float. (Devido a divisão poder deixar resto.)
Após isso, uma mensagem mostra o resultado da divisão e o programa se encerra.
*/
int main(){
    int num1, num2, num3, num4;
    int soma1, soma2;
    float resultado;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    soma1 = num1 + num2;

    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &num3);
    printf("Digite o quarto número inteiro: ");
    scanf("%d", &num4);

    soma2 = num3 + num4;

    if (soma2 == 0){
        printf("Não é possível dividir por zero.\n");
        return 1;
    }

    resultado = (float)soma1 / soma2;
    printf("Resultado da divisão: %.2f\n", resultado);

    return 0;
}