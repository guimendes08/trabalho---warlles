#include <stdio.h>

int main() {
    char maiuscula, minuscula;

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &maiuscula);

    minuscula = maiuscula + 32;

    printf("A letra minuscula correspondente e: %c\n", minuscula); 

    return 0;
}
