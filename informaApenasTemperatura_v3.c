/* Programa que informa a temperatura e apresenta as condicoes climaticas. Versão 3.
Autor: Daniel Caixeta <@dfcaixeta> - Data: 21.mai.2024.

Passo a passo:

Fazer um codigo fonte de um programa em Linguagem C que entre com a temperatura e apresenta as condicoes climaticas.

Escalas de temperatura ambiente em graus Celsius (Localidade referência: Brasília/DF)
 < -9 congelante
 -9 < temp <= 0 gélido
 0 < temp <= 7 muito frio
 7 < temp <= 13 fresca
 13 < temp <=18 amena
 18 < temp <= 24 agradável
 24 < temp <= 29 morna
 29 < tem 35 <= quente
 > 35 escaldante  */


#include <stdio.h>

void informarCondicaoMeteorologica(float temperatura) {
    if (temperatura < -9.0) {
        printf("\nCondicao Meteorologica: Congelante!\n\n");
    } else if (temperatura <= 0.0) {
        printf("\nCondicao Meteorologica: Gelido!\n\n");
    } else if (temperatura <= 7.0) {
        printf("\nCondicao Meteorologica: Muito Frio!\n\n");
    } else if (temperatura <= 13.0) {
        printf("\nCondicao Meteorologica: Fresca!\n\n");
    } else if (temperatura <= 18.0) {
        printf("\nCondicao Meteorologica: Amena!\n\n");
    } else if (temperatura <= 24.0) {
        printf("\nCondicao Meteorologica: Agradavel!\n\n");
    } else if (temperatura <= 29.0) {
        printf("\nCondicao Meteorologica: Morna!\n\n");
    } else if (temperatura <= 35.0) {
        printf("\nCondicao Meteorologica: Quente!\n\n");
    } else {
        printf("\nCondicao Meteorologica: Escaldante!\n\n");
    }
}

int main() {
    float temperatura;

    printf("\nEntre com a temperatura: ");
    scanf("%f", &temperatura);

    informarCondicaoMeteorologica(temperatura);

    return 0;
}
