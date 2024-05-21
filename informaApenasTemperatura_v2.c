/* Programa que apresenta as condicões climáticas de acordo com a temperatura
apresentada. Versão 2.
Autor: Daniel Caixeta <@dfcaixeta> - Data: 21.mai.24

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

# include <stdio.h>
# include <stdlib.h>

int main() {
    float temperatura;

    // Solicita a temperatura ao usuário
    printf("\nDigite a temperatura: ");
    scanf("%f", &temperatura);

    // Avalia a temperatura e imprime a descrição correspondente
    if (temperatura < -9) {
        printf("\nClima congelante!\n\n");

    } else if (temperatura <= 0) {
        printf("\nClima gelido!\n\n");

    } else if (temperatura <= 7) {
        printf("\nEsta muito frio!\n\n");

    } else if (temperatura <= 13) {
        printf("\nEsta fresco!\n\n");

    } else if (temperatura <= 18) {
        printf("\nClima ameno!\n\n");

    } else if (temperatura <= 24) {
        printf("\nClima agradavel!\n\n");

    } else if (temperatura <= 29) {
        printf("\nClima morno!\n\n");

    } else if (temperatura <= 35) {
        printf("\nClima quente!\n\n");

    } else {
        printf("\nEsta Escaldante!\n\n");
    }

    return 0;
}
