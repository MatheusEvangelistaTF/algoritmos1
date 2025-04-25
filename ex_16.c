#include <stdio.h>
/*Nesse programa ele pede o comprimento a largura e a altura em metros, e logo após ele calcula o volume do objeto por meio da multiplicação das 3 variáveis, assim resultando no volume.
O valor do volume é atribuído na variável volume e logo após surge um printf mostrando o volume do objeto, e o programa se encerra.
*/
int main(){
    float comprimento, largura, altura;
    float volume;

    printf("Digite o comprimento em metros: ");
    scanf("%f", &comprimento);

    printf("Digite a largura em metros: ");
    scanf("%f", &largura);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("O volume do objeto é: %.2f metros cúbicos.\n", volume);

    return 0;
}