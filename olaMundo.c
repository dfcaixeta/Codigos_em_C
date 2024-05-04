// C�digo ol�Mundo.
// Autor: @dfcaixeta - Data: 04.mai.2024 

/* Neste c�digo foi inclu�do a fun��o setlocale por causa da acentua��o do idioma PT-BR */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "");
    printf("Ol� mundo\n"); // - \n quebra de linha ...

    return 0;

}

/* Explica��es do c�digo [...]

1. Cabe�alhos/Headers 
#include <stdio.h> -> Biblioteca padr�o de Entrada e Sa�da. Possui defini��es de subrotinas relativas
                      �s opera��es de entrada/sa�da, como leitura de dados digitados no teclado e 
                      exibi��o de informa��es na tela do programa de computador.
#include <stdlib.h> -> Possui fun��es envolvendo aloca��o de mem�ria, controle de processos, convers�es
                       e outras.
#include <locale.h> -> Biblioteca que possui fun��es �teis para alterar o c�digo de idioma C. Ressalta-se 
                       que deve-se alterar o idioma da IDE de UTF-8 (Universal) para ISO8859-1 (Latin).

2. int main() -> Fun��o main - Ponto de partida para a execu��o do c�digo. O retorno zero indica
ao S.O que o programa foi bem sucedido. Caso seja retornado outro n�mero o c�digo deu uma condi��o de erro.

3. Blocos em chaves
{
Representa o corpo do codigo main. Nele colocamos as declara�es de vari�veis e senten�as ou l�gica 
do programa 
}

4. ponto e v�rgula (;) -> � REGRA n�o excess�o!

5. return 0 -> return: Encerra a fun��o main retornando para o S.O.
            Se retornar 0 (zero) programa bem sucedido, SEN�O, h� uma condi��o de erro no c�digo.
*/