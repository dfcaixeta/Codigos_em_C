/* Código em linguagem C que solicita ao usuario um numero maximo e depois usa um
LOOP FOR para apresentar todos os numeros pares de 0 até esse numero maximo. Versao 1.

Autor: Daniel Caixeta <@dfcaixeta> - Data: 04.jun.2024 */

#include <stdio.h>

int main() {
    // Declaracao da variavel para armazenar o numero.
    int num;

    // Solicita ao usuario para inserir o numero.
    printf("\nDigite um numero: ");
    scanf("%d", &num);

    // Loop para iterar do 0 ate o numero maximo.
    printf("Numeros pares de 0 ate %d:\n", num);
    for (int i = 0; i <= num; i++) {

        // Verifica se o numero eh par. (Usa o resto da divisao!)
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

/* Explicacao do Codigo:

Declaracao da Variavel:
    - int maxNum: Variavel para armazenar o numero maximo inserido pelo usuario.

Solicitacao do Numero Maximo:
    - printf("Digite o numero maximo: "): Solicita que insira o numero maximo.
    - scanf("%d", &maxNum): Le o numero inserido pelo usuario.

Loop for para Iteracao:
    - for (int i = 0; i <= maxNum; i++): Itera do 0 ate o numero maximo, incrementando a
    variável i em 1 a cada iteracao.
    - if (i % 2 == 0): Verifica se o numero atual (i) eh PAR. Um numero eh PAR se o resto
    da divisAo por 2 (i % 2) for igual a 0.
    - printf("%d ", i): Se o numero for PAR, ele eh impresso na tela.

Impressao dos Resultados:
    - Todos os numeros pares de 0 ate o numero maximo inserido serao impressos na tela,
    separados por espaços.
    - Este codigo eh um exemplo simples de como usar um LOOP FOR e uma condicao IF para
    iterar sobre um conjunto de numeros e realizar uma verificacao de paridade.
*/