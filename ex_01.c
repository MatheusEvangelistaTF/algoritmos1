#include <stdio.h>
/*Nesse exercício, ele exige com que ao inserir 3 variáveis, que sejam números, resultem na dimensionalidade de um triângulo.
Float a, b e c são as varáveis usadas na hora de inserir e calcular os números.
os if e else são usados para checar um por um em qual dos tipo de triângulos os números se encaixam, com o isósceles sendo quando os dois valores tem a mesma medida.
no equilátero se verifica se a soma de duas variáveis é maior que uma delas, na tentativa de descobrir se é um triângulo equilátero.
E caso não seja nenhum dos 2, pode se presumir que é um triângulo escaleno.*/
int main(){
    float a, b, c;

    printf("Digite os três lados do triângulo:\n");
    scanf("%f %f %f", &a, &b, &c);


    if (a + b > c && a + c > b && b + c > a){
        if (a == b && b == c){
            printf("Triângulo equilátero.\n");
        } else if (a == b || a == c || b == c){
            printf("Triângulo isósceles.\n");
        } else {
            printf("Triângulo escaleno.\n");
        }
    } else{
        printf("Os valores fornecidos não formam um triângulo.\n");
    }

    return 0;
}