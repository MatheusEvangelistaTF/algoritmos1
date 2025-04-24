#include <stdio.h>
/*Nesse programa ele pede pelo printf com que você insira três valores int, e você insere eles por meio do scanf.
Após isso ele mostra os valores que você insiriu por meio de outro printf e encerra o programa.
*/
int main(){
    int a, b, c;

    printf("Digite três números inteiros:\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Você digitou: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}