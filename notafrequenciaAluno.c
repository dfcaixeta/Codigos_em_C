/* Programa que apresenta a nota final e frequência de uma aluno(a) usando
estrutura if ... else if ... else e operadores lógicos booleanos.

Autor: Eduardo Casavella <@Intellectuale> - Data: 21.mai.24

Versão 1.: Modificada por Daniel Caixeta <@dfcaixeta> */

# include <stdio.h>

int main (void) {

    float notaFinal, frequencia;

    printf("\nDigite a nota do(a) aluno(a): ");
    scanf("%f", &notaFinal);

    printf("\nInforme a frequencia do(a) aluno(a) [perc.]: ");
    scanf("%f", &frequencia);
    
    if (notaFinal >= 6.0 && frequencia >= 75)

        printf("\nAluno(a) aprovado(a)!\n\n");

    else
        printf("\nAluno(a) reprovado(a)!\n\n");

        return 0;
}