/* Programa que apresenta a descricao da infracao de transito.
Autor: Daniel Caixeta <@dfcaixeta> - Data: 27.mai.2024
Versão 3.

Passo a passo:

    1. Criar um array com a descrição das multas.
    2. Apresenta a descrição do array de multas, com tipo de infração, pontuacão e valor 
    da multa.
    
        Descrição da Infracao                 Pontos    Valor da multa (R$)
        Ultrapassagem em local proibido         7           293.47
        Excesso de velocidade ate 20%           4           130.16
        Excesso de velocidade entre 20% e 50%   5           195.23
        Excesso de velocidade acima de 50%      7           880.41
        Dirigir sem cinto de seguranca          5           195.23
        Uso de celular ao volante               7           293.47
    
    3. Apresentar os resultados na tela. */

#include <stdio.h>

typedef struct {
    char descricao[100];
    int pontos;
    float valor_multa;
} Multa;

int main() {

    Multa multas[] = {
        {"- Estacionar veiculo em acostamento", 3, 88.38},
        {"- Parar o veiculo na calcada", 3, 88.38},
        {"- Ultrapassagem em local proibido", 7, 293.47},
        {"- Excesso de velocidade ate 20 porcento", 4, 130.16},
        {"- Excesso de velocidade entre 20 e 50 porcentos", 5, 195.23},
        {"- Excesso de velocidade acima de 50 porcento", 7, 880.41},
        {"- Dirigir sem cinto de seguranca", 5, 195.23},
        {"- Direcao sob influencia de alcool", 7, 293.47},
        {"- Uso de celular ao volante", 7, 293.47}
    };

    int quantidade_multas = sizeof(multas) / sizeof(multas[0]);

    printf("\nDescricao das infracoes:\n\n");
    for (int i = 0; i < quantidade_multas; i++) {
        printf("%s: %d pontos - R$ %.2f\n", multas[i].descricao, multas[i].pontos, multas[i].valor_multa);
    }

    return 0;
}