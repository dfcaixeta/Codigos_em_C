/* Programa que apresenta a infracao de transito por execesso de velocidade.

Autor: Daniel Caixeta <@dfcaixeta> - Data: 27.mai.2024

Passo a passo:

    1. Digitar a velocidade permitida em km/h.
    2. Digitar a velocidade registrada em km/h.
    3. Calcular o excesso de velocidade:
        excesso = velocidade registrada - velocidade permitida.
    4. Informar qual o tipo de penalidade conforme a tabela abaixo:
        Infracao        Pontos      Valor da multa (R$)
        Leve            3           R$: 88,38 -> Essa infracao nao tem para excesso de velocidade.
        Media           4           R$: 130,16
        Grave           5           R$: 195,23
        Gravissima      7           R$: 293,47
        Gravissima      7           R$: 880,41

Referencia: https://doutormultas.com.br/valor-multa-excesso-velocidade/ */

#include <stdio.h>

int main() {
    int velocidade_permitida, velocidade_registrada, excesso;

    // Solicitar a velocidade permitida e a velocidade registrada do condutor.
    printf("\nDigite as velocidades: \n");
    printf("Velocidade permitida (em km/h): ");
    scanf("%d", &velocidade_permitida);

    printf("Velocidade registrada (em km/h): ");
    scanf("%d", &velocidade_registrada);

    // Calcular o excesso de velocidade
    excesso = velocidade_registrada - velocidade_permitida;

    // Determinar a quantidade de pontos da multa com base no excesso de velocidade
    if (excesso <= 0) {
        printf("\nNenhuma infracao cometida.\n\n");

    } else if (excesso <= 20) {
        printf("\nInfracao Media - 4 pontos na CNH e R$: 130,16.\n\n");

    } else if (excesso <= 50) {
        printf("\nInfracao Grave - 5 pontos na CNH e R$: 195,23.\n\n");

    } else {
        printf("\nInfracao Gravissima - Suspensao da CNH e R$: 880,41.\n\n");
    }

    return 0;
}