#include <stdio.h>
#include "function_espacopelotempo.c"

int main() {
    printf("Testando espaco pelo tempo:\n");

    // Sem aceleracao: v=80, t=2 => S = 160
    printf("S(v=80, t=2) = %.2f\n", calcularEspaco(80, 2));

    // Sem aceleracao: v=40, t=2 => S = 80
    printf("S(v=40, t=2) = %.2f\n", calcularEspaco(40, 2));

    // Com aceleracao: v=40, t=2, a=3 => S = (40*2) + (3*4)/2 = 80 + 6 = 86
    printf("S(v=40, t=2, a=3) = %.2f\n", calcularEspacoComAceleracao(40, 2, 3));

    printf("Criado por Thiago Bonfanti Guimarães");
    return 0;
}
