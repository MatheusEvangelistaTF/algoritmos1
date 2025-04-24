#include <stdio.h>
/*Nesse programa ele pede para inserir seu nome, sua idade, seu gênero (M/F) e sua altura. (Printf e Scanf) 
Após isso ele salva nas variáveis (char para nome e genero, float para altura e int para idade), e mostra todas elas por meio do Printf.
Após isso o programa se encerra.
*/
int main(){
    char nome[50];
    int idade;
    char genero;
    float altura;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin); 

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu gênero (M para masculino, F para feminino): ");
    scanf(" %c", &genero); 

    printf("Digite sua altura em metros (ex: 1.75): ");
    scanf("%f", &altura);

    printf("\n--- Dados do usuário ---\n");
    printf("Nome: %s", nome);
    printf("Idade: %d anos\n", idade);
    printf("Gênero: %c\n", genero);
    printf("Altura: %.2f m\n", altura);

    return 0;
}