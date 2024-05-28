/* Programa que apresenta as condicões climáticas de acordo com a temperatura apresentada.
Autor: Daniel Caixeta <@dfcaixeta>
Data: 28.mai.2024.

Escalas de temperatura ambiente em graus Celsius (Localidade referência: Brasília/DF)

 < -9 congelante
 -9 < temp <= 0 gélido
 0 < temp <= 7 muito frio
 7 < temp <= 13 fresca
 13 < temp <=18 amena
 18 < temp <= 24 agradável
 24 < temp <= 29 morna
 29 < tem 35 <= quente
 > 35 escaldante. */

#include <stdio.h>

int main() {
    float temperatura;

    // Solicita a temperatura ao usuário
    printf("\nDigite a temperatura [graus Celsius]: ");
    scanf("%f", &temperatura);

    // Avalia a temperatura e imprime a descrição correspondente
    if (temperatura < -9) {
        printf("\nTemperatura: Congelante!\n\n");

    } else if (temperatura <= 0) {
        printf("\nTemperatura: Gelida!\n\n");

    } else if (temperatura <= 7) {
        printf("\nTemperatura: Muito frio!\n\n");

    } else if (temperatura <= 13) {
        printf("\nTemperatura: Fresca!\n\n");

    } else if (temperatura <= 18) {
        printf("\nTemperatura: Amena!\n\n");

    } else if (temperatura <= 24) {
        printf("\nTemperatura: Agradavel!\n\n");

    } else if (temperatura <= 29) {
        printf("\nTemperatura: Morna!\n\n");

    } else if (temperatura <= 35) {
        printf("\nTemperatura: Quente!\n\n");

    } else {
        printf("\nTemperatura: Escaldante!\n\n");
    }

    return 0;
}
