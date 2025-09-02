#include <stdio.h>

int main() {
    int numero;
    int triplo_sucessor, dobro_antecessor, resultado;

    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    
    triplo_sucessor = (3 * numero) + 1;

    
    dobro_antecessor = (2 * numero) - 1;

    
    resultado = triplo_sucessor + dobro_antecessor;

    
    printf("Resultado: %d\n", resultado);

    return 0;
}