#include <stdio.h>
/*O programa pede com que você insira o valor de 2 resistências, e logo após ele calcula as resistências em paralelo, e mostra o resultado. (R1 multiplicado por R2 divido por R1 mais R2)
*/
int main(){
    float R1, R2, Req;

    printf("Digite o valor da resistência R1 (em ohms): ");
    scanf("%f", &R1);

    printf("Digite o valor da resistência R2 (em ohms): ");
    scanf("%f", &R2);

    if (R1 <= 0 || R2 <= 0){
        printf("Os valores de resistência devem ser maiores que zero.\n");
        return 1;
    }

    Req = (R1 * R2) / (R1 + R2);

    printf("A resistência equivalente em paralelo é: %.2f ohms\n", Req);

    return 0;
}