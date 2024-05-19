/* Programa que verifica e altera a localizacao do idioma do S.O

Data: 11.mai.2024
Autor: Prof. Eduardo Casavella - <@Intellectuale> - <https://linguagemc.com.br/localizacao-de-programas-com-locale-h/>

Assim, se voce estiver usando um sistema operacional em portugues o suporte ao idioma padrao do
sistema sera configurado para o programa escrito em C atraves da funcao setlocale. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necessario para usar setlocale

int main(void)
{
  printf("\n****** Verificando a localidade corrente ********\n\n");
  printf ("Localidade corrente: %s\n", setlocale(LC_ALL,NULL));
  printf("Nao e possivel usar acentuacao ou c_cedilha corretamente?\n\n");
  
  printf("\n****** Alterando para a localidade do sistema ********\n\n");
  
  //alterando para o padrao do sistema operacional
  printf("A localidade corrente agora e %s \n",setlocale(LC_ALL,""));
  printf("Agora nao tem mais problema algum!\n");
  printf("Ja posso usar acentuacao e tambem o caracter c_cedilha?\n\n\n");
  
  system("pause");
  return 0;
}