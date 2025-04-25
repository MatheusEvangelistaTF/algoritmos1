#include <stdio.h>
/*O programa pede por meio do printf que o usuário digite uma palavra de até 10 letras. Ele pega os primeiros 10 caracteres do input e logo após, ele mostra as primeiros 10 caracteres da mensagem escrita.
*/
int main(){
    char texto[11];

    printf("Digite uma palavra com até 10 letras: ");
    fgets(texto, sizeof(texto), stdin);

    printf("Você digitou: %s\n", texto);

    return 0;
}