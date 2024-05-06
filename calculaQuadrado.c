#include <stdio.h>
#include <locale.h>

void square(int x)	/* Calcula o quadrado de x */
{
    printf("O quadrado é %d", (x * x));
}

int main()
{
    setlocale(LC_ALL, ""); // Função para a correção de idioma -> pt-BR (UTF-8 -> ISO 8859-1).
    int num;
    printf("\nEntre com um número: ");
    scanf("%d", &num);
    printf("\n");
    square(num);

    return 0;
}
