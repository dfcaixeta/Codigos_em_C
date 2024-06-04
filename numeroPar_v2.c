/* Codigo em linguagem C que solicita ao usuario um numero maximo e imprime todos os
numeros pares de 0 ate esse numero maximo. Versao 2.

Autor: Daniel Caixeta <@dfcaixeta> - Data: 04.jun.2024. */

# include <stdio.h>

int main() {
    int num;

    // Solicita ao usuario para inserir o numero.
    printf("Digite um numero: ");
    scanf("%d", &num);

    // Imprime os numeros pares de 0 ate o numero maximo
    printf("Numeros pares de 0 ate %d:\n", num);
    for (int i = 0; i <= num; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

/* Explicando a logica do codigo.

printf("Numeros pares de 0 ate %d:\n", num);
    - printf imprime uma mensagem informando que serao listados os numeros pares de 0 ate num.

for (int i = 0; i <= num; i += 2) {
        printf("%d ", i);
    }
    - O loop for itera de 0 ate num, incrementando i em 2 a cada iteracao. Isso garante
    que apenas numeros pares sejam impressos.
    - Dentro do loop, o printf imprime o valor atual de i, seguido de um espaco.
    - Apos o loop, printf imprime uma nova linha para formatar a saida corretamente.
*/