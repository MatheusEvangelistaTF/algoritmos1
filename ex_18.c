#include <stdio.h>
/*Nesse programa ele pede para inserir uma vogal, e verifica se essa vogal é a letra o ou e, caso seja, ele mostrará uma mensagem afirmando que você digitou a vogal.
E caso o contrário, mostrará uma mensagem dizendo que você não digitou o ou e.
*/
int main(){
    char letra;

    printf("Digite uma vogal: ");
    scanf(" %c", &letra); 

    if (letra == 'o' || letra == 'O'){
        printf("Você digitou a vogal 'o'.\n");
    } else if (letra == 'e' || letra == 'E'){
        printf("Você digitou a vogal 'e'.\n");
    } else{
        printf("Você digitou outra letra, não é 'o' nem 'e'.\n");
    }

    return 0;
}