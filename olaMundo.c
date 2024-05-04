// Código oláMundo.
// Autor: @dfcaixeta - Data: 04.mai.2024 

/* Neste código foi incluído a função setlocale por causa da acentuação do idioma PT-BR */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "");
    printf("Olá mundo\n"); // - \n quebra de linha ...

    return 0;

}

/* Explicações do código [...]

1. Cabeçalhos/Headers 
#include <stdio.h> -> Biblioteca padrão de Entrada e Saída. Possui definições de subrotinas relativas
                      às operações de entrada/saída, como leitura de dados digitados no teclado e 
                      exibição de informações na tela do programa de computador.
#include <stdlib.h> -> Possui funções envolvendo alocação de memória, controle de processos, conversões
                       e outras.
#include <locale.h> -> Biblioteca que possui funções úteis para alterar o código de idioma C. Ressalta-se 
                       que deve-se alterar o idioma da IDE de UTF-8 (Universal) para ISO8859-1 (Latin).

2. int main() -> Função main - Ponto de partida para a execução do código. O retorno zero indica
ao S.O que o programa foi bem sucedido. Caso seja retornado outro número o código deu uma condição de erro.

3. Blocos em chaves
{
Representa o corpo do codigo main. Nele colocamos as declaraões de variáveis e sentenças ou lógica 
do programa 
}

4. ponto e vírgula (;) -> É REGRA não excessão!

5. return 0 -> return: Encerra a função main retornando para o S.O.
            Se retornar 0 (zero) programa bem sucedido, SENÃO, há uma condição de erro no código.
*/