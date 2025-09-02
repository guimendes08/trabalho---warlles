#include <stdio.h>

int main() {
    int valor1, valor2, valor3;
    int soma_quadrados;

    
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

    
    soma_quadrados = (valor1 * valor1) + (valor2 * valor2) + (valor3 * valor3);

    
    printf("A soma dos quadrados dos três valores é: %d\n", soma_quadrados);

    return 0;
}