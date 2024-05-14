/* Principais características da função printf ...
Data: 14.mai.2024 - Autor: Daniel Caixeta <@dfcaixeta> */

# include <stdio.h>
# include <stdlib.h>

int main(){

    int x = 7;
    int y = 4000000000;
    float z = 10.55555;

    printf("\nResult.1 = A variavel %s contem o valor %d.\n", "x", x);
    printf("Result.2 = %d\n", x);
    printf("Result.3 = %d\n", y);
    printf("Result.4 = %u\n", y);
    printf("Result.5 = %lf\n", z);
    printf("Result.6 = %.2lf\n", z);
    printf("Result.7 = %c\n", 'A');
    printf("Result.8 = %c\n", 65);
    printf("Result.9 = %s", "Meu primeiro programa!\n\n");
    
    system("pause");
    return 0;
}

/* Porque que A eh 65?
Porque a conversao binario de 65 eh 01000001
65 = (1 * (2^6)) + (1 * (2^0))
*/