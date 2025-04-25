#include <stdio.h>
#include <string.h>
/*O programa pede a idade, sexo, nacionalidade e questiona se o usuário tem alguma deficiência grave. 
Caso a sua idade seja entre 18 e 45, seja homem, de nacionalidade brasileira e não possui deficiência, o usuário está apto para o alistamento militar obrigatório.
*/
int main(){
    int idade;
    char sexo[10];
    char nacionalidade[20];
    char deficiencia[4];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu sexo (Masculino/Feminino): ");
    scanf("%s", sexo);

    printf("Digite sua nacionalidade: ");
    scanf("%s", nacionalidade);

    printf("Possui alguma deficiência grave? (Sim/Não): ");
    scanf("%s", deficiencia);

    if (idade >= 18 && idade <= 45 &&
        (strcmp(sexo, "Masculino") == 0 || strcmp(sexo, "masculino") == 0) &&
        (strcmp(nacionalidade, "Brasileiro") == 0 || strcmp(nacionalidade, "brasileiro") == 0) &&
        (strcmp(deficiencia, "Não") == 0 || strcmp(deficiencia, "nao") == 0 || strcmp(deficiencia, "Nao") == 0)){
        
        printf("\nSituação: Apto ao alistamento militar obrigatório.\n");
    } else{
        printf("\nSituação: Não apto ao alistamento militar obrigatório.\n");
    }

    return 0;
}