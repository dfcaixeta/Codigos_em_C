/* Programa que informa se um número é primo.
/Autor: @dfcaixeta - Data: 05.mai.2024
*/

// Declaração das bibliotecas
#include <stdio.h>
#include <math.h>
#include <locale.h>

// Corpo do código

int main() {

    // Função para ajuste para o idioma pt-BR (UTF-8 -> ISO8859-1)
    setlocale(LC_ALL, "");

    // Declaração das variáveis
    int num, i, primo = 1;

    // Solicita ao usuário para inserir o número
    printf("\nDigite um número inteiro positivo: ");

    //%d -> String de controle. Indica que o printf() deve colocar um inteiro na tela.
    scanf("%d", &num);

    // Verifica se o número é menor que 2
    if (num < 2) {
        primo = 0;
    } else {
        // Verifica se o número é divisível por algum número inteiro entre 2 e a raiz quadrada do número
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                primo = 0; // Não é primo
                break;
            }
        }
    }

    // Exibe o resultado
    if (primo) {
        printf("\n%d é um número primo.", num);
    } else {
        printf("\n%d não é um número primo.", num);
    }

    return 0;
}
