/* Programa que informa se um n�mero � primo.
/Autor: @dfcaixeta - Data: 05.mai.2024
*/

// Declara��o das bibliotecas
#include <stdio.h>
#include <math.h>
#include <locale.h>

// Corpo do c�digo

int main() {

    // Fun��o para ajuste para o idioma pt-BR (UTF-8 -> ISO8859-1)
    setlocale(LC_ALL, "");

    // Declara��o das vari�veis
    int num, i, primo = 1;

    // Solicita ao usu�rio para inserir o n�mero
    printf("\nDigite um n�mero inteiro positivo: ");

    //%d -> String de controle. Indica que o printf() deve colocar um inteiro na tela.
    scanf("%d", &num);

    // Verifica se o n�mero � menor que 2
    if (num < 2) {
        primo = 0;
    } else {
        // Verifica se o n�mero � divis�vel por algum n�mero inteiro entre 2 e a raiz quadrada do n�mero
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                primo = 0; // N�o � primo
                break;
            }
        }
    }

    // Exibe o resultado
    if (primo) {
        printf("\n%d � um n�mero primo.", num);
    } else {
        printf("\n%d n�o � um n�mero primo.", num);
    }

    return 0;
}
