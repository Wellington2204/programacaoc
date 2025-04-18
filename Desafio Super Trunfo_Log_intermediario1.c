#include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){

   char Carta1[10] = "SP"; 
   char Carta2[10] = "RJ"; 
   char Estado_SP[50], Estado_RJ[50];
   int Populacao_SP = 12325000;
   int Populacao_RJ = 6748000; 
   float Area_SP = 1521.11;
   float Area_RJ = 1200.25;
   float PIB_SP = 699280000;
   float PIB_RJ = 300500000;
   int PontosTuristicos_SP = 50;
   int PontosTuristicos_RJ = 30;
   float Densidade_SP; 
   float Densidade_RJ;
   int escolhajogador;
    
printf("#### Super Trunfo ####\n");


printf("Escolha uma das opções: \n");
printf("1. População\n");
printf("2. PIB\n");
printf("3. Area\n");
printf("4. Pontos Turisticos\n");
printf("5. Densidade\n");
scanf("%d", &escolhajogador);

Densidade_SP = Populacao_SP / Area_SP;
  
Densidade_RJ = Populacao_RJ / Area_RJ;

switch (escolhajogador)
{
case 1:
   if (Populacao_SP > Populacao_RJ)
   {
      printf(" ### Carta 1 %s Venceu! ###\n", Carta1);
      printf(" ### São Paulo ###\n");
      printf(" ### Criterio População! ###\n");
      printf("População de São Paulo %d", Populacao_SP);
   } else if (Populacao_SP == Populacao_RJ)
      {
        printf(" ### Empate! ###");
      }else{
      printf(" ### Carta 2 %s Venceu! ###\n", Carta2);
      printf(" ### Rio de Janeiro ###\n");
      printf(" ### Criterio População! ###\n");
      printf("População do Rio de }Janeiro %d", Populacao_RJ);
      }   
      break;
   case 2:
   if (PIB_SP > PIB_RJ)
   {
      printf(" ### Carta 1 %s Venceu! ###\n", Carta1);
      printf(" ### São Paulo ###\n");
      printf(" ### Criterio PIB! ###\n");
      printf("PIB de São Paulo %f", PIB_SP);
   } else if (PIB_SP == PIB_RJ)
      {
        printf(" ### Empate! ###");
      }else{
      printf(" ### Carta 2 %s Venceu! ###\n", Carta2);
      printf(" ### Rio de Janeiro ###\n");
      printf(" ### Criterio PIB! ###\n");
      printf("PIB do Rio de }Janeiro %f", PIB_RJ);
      }  
      break; 
   case 3:
   if (Area_SP > Area_RJ)
   {
      printf(" ### Carta 1 %s Venceu! ###\n", Carta1);
      printf(" ### São Paulo ###\n");
      printf(" ### Criterio Area! ###\n");
      printf("Area de São Paulo %f", Area_SP);
   } else if (Area_SP == Area_RJ)
      {
        printf(" ### Empate! ###");
      }else{
      printf(" ### Carta 2 %s Venceu! ###\n", Carta2);
      printf(" ### Rio de Janeiro ###\n");
      printf(" ### Criterio Area! ###\n");
      printf("Area do Rio de }Janeiro %f", Area_RJ);
      }  
      break; 
   case 4:
   
   if (PontosTuristicos_SP > PontosTuristicos_RJ)
   {
      printf(" ### Carta 1 %s Venceu! ###\n", Carta1);
      printf(" ### São Paulo ###\n");
      printf(" ### Criterio Pontos Turisticos! ###\n");
      printf("Pontos Turisticos de São Paulo %d", PontosTuristicos_SP);
   } else if (PontosTuristicos_SP == PontosTuristicos_RJ)
      {
        printf(" ### Empate! ###");
      }else{
      printf(" ### Carta 2 %s Venceu! ###\n", Carta2);
      printf(" ### Rio de Janeiro ###\n");
      printf(" ### Criterio Pontos Turisticos! ###\n");
      printf("Pontos Turisticos do Rio de }Janeiro %d", PontosTuristicos_RJ);
      }  
      break;
   case 5:
   if (Densidade_SP > Densidade_RJ)
   {
      printf(" ### Carta 1 %s Venceu! ###\n", Carta1);
      printf(" ### São Paulo ###\n");
      printf(" ### Criterio Densidade! ###\n");
      printf("Densidade de São Paulo %f", Densidade_SP);
   } else if (Densidade_SP == Densidade_RJ)
      {
        printf(" ### Empate! ###");
      }else{
      printf(" ### Carta 2 %s Venceu! ###\n", Carta2);
      printf(" ### Rio de Janeiro ###\n");
      printf(" ### Criterio Densidade! ###\n");
      printf("Densidade do Rio de }Janeiro %f", Densidade_RJ);
      }   
      break;
   }   
      
}


