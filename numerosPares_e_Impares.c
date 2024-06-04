/* Codigo em linguagem C que solicita ao usuario um numero maximo e imprime todos os
numeros pares e impares de 0 ate esse numero maximo.

Autor: Daniel Caixeta <@dfcaixeta> - Data: 04.jun.2024 */

# include <stdio.h>

int main() {
    int num;

    // Solicita ao usuario para inserir o numero.
    printf("\nDigite um numero: ");
    scanf("%d", &num);

    // Imprime os numeros pares de 0 ate o numero maximo
    printf("\nNumeros pares de 0 ate %d:\n", num);
    for (int i = 0; i <= num; i += 2) {
        printf("%d ", i);
    }
    printf("\n\n");

    // Imprime os numeros impares de 0 ate o numero maximo
    printf("Numeros impares de 0 ate %d:\n", num);
    for (int i = 1; i <= num; i += 2) {
        printf("%d ", i);
    }
    printf("\n\n");

    return 0;
}

/* Explicacao do codigo

    - Para fazer com que o codigo também imprima os números ímpares de 0 até o número
      máximo, podemos adicionar um segundo loop for após o primeiro loop.

    - Para imprimir os numeros pares a estrutura do loop for deve comercar com 0 e incrementar
      mais 2 ate o termino do loop. Por exemplo.
    
        for (int i = 0; i <= num; i += 2) {
        printf("%d ", i);
    }
      
    - Para imprimir os numeros impares a estrutura do loop for deve comercar com 1 e incrementar
      mais 2 ate o termino do loop. Por exemplo.
    
        for (int i = 1; i <= num; i += 2) {
        printf("%d ", i);

    - Dentro do loop, printf imprime o valor atual de i, seguido de um espaco.
    - Apos o loop, printf imprime uma nova linha para formatar a saida corretamente.

    - Resumo:
        - Com essas adicoes, o programa agora solicita um numero do usuário e imprime
          tanto os numeros pares quanto os numeros impares de 0 ate esse numero.
        - O uso de dois loops for permite que os numeros pares e impares sejam impressos
          separadamente.
*/