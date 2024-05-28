/* Programa em C que determina as condicoes metereologicas. Versao simplificada.
Autor: Daniel Caixeta <@dfcaixeta> - Data: 20.mai.2024

Para criar um programa em linguagem C que entra com uma temperatura e informa 
as condições meteorológicas, você pode seguir o exemplo abaixo. O programa lê uma
temperatura do usuário e informa se está frio, ameno ou quente, com base na
temperatura fornecida. Para este exemplo, vamos definir as seguintes faixas de
temperatura:

Frio: abaixo de 15°C
Ameno: entre 15°C e 30°C
Quente: acima de 30°C  */

#include <stdio.h>

// Função que determina as condições meteorológicas com base na temperatura
const char* condicoes_meteorologicas(float temperatura) {
    if (temperatura < 15.0) {
        return "Frio!";

    } else if (temperatura <= 30.0) {
        return "Ameno!";

    } else {
        return "Quente!";
    }
}

int main() {
    float temperatura;

    // Solicita ao usuário que insira a temperatura
    printf("\nDigite a temperatura em graus Celsius: ");
    scanf("%f", &temperatura);

    // Chama a função para determinar as condições meteorológicas e imprime o resultado
    const char* condicao = condicoes_meteorologicas(temperatura);
    printf("\nCondicoes meteorologicas: %s\n\n", condicao);

    return 0;
}
