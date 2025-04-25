#include <stdio.h>
/*Ao inserir um valor float, o programa muda para um valor int, assim tornando um valor flutuante em um valor inteiro. Ele mostra o resultado no printf.
*/
int main(){
    float valorFloat;
    int valorInteiro;

    printf("Digite um valor float (float): ");
    scanf("%f", &valorFloat);

    valorInteiro = (int)valorFloat;

    printf("Valor convertido para inteiro: %d\n", valorInteiro);

    return 0;
}