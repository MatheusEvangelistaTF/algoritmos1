#include <stdio.h>
/*Nesse programa, é questionado o gênero do usuário (char), a sua altura e seu gênero, com ambos sendo valores float devido a não serem números inteiros geralmente.
Após isso, o sistema verifica se o caractere inserido em gênero é F (feminino) ou M (Masculino), e a partir disso ele faz a média de altura a partir de seu gênero.
Se estiver abaixo de 1.75 como homem, o programa informa por meio do printf, e caso esteja abaixo do 1.62 como mulher, o programa informa por meio de outro printf.
Vale notar que ele também informa por outro printf caso sua altura esteja igual a média nacional do seu gênero.
*/
int main(){
    char genero;
    float altura, media;

    printf("Digite seu gênero (M para masculino, F para feminino): ");
    scanf(" %c", &genero); 

    printf("Digite sua altura em metros (ex: 1.70): ");
    scanf("%f", &altura);

    if (genero == 'M' || genero == 'm'){
        media = 1.75;
    } else if (genero == 'F' || genero == 'f'){
        media = 1.62;
    } else {
        printf("Gênero inválido. Use 'M' ou 'F'.\n");
        return 0;
    }

    if (altura > media){
        printf("Você está acima da altura média nacional para seu gênero.\n");
    } else if (altura < media){
        printf("Você está abaixo da altura média nacional para seu gênero.\n");
    } else{
        printf("Você está exatamente na altura média nacional para seu gênero.\n");
    }

    return 0;
}