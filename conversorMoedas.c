/* Programa que faz a conversão de moedas real para dolar ou euro.
Autor: Daniel Caixeta <@dfcaixeta>
Data: 19.mai.24 */

# include <stdio.h>
# include <time.h>

// Constante com as cotações da moeda para o dia
# define COTACAO_DOLAR 5.10
# define COTACAO_EURO 5.56

void exibirDataHora() {
    
    // Obtém a data e hora atual
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    // Exibe a data e hora atual no formato dd/mm/yyyy hh:mm:ss
    printf("Data e Hora atual: %02d/%02d/%04d %02d:%02d:%02d\n", 
           tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, 
           tm.tm_hour, tm.tm_min, tm.tm_sec);
}

int main(){
    float valorReais, valorConvertido;
    int moeda;

    // Solicita ao usuário para inserir o valor em reais.
    printf("\nEntre com o valor em R$: ");
    scanf("%f", &valorReais);

    // Solicita ao usuário para escolher a moeda para conversão
    printf("Escolha a moeda para conversao:\n");
    printf("1 - Dolar (US$)\n");
    printf("2 - Euro (E$)\n\n");
    scanf("%d", &moeda);

    // Processa a escolha do usuário e realiza a conversão
    switch(moeda){
        case 1:
            // Converte valor reais em dolar.
            valorConvertido = valorReais / COTACAO_DOLAR;
            printf("\nValor em US$: %.2f\n", valorConvertido);
            break;

        case 2:
            // Converte valor reais em euros.
            valorConvertido = valorReais / COTACAO_EURO;
            printf("\nValor em E$: %.2f\n", valorConvertido);
            break;

        default:
            // Informa ao usuário sobre a opção inválida.
            printf("\nOpcao invalida!\n");
            break;
    }

    // Exibir a data e hora atual
    exibirDataHora();
    printf("\n");

    return 0;

}