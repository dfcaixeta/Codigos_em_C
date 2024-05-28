/* Programa que incremente e decrementa os valores nas variaveis
Autor: Daniel Caixeta <@dfcaixeta> - Data: 25.mai.24 */

# include <stdio.h>
# include <stdlib.h>

int main() {
    int a = 5, b;
    int c = 5, d;
    int e = 5, f;
    int g = 5, h;

    b = ++a; // 'a' sera incrementado antes e so depois e usado na expressao.
    d = c++; // 'c' e usado na expressao e depois e incrementado.
    f = --e; // 'e' sera decrementado antes e so depois sera usado na expressao.
    h = g--; // 'g' eh usado na expressao e depois eh decrementado.

    printf(" b: %d \n", b); // Resultado esperado 6.
    printf(" d: %d \n", d); // Resultado esperado 5.

    printf(" f: %d \n", f); // Resultado esperado 4.
    printf(" h: %d \n", h); // Resultado esperado 5.

    return 0;
    system("pause");

}