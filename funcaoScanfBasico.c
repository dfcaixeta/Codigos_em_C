/* Código em C usando a função scanf() ...
Data: 14.mai.2024 - Autor: Daniel Caixeta <@dfcaixeta>
*/

/* Passo a passo [...]
    1. Criar uma variável n;
    2. Escrever na tela "Digite um número: ";
    3. Ler o valor do número digitado;
    Imprimir o valor digitado na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int n;
    printf("\nDigite um número: ");
    scanf("%d", &n);
    printf("\nO valor de %s é igual a %d\n\n", "num", n);

    system("pause");
    return 0;

}