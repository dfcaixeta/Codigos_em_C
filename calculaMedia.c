/* Programa que calcula a media entre dois números.

Autor: @dfcaixeta - Data: 07.mai.2024. */


// Declaração das bibliotecas
# include <stdio.h>
# include <locale.h>

// Corpo do código ..
int main() 
{

    setlocale(LC_ALL, "");
    double num1, num2, media;

    printf("\nEntrada dos valores: \n");

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    // Lógica do cálculo ...
    media = (num1 + num2) / 2.0;

    // Imprime os resultados do cálculo ...
    printf("\nResultado: ");
    printf("\nMédia = %.1f\n\n", media);
    return 0;

}