/* Programa que faz conversao de formatos de tipos de dados. E uma versao
mais simples. Versão 1.
Autor: Daniel Caixeta <@dfcaixeta> - Data: 28.mai.24 */

#include <stdio.h>

int main() {
    // Declaração de variáveis
    int inteiro = 10;
    float flutuante = 5.75;
    char caractere = 'A';

    // Conversão de int para float
    float intParaFloat = (float)inteiro;
    printf("\nConversao de int para float: %d -> %f\n", inteiro, intParaFloat);

    // Conversão de float para int
    int floatParaInt = (int)flutuante;
    printf("Conversao de float para int: %f -> %d\n", flutuante, floatParaInt);

    // Conversão de char para int
    int charParaInt = (int)caractere;
    printf("Conversao de char para int: %c -> %d\n", caractere, charParaInt);

    // Conversão de int para char
    char intParaChar = (char)65; // 65 é o código ASCII para 'A'
    printf("Conversao de int para char: %d -> %c\n\n", 65, intParaChar);

    return 0;
}

/* Neste algoritmo simples, são realizadas as seguintes conversões de tipos de dados:

-> Conversão de um valor int para float.
-> Conversão de um valor float para int.
-> Conversão de um valor char para int, mostrando o código ASCII do caractere.
-> Conversão de um valor int para char, usando um valor específico (65, que é o código ASCII para 'A'). */