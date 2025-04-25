#include <stdio.h>
/*Nesse programa, ele pede para você inserir 5 números inteiros, e logo após ler eles, ele faz uso do for para fazer um ciclo de comparações, organizando eles de lugar.
Ao fim do for, é mostrando em ordem crescente os números inseridos por meio de um printf. E o programa se encerra.
*/
int main(){
    int numeros[5];
    int i, j, temp;

    printf("Digite 5 números inteiros:\n");
    for(i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(numeros[i] > numeros[j]) {
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    printf("\nNúmeros em ordem crescente:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}