/* Programa que lê um caractere, depois um número ponto flutuante e por fim um decimal 
e imprime na tela os dados lidos.
Data: 14.mai.2024 - Autor: Daniel Caixeta <@dfcaixeta> */

# include <stdio.h>
# include <stdlib.h>

int main(){
    char c;
    float b;
    int a;

    printf("\nDigite um caractere: ");
    scanf("%c", &c);

    printf("Digite um numero com um ponto flutuante: ");
    scanf("%f", &b);

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);

    printf("\nOs dados lidos foram: %c, %f, %d\n\n", c, b, a);

    system("pause");
    return 0;
}