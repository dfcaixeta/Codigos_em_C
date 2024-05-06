/* Programa que calcula o valor da variável a ao final da execução.
Autor: dfcaixeta - Data: 06.mai.2024 */

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "");
    int a, b = 4, c = 2, d = 3;

    d = c + b;
    a = d + 1;
    a = a + 1;

    printf("\nO valor de a é: %d", a);
    return 0;
}
