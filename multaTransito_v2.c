/* Programa que apresenta a infracao de transito por execesso de velocidade.
Autor: Daniel Caixeta <@dfcaixeta> - Data: 27.mai.2024
Versão 2.

Passo a passo:

    1. Digitar a velocidade permitida em km/h.
    2. Digitar a velocidade registrada em km/h.
    3. Calcular o excesso de velocidade:
        excesso = velocidade registrada - velocidade permitida.
    4. Informar qual o tipo de penalidade conforme a tabela abaixo:

        Descrição da Infracao                 Pontos    Valor da multa (R$)
        Ultrapassagem em local proibido         7           293.47
        Excesso de velocidade ate 20%           4           130.16
        Excesso de velocidade entre 20% e 50%   5           195.23
        Excesso de velocidade acima de 50%      7           880.41
        Dirigir sem cinto de seguranca          5           195.23
        Uso de celular ao volante               7           293.47

    5. Construir um buffer com tipos diversos de infracoes.
    6. Listar as opcoes conforme o menu abaixo:

        Sistema de Multas de Transito
        1. Listar todas as multas
        2. Buscar multa por descricao
        3. Buscar multa por pontos
        4. Sair
        Escolha uma opcao:

    7. Apresentar os resultados na tela. */

#include <stdio.h>
#include <string.h>

// Definindo uma estrutura para armazenar informações sobre multas
struct multaTransito_v2 {
    char descricao[100];
    int pontos;
    float valor;
};

// Função para determinar a classificação da multa com base nos pontos
const char* classificacao_multa(int pontos) {
    if (pontos <= 3) {
        return "Leve";
    } else if (pontos <= 4) {
        return "Media";
    } else if (pontos <= 5) {
        return "Grave";
    } else {
        return "Gravissima";
    }
}

int main() {
    // Inicializando um array de multas
    struct multaTransito_v2 multas[]= {
        {"Estacionar veiculo em acostamento", 3, 88.38},
        {"Parar o veiculo na calcada", 3, 88.38},
        {"Ultrapassagem em local proibido", 7, 293.47},
        {"Excesso de velocidade ate 20 porcento", 4, 130.16},
        {"Excesso de velocidade entre 20 e 50 porcentos", 5, 195.23},
        {"Excesso de velocidade acima de 50 porcento", 7, 880.41},
        {"Dirigir sem cinto de seguranca", 5, 195.23},
        {"Direcao sob influencia de alcool", 7, 293.47},
        {"Uso de celular ao volante", 7, 293.47}

        // Neste array podemos incluir mais multas ...
    };

    int num_multas = sizeof(multas) / sizeof(multas[0]);
    int opcao;
    char buffer[100];
    int pontos_busca;

    // Menu de opções
    while (1) {
        printf("\nSistema de Multas de Transito\n");
        printf("1. Listar todas as multas\n");
        printf("2. Buscar multa por descricao\n");
        printf("3. Buscar multa por pontos\n");
        printf("4. Buscar multa por classificacao\n");
        printf("5. Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf(" %d", &opcao);

        if (opcao == 1) {
            // Listar todas as multas
            for (int i = 0; i < num_multas; i++) {
                printf("\nMulta: %s\n", multas[i].descricao);
                printf("Pontos: %d\n", multas[i].pontos);
                printf("Valor: R$ %.2f\n", multas[i].valor);
            }
        } else if (opcao == 2) {
            // Buscar multa por descrição
            printf("Digite a descricao da multa: ");
            getchar(); // Limpar o buffer do teclado.
            fgets(buffer, 100, stdin);
            buffer[strcspn(buffer, "\n")] = 0; // Remover a nova linha no final.

            int encontrada = 0;
            for (int i = 0; i < num_multas; i++) {
                if (strstr(multas[i].descricao, buffer) != NULL) {
                    printf("\nMulta: %s\n", multas[i].descricao);
                    printf("Pontos: %d\n", multas[i].pontos);
                    printf("Valor: R$ %.2f\n", multas[i].valor);
                    encontrada = 1;
                }
            }
            if (!encontrada) {
                printf("Nenhuma multa encontrada com essa descricao.\n");
            }
        } else if (opcao == 3) {
            // Buscar multa por pontos
            printf("Digite a quantidade de pontos da multa (3, 4, 5 e 7): ");
            scanf(" %d", &pontos_busca);

            int encontrada = 0;
            for (int i = 0; i < num_multas; i++) {
                if (multas[i].pontos == pontos_busca) {
                    printf("\nMulta: %s\n", multas[i].descricao);
                    printf("Pontos: %d\n", multas[i].pontos);
                    printf("Valor: R$ %.2f\n", multas[i].valor);
                    encontrada = 1;
                }
            }
            if (!encontrada) {
                printf("Nenhuma multa encontrada com essa quantidade de pontos.\n");
            }
        } else if (opcao == 4) {
            // Buscar multa por classificação
            printf("Digite a classificacao da multa (Leve, Media, Grave, Gravissima): ");
            getchar(); // Limpar o buffer do teclado.
            fgets(buffer, 100, stdin);
            buffer[strcspn(buffer, "\n")] = 0; // Remover a nova linha no final.

            int encontrada = 0;
            for (int i = 0; i < num_multas; i++) {
                if (strcmp(classificacao_multa(multas[i].pontos), buffer) == 0) {
                    printf("\nMulta: %s\n", multas[i].descricao);
                    printf("Pontos: %d\n", multas[i].pontos);
                    printf("Valor: R$ %.2f\n", multas[i].valor);
                    encontrada = 1;
                }
            }
            if (!encontrada) {
                printf("\nNenhuma multa encontrada com essa classificacao.\n");
            }
        } else if (opcao == 5) {
            // Sair do programa.
            break;
        } else {
            printf("\nOpcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}