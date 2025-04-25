#include <stdio.h>
/*O programa pede para que o usuário insira seu ano e mês de nascimento, e verifica se o seu mês de nascimento é menor que 1 ou maior que 12, e caso seja, surge uma mensagem dizendo que é um valor inválido.
Após isso, ele faz um cálculo onde sua idade em meses é igual ao ano atual - o ano de nascimento seu, multiplicado por 12 + o mês atual menos o seu mês de nascimento.
Caso o resultado dê menor que 0, isso resulta em uma data de nascimento inválida, caso o contrário, o programa mostra a sua idade em meses em forma de printf.
*/
int main(){
    int ano_nasc, mes_nasc;
    int ano_atual = 2025;
    int mes_atual = 4; 

    int idade_meses;

    printf("Digite seu ano de nascimento (ex: 2000): ");
    scanf("%d", &ano_nasc);

    printf("Digite seu mês de nascimento (1 a 12): ");
    scanf("%d", &mes_nasc);

    if (mes_nasc < 1 || mes_nasc > 12){
        printf("Mês inválido. Use um valor entre 1 e 12.\n");
        return 1;
    }

    idade_meses = (ano_atual - ano_nasc) * 12 + (mes_atual - mes_nasc);

    if (idade_meses < 0){
        printf("Data de nascimento inválida. Você ainda não nasceu!\n");
    } else {
        printf("Sua idade em meses é: %d meses.\n", idade_meses);
    }

    return 0;
}