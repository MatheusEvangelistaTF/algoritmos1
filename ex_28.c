#include <stdio.h>
/*O programa pede para inserir um valor real, e depois mostra o valor inserido por meio do printf
*/
int main(){
    float valor;

    printf("Digite um valor real: ");
    scanf("%f", &valor);

    printf("Você digitou: %.2f\n", valor);

    return 0;
}