/* Qual o erro nesse c�digo? ... Descubra.
Autor: dfcaixeta - Data: 06.mai.2024 */

#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    int a, b = 4;
    double c = 2.4142, d = 3.1416;
    double e;
    
    // C�lculos das opera��es ...

    d = b + 5;
    e = c * d;
    a = b + 1;

    printf("\nO valor de b �: %d", b);
    printf("\nO valor de a �: %d", a);
    printf("\nO valor de e �: %.3f", e);

    return 0;
}