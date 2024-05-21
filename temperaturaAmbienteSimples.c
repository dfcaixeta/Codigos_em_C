/* Programa que apresenta as condições climáticas de acordo com a temperatura
apresentada.
Autor: Daniel Caixeta <@dfcaixeta> - Data: 21.mai.24 */

# include <stdio.h>
# include <stdlib.h>

int main(){
    float temperatura;

    printf("\n ...Informacoes sobre as condicoes do tempo... \n");
    printf("\nEntre com a temperatura [graus C]: ");
    scanf("%f", &temperatura);


    if (temperatura < 15) {
        printf("\nEsta frio!\n\n");

    } else if (temperatura <= 30) {
        printf("\nClima agradavel!\n\n");

    } else 
        printf("\nEsta quente\n\n");

        system("pause");
        return 0;

}