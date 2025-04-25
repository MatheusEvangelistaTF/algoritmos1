#include <stdio.h>
/*O programa pede com que você insira 2 valores reais, e depois 5 caracteres separados por espaço. Logo após ele mostra os valores e os caracteres em forma de printf.
*/
int main(){
    float valor1, valor2;

    char c1, c2, c3, c4, c5;

    printf("Digite o primeiro valor real: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor real: ");
    scanf("%f", &valor2);

    printf("Digite 5 caracteres separados por espaço: ");
    scanf(" %c %c %c %c %c", &c1, &c2, &c3, &c4, &c5);

    printf("\nValores reais digitados: %.2f e %.2f\n", valor1, valor2);
    printf("Caracteres digitados: %c %c %c %c %c\n", c1, c2, c3, c4, c5);

    return 0;
}