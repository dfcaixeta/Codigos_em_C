/* Programa que faz conversao de formatos de tipos de dados. E uma versao
mais incrementada. Versão 2.
Autor: Daniel Caixeta <@dfcaixeta> - Data: 28.mai.24 */

# include <stdio.h>
# include <stdlib.h>

int main() {
    // Declaração de variáveis
    int intVar = 16;
    float floatVar = 3.14;
    double doubleVar = 3.14159;
    char str[20];

    // Conversão de int para float
    float intToFloat = (float)intVar;
    printf("\nConversao de int para float: %d -> %f\n", intVar, intToFloat);

    // Conversão de float para int
    int floatToInt = (int)floatVar;
    printf("Conversao de float para int: %f -> %d\n", floatVar, floatToInt);

    // Conversão de double para int
    int doubleToInt = (int)doubleVar;
    printf("Conversao de double para int: %lf -> %d\n", doubleVar, doubleToInt);

    // Conversão de double para float
    float doubleToFloat = (float)doubleVar;
    printf("Conversao de double para float: %lf -> %f\n", doubleVar, doubleToFloat);

    // Conversão de int para string
    sprintf(str, "%d", intVar);
    printf("Conversao de int para string: %d -> %s\n", intVar, str);

    // Conversão de string para int
    int stringToInt = atoi(str);
    printf("Conversao de string para int: %s -> %d\n", str, stringToInt);

    // Conversão de float para string
    sprintf(str, "%f", floatVar);
    printf("Conversao de float para string: %f -> %s\n", floatVar, str);

    // Conversão de string para float
    float stringToFloat = atof(str);
    printf("Conversao de string para float: %s -> %f\n\n", str, stringToFloat);

    return 0;
}

/* Neste algoritmo, são demonstradas várias conversões de tipos de dados em C:

-> Conversão de int para float.
-> Conversão de float para int.
-> Conversão de double para int.
-> Conversão de double para float.
-> Conversão de int para string usando sprintf.
-> Conversão de string para int usando atoi.
-> Conversão de float para string usando sprintf.
-> Conversão de string para float usando atof. */
