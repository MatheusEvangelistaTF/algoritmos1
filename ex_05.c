#include <stdio.h>
#include <math.h>
/*O programa requisita com que 3 números de valor float sejam inseridos, e após isso, verifica se o primeiro valor (a) não é 0, devido a isso ser impossível em uma equação de segundo grau.
Caso seja falso, o programa procede, calculando delta, e verificando se delta é < a 0 (Não existem raízes reais), = 0 (Existe uma única raiz real), ou diferente.
Após isso mostra as raízes reais por meio do printf, e se encerra o programa.
*/

int main(){
    float a, b, c;
    float delta, x1, x2;

    printf("Digite os valores de a, b e c:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0){
        printf("Não é uma equação do segundo grau (a não pode ser zero).\n");
        return 1;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0){
        printf("Não existem raízes reais.\n");
    } else if (delta == 0){
        x1 = -b / (2 * a);
        printf("Existe uma raiz real: x = %.2f\n", x1);
    } else{
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes reais são: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0;
}