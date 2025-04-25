#include <stdio.h>
/*O programa mostra um cardápio por meio de múltiplos printf de opções de bebidas e comidas, logo após mostra uma mensagem pedindo para você escolher uma opção de 1 a 5.
Caso escolha um dos números, ele verificar por if e else qual é o número escolhido e vai enviar uma mensagem predeterminada baseada em qual opcao do menu você escolheu.
Caso escolha uma alternativa inexistente, irá mostrar como uma mensagem dizendo opção inválida, e encerrará o programa.
*/
int main() {
    int opcao;

    printf("===== CARDÁPIO =====\n");
    printf("1 - Hambúrguer\n");
    printf("2 - Pizza\n");
    printf("3 - Salada\n");
    printf("4 - Suco\n");
    printf("5 - Sorvete\n");
    printf("====================\n");

    printf("Escolha uma opção (1 a 5): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Você escolheu: Hambúrguer\n");
    } else if (opcao == 2) {
        printf("Você escolheu: Pizza \n");
    } else if (opcao == 3) {
        printf("Você escolheu: Salada \n");
    } else if (opcao == 4) {
        printf("Você escolheu: Suco \n");
    } else if (opcao == 5) {
        printf("Você escolheu: Sorvete \n");
    } else {
        printf("Opção inválida. Por favor, escolha entre 1 e 5.\n");
    }

    return 0;
}