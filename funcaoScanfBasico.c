/* C�digo em C usando a fun��o scanf() ...
Data: 14.mai.2024 - Autor: Daniel Caixeta <@dfcaixeta>
*/

/* Passo a passo [...]
    1. Criar uma vari�vel n;
    2. Escrever na tela "Digite um n�mero: ";
    3. Ler o valor do n�mero digitado;
    Imprimir o valor digitado na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int n;
    printf("\nDigite um n�mero: ");
    scanf("%d", &n);
    printf("\nO valor de %s � igual a %d\n\n", "num", n);

    system("pause");
    return 0;

}