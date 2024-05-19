/* Programa que verifica e altera a localizacao do idioma do S.O. Versao 2.

Data: 11.mai.2024
Autor: Prof. Eduardo Casavella - <@Intellectuale> - <https://linguagemc.com.br/localizacao-de-programas-com-locale-h/>

Assim, se voce estiver usando um sistema operacional em portugues o suporte ao idioma padrao do
sistema sera configurado para o programa escrito em C atraves da funcao setlocale. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  printf("Utilizando caracteres e acentuacao da lingua portuguesa!\n\n");
  
  system("pause");
  return 0;
}
