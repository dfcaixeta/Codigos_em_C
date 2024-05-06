/* Programa que calcula operações aritméticas básicas.
Manipulação de dados na memória. 

Autor: dfcaixeta - Data: 06.mai.2024 */

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "");
    int a, b = 5, c = 4;

    a = b + c;
    b = a + 6;
    c = b - a;

    printf("\nOs valores das operações são:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n\n", c);

    return 0;
}
