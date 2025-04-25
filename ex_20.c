#include <stdio.h>
/*O programa pede para inserir 3 caracteres, e logo após ele verifica as variáveis são maiores que a outra, e caso sejam maiores, elas tem o valor atribuído a temp, trocando elas de lugar.
Após o fim do processos de ifs, ele mostra em ordem alfabética os caracteres. 
*/
int main(){
    char c1, c2, c3, temp;

    printf("Digite o primeiro caractere: ");
    scanf(" %c", &c1);

    printf("Digite o segundo caractere: ");
    scanf(" %c", &c2);

    printf("Digite o terceiro caractere: ");
    scanf(" %c", &c3);

    if (c1 > c2){
        temp = c1;
        c1 = c2;
        c2 = temp;
    }

    if (c1 > c3){
        temp = c1;
        c1 = c3;
        c3 = temp;
    }

    if (c2 > c3){
        temp = c2;
        c2 = c3;
        c3 = temp;
    }

    printf("Caracteres em ordem alfabética: %c %c %c\n", c1, c2, c3);

    return 0;
}