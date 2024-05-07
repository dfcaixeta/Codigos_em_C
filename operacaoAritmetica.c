/* Programa que realiza opera��es aritm�ticas entre dois n�meros.
Autor: @dfcaixeta - Data: 07.mai.2024 */

# include <stdio.h>
# include <locale.h>

int main() {

    setlocale(LC_ALL, "");
    double num1, num2;

    printf("\n ** Entre com os valores: ** \n");

    printf("Digite o primeiro n�mero: ");
    scanf("%lf", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%lf", &num2);

    printf("\n ** Os valores s�o: **");
    printf("\nSoma = %.2lf\n", num1 + num2);
    printf("Subtra��o = %.2lf\n", num1 - num2);
    printf("Multiplica��o = %.2lf\n", num1 * num2);
    
    if (num2 != 0) {
        printf("Divis�o = %.2lf\n\n", num1 / num2);
    } else {
        printf("\nN�o � poss�vel dividir por zero.\n\n");
    }
    return 0; 
}