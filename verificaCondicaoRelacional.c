/* Programa em C que verifica as condicoes das expressoes relacionais.

Autor: Daniel Caixeta <@dfcaixeta> - Data: 04.jun.2024  */

# include <stdio.h>

int main(){

    int a, b;

    printf("%d\n", 7 > 4); // Expressao 1
    printf("%d\n", ((3 * 4) / 2) != (2 * 3)); // Expressao 2

    a = 7; b = -7;

    printf("%d\n", a !=b ); // Expressao 3

    return 0;
}