#include <stdio.h>
/*Nesse programa ele pede para você digitar um número inteiro, e após isso, ele checa se o número tem o resto igual a 0.
E caso seja, aparece uma mensagem dizendo que o número é par, e caso o contrário, aparecer uma mensagem dizendo que o número é ímpar.
*/
int main(){
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }

    return 0;
}