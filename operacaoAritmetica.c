/* Programa que realiza operações aritméticas entre dois números.
Autor: @dfcaixeta - Data: 07.mai.2024 */

# include <stdio.h>
# include <locale.h>

int main() {

    setlocale(LC_ALL, "");
    double num1, num2;

    printf("\n ** Entre com os valores: ** \n");

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    printf("\n ** Os valores são: **");
    printf("\nSoma = %.2lf\n", num1 + num2);
    printf("Subtração = %.2lf\n", num1 - num2);
    printf("Multiplicação = %.2lf\n", num1 * num2);
    
    if (num2 != 0) {
        printf("Divisão = %.2lf\n\n", num1 / num2);
    } else {
        printf("\nNão é possível dividir por zero.\n\n");
    }
    return 0; 
}