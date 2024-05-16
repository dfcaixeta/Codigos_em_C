/* Programa que calcula o fatorial de numeros <= 65.
Data: 16.mai.24 - Autor: Daniel Caixeta <@dfcaixeta> */

/* Porque um codigo em c calcula o fatorial de apenas números menor ou igual a 65?

 Isso acontece devido as limitacoess do tipo de dados usado para armazenar o resultado do fatorial. Em C, um `unsigned long long` e
frequentemente usado para armazenar numeros inteiros grandes, mas mesmo esse tipo de dados tem seus limites.

Em sistemas onde um `unsigned long long` e de 64 bits, o maior valor que pode ser armazenado e \(2^{64} - 1\), o que e aproximadamente
\(18,446,744,073,709,551,615\). Para fatoriais maiores que 20, o resultado do fatorial excedera esse valor e resultara em um estouro de
inteiro, ou seja, um valor negativo ou um valor que nao faz sentido.

Por exemplo, o fatorial de 21 e \(21! = 51,090,942,171,709,440,000\), que e maior que o valor maximo que um `unsigned long long`
pode armazenar em sistemas de 64 bits.

Para lidar com fatoriais maiores, voce precisaria de uma estrutura de dados que possa armazenar numeros com precisao arbitraria, como
bibliotecas de manipulacao de numeros inteiros grandes, como GMP (GNU Multiple Precision Arithmetic Library) em C ou bibliotecas semelhantes.
Essas bibliotecas permitem manipular numeros inteiros com qualquer numero de digitos. */

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fat = 1; // Usamos unsigned long long para armazenar fatoriais grandes

    printf("\nDigite um numero inteiro positivo: ");
    scanf("%d", &n);

    // Se o número for negativo, exibe uma mensagem de erro
    if (n < 0) {
        printf("Erro: Fatorial de numeros negativos não é definido.\n");
    }
    else {
        // Calcula o fatorial usando um loop for
        for (i = 1; i <= n; ++i) {
            fat *= i;
        }

        printf("Fatorial de %d = %llu\n\n", n, fat);
    }

    return 0;
}

