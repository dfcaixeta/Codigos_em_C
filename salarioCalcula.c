/* Programa calcula media salario de um funcionario com conversao do valor nas
moedas em dolar americano e euro.

Passo a passo:

    Bloco 1.
    1. Identificar o nome do funcionario;
    2. Apresentar os salarios dos dois ultimos meses;
    3. Calcular media dos salarios;
    4. Apresentar a media dos salarios;

    Bloco 2.
    6. Pegar a cotacao das moedas do dolar americano e do euro do dia;
    7. Calcular o valor da media do salario * a cotacao da moeda (US$) do dia;
    8. Calcular o valor da media do salario * a cotacao da moeda (E$) do dia;
    9. Apresentar os valores convertidos do dia;

    Bloco 3.
    10. Apresentar um relatorio na tela com o nome do funcionario, media dos salarios,
    conversao dolar e euro.
[...]
*/

#include <stdio.h>
#include <stdlib.h>

double dadosFuncionario() {
    char nomeFuncionario[100];
    double salarioMesUm, salarioMesDois, mediaSalario;

    printf("\nEntre com o nome do funcionario: ");
    scanf("%s", nomeFuncionario);

    printf("Entre com o primeiro salario R$: ");
    scanf("%lf", &salarioMesUm);

    printf("Entre com o segundo salario R$: ");
    scanf("%lf", &salarioMesDois);

    mediaSalario = (salarioMesUm + salarioMesDois) / 2;

    printf("\nNome: %s\n", nomeFuncionario);
    printf("A media do salario R$: %.2f\n", mediaSalario);

    return mediaSalario; // Retorna a média salarial
}

void cotacaoMoeda(double mediaSalario) {
    float cotacaoDiaDolar, cotacaoDiaEuro, salarioDolar, salarioEuro;

    printf("\n... COTACOES MOEDAS DO DIA ...");
    printf("\nEntre com a cotacao do Dolar do dia US$: ");
    scanf("%f", &cotacaoDiaDolar);

    printf("Entre com a cotacao do Euro do dia E$: ");
    scanf("%f", &cotacaoDiaEuro);

    // Cálculo do salário em US$
    salarioDolar = (float)(mediaSalario * cotacaoDiaDolar);

    // Cálculo do salário em E$
    salarioEuro = (float)(mediaSalario * cotacaoDiaEuro);

    printf("\n... CONVERSOES R$ -> US$ e E$ ...");
    printf("\nA media do salario em US$: %.2f\n", salarioDolar);
    printf("A media do salario em E$: %.2f\n\n", salarioEuro);
}

int main() {

    double mediaSalario = dadosFuncionario();
    cotacaoMoeda(mediaSalario);
    
    system("pause");
    return 0;
}
