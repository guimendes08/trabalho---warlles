#include <stdio.h>

int main() {
    double total = 780000.00;
    double primeiro, segundo, terceiro;

    primeiro = total * 0.46;
    segundo = total * 0.32;
    terceiro = total - (primeiro + segundo);

    printf("Primeiro ganhador: R$ %.2lf\n", primeiro);
    printf("Segundo ganhador: R$ %.2lf\n", segundo);
    printf("Terceiro ganhador: R$ %.2lf\n", terceiro);

    return 0;
}