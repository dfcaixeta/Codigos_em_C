/*  Programa que calcula os dias de um ano.
Calcula a proporção de dias em um ano. E.g., 365.25 == 1 ano; 750.50 == 2 anos
182.625 == 0.5 ano (meio ano)

Autor: @dfcaixeta - Data: 06.mai.2025 */

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

	int Dias;                                /* Declaracao de Variaveis */
	float Anos;
	
    printf ("\nEntre com o número de dias: "); /* Entrada de Dados */
	scanf ("%d", &Dias);
	
    Anos = Dias/365.25;                        /* Conversao Dias->Anos */
	
    printf ("\n%d dias equivalem a %f anos.\n", Dias, Anos); /* Resultado ... */

    return 0;

}