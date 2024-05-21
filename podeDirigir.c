/* Programa que informa a idade e diz se a pessoa pode dirigir ou nao.
Autor: Daniel Caixeta <@dfcaixeta< - Data: 21.mai.24 */


# include <stdio.h>
# include <stdlib.h>

int main() {

    int idade;

    printf("\nDigite a sua idade [anos]: ");
    scanf("%d", &idade);
    
    if (idade < 16) {
        printf("\nVoce tem %d anos e nao pode dirigir!\n\n", idade);
    } 
    else if (idade < 18) {
        printf("\nVoce tem %d anos e pode tirar a habilitacao temporaria!\n\n", idade);
    }
    else {
        printf("\nVoce tem %d anos e tem permissao para dirigir!\n\n", idade);
    }
        system("pause");
        return 0;
    }