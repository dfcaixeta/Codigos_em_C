/* Programa em C que exibe na tela data e hora atual usando a biblioteca time.h e
a função struct localtime.

Data: 11.mai.2024
Autor: Prof. Eduardo Casavelha <@Intellectuale>. <https://www.youtube.com/watch?v=jNYhfVKhOuI> */

/* O tipo de dados struct tm define uma struct para ser utlizada em funções que trabalham com 
data e hora. Abraixo segue uma descrição da struct tm.

struct tm {
int tm_sec; //representa os segundos de 0 a 59.
int tm_min; //representa os minutos de 0 a 59.
int tm_hour; //representa as horas de 0 a 24.
int tm_mday: //dia do mês de 1 a 31.
int tm_mon; //representa os meses do ano de 0 a 11.
int tm_year; //representa o ano a partir de 1900.
int tm_wday; //dia da semana de 0 (domingo) até 6 (sábado).
int tm_yday; // dia do ano de 1 a 365.
int tm_isdst; //indica horário de verão se for diferente de zero.
};
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //necessário para usar localtime() e struct tm.

int main(void)
{
  //ponteiro para struct que armazena data e hora. 
  struct tm *data_hora_atual;     
  
  //variável do tipo time_t para armazenar o tempo em segundos.  
  time_t segundos;
  
  //obtendo o tempo em segundos. 
  time(&segundos);   
  
  /* Para converter de segundos para o tempo local utilizamos a função localtime */
  data_hora_atual = localtime(&segundos); 

  /* Para acessar os membros de uma struct usando o ponteiro utilizamos o operador -> no nosso
  caso temos: data_hora_atual->membro_da_struct */


  printf("\nINFO+ Data e Hora local: \n\n");
   
  // Acessando dados convertidos para a struct data_hora_atual. 
  printf("Dia..........: %d\n", data_hora_atual -> tm_mday);  
  
  // Para retornar o mês corretamente devemos adicionar +1.
  printf("Mes..........: %d\n", data_hora_atual -> tm_mon + 1);
  
  // Para retornar o ano corretamente devemos adicionar 1900. 
  printf("Ano..........: %d\n\n", data_hora_atual -> tm_year + 1900);  
  
  printf("Dia do ano...: %d\n", data_hora_atual -> tm_yday);  
  printf("Dia da semana: %d\n\n", data_hora_atual -> tm_wday);


  /*
   Obtendo os valores da struct data_hora_atual e formatando a saída de dados
     no formato hora: minuto: segundo

    Para não ficar um printf muito longo em uma única linha de comando, quebrei a impressão em 
    3 partes mostrando uma informação em cada linha.
  */

  printf("Hora ........: %d:",data_hora_atual -> tm_hour); //hora   
  printf("%d:",data_hora_atual -> tm_min); //minuto
  printf("%d\n",data_hora_atual -> tm_sec); //segundo  
  
  /* Obtendo os valores da struct data_hora_atual e formatando a saída de dados no
    formato dia/mes/ano

    Para não ficar um printf muito longo em uma única linha de comando, quebrei a impressão em 3 partes
     sendo uma informação em cada linha   
  */ 

  //dia do mês
  printf("Data ........: %d/", data_hora_atual -> tm_mday);
  printf("%d/",data_hora_atual -> tm_mon + 1); //mês
  printf("%d\n\n",data_hora_atual -> tm_year + 1900); //ano
  
  system("pause");
  printf("\n");
  return 0;
}