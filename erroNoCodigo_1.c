/* Qual o erro nesse código? ... Descubra.
Autor: dfcaixeta - Data: 06.mai.2024 */

#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    int a, b = 4;
    double c = 2.4142, d = 3.1416;
    double e;
    
    // Cálculos das operações ...

    d = b + 5;
    e = c * d;
    a = b + 1;

    printf("\nO valor de b é: %d", b);
    printf("\nO valor de a é: %d", a);
    printf("\nO valor de e é: %.3f", e);

    return 0;
}