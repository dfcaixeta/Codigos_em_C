/* Programa que calcula a media entre dois n�meros.

Autor: @dfcaixeta - Data: 07.mai.2024. */


// Declara��o das bibliotecas
# include <stdio.h>
# include <locale.h>

// Corpo do c�digo ..
int main() 
{

    setlocale(LC_ALL, "");
    double num1, num2, media;

    printf("\nEntrada dos valores: \n");

    printf("Digite o primeiro n�mero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%lf", &num2);

    // L�gica do c�lculo ...
    media = (num1 + num2) / 2.0;

    // Imprime os resultados do c�lculo ...
    printf("\nResultado: ");
    printf("\nM�dia = %.1f\n\n", media);
    return 0;

}