#include <stdio.h>

int main(){

    // DESAFIO SUPER TRUNFO

    // Inicio: declarar as variaveis da Carta 1
    
    //CARTA 1

    int carta_1,carta_2;
    char Estado_1[50], Estado_2[50];
    char Codigodacarta_1[50], Codigodacarta_2[50];
    char NomedaCidade_1[50], NomedaCidade_2[50];
    int Populacao_1, Populacao_2;
    float Area_1, Area_2;
    float PIB_1, PIB_2;
    int PontosTuristicos_1, PontosTuristicos_2;
    float Densidade_1, Densidade_2;
    float PIBPerCapita_1, PIBPerCapita_2;
    float SuperPoder_1, SuperPoder_2;
    int invDensidade_1, invDensidade_2;
    int CompPopulacao, CompPontosTuristicos;
    float CompArea, CompPIB, CompDensidade, CompPIBPerCapita, CompSuperPoder;
               
    //Instanciar as variaveis, usando o printf e scanf, utilizando seus especificadores

    //%d: Imprime um inteiro no formato decimal. 
    //%i: Equivalente a %d. 
    //%f: Imprime um número de ponto flutuante no formato padrão. 
    //%e: Imprime um número de ponto flutuante na notação científica. 
    //%c: Imprime um único caractere. 
    //%s: Imprime uma cadeia (string) de caracteres.

   printf("***SUPER_TRUNFO_MESTRE***\n");

   printf("***Carta1***\n");

   printf("Carta: \n");
   scanf("%d" , &carta_1);

   printf("Digite o Estado: \n");
   scanf("%s", &Estado_1);
      
   printf("Digite o Estado + codigo da carta:\n");
   scanf("%s", &Codigodacarta_1);    
   
   printf("Digite o Nome da Cidade: \n");
   scanf("%s", &NomedaCidade_1);

   printf("Digite a População: \n");
   scanf("%d", &Populacao_1);

   printf("Digite a Area: \n");
   scanf("%f", &Area_1);

   printf("Digite o PIB: \n");
   scanf("%f", &PIB_1);

   printf("Digite o Numero de Pontos Turisticos: \n");
   scanf("%d", &PontosTuristicos_1);

   Densidade_1 = Populacao_1 / Area_1;
   PIBPerCapita_1 = PIB_1 / Populacao_1;
   invDensidade_1 = 1 / Densidade_1;
   SuperPoder_1 = Populacao_1 + Area_1 + PIB_1 + PontosTuristicos_1 + PIBPerCapita_1 + invDensidade_1;

   
      // Imprimir o resultado.
   
   printf("Digite o Estado: %s \n", Estado_1);
   printf("Digite O Codigo da Carta: %s\n", Codigodacarta_1);
   printf("Digite o Nome da Cidade: %s \n", NomedaCidade_1);
   printf("Digite a Populacao: %d \n", Populacao_1);
   printf("Digite a Area: %f \n", Area_1);
   printf("Digite o PIB: %f \n", PIB_1);
   printf("Digite o Numero de Pontos Turisticos: %d \n", PontosTuristicos_1);
   printf("Resultado Densidade: %.2f\n", Densidade_1);
   printf("Resultado PIB per Capita: %.2f\n", PIBPerCapita_1);
   
   // Inicio: declarar as variaveis da Carta 2

   //CARTA 2

   printf("***Carta2***\n");
  
   printf("Carta: \n");
   scanf("%d" , &carta_2); 

   printf("Digite o Estado: \n");
   scanf("%s", &Estado_2);
      
   printf("Digite o Estado + codigo da carta:\n");
   scanf("%s", &Codigodacarta_2);    
   
   printf("Digite o Nome da Cidade: \n");
   scanf("%s", &NomedaCidade_2);

   printf("Digite a Populacao: \n");
   scanf("%d", &Populacao_2);

   printf("Digite a Area: \n");
   scanf("%f", &Area_2);

   printf("Digite o PIB: \n");
   scanf("%f", &PIB_2);

   printf("Digite o Numero de Pontos Turisticos: \n");
   scanf("%d", &PontosTuristicos_2);

   Densidade_2 = Populacao_2 / Area_2;
   PIBPerCapita_2 = PIB_2 / Populacao_2;
   invDensidade_2 = 1 / Densidade_2;
   SuperPoder_2 = Populacao_2 + Area_2 + PIB_2 + PontosTuristicos_2 + PIBPerCapita_2 + invDensidade_2;
  
   printf("Digite o Estado: %s \n", Estado_2);
   printf("Digite o Codigo da Carta: %s\n", Codigodacarta_2);
   printf("Digite o Nome da Cidade: %s \n", NomedaCidade_2);
   printf("Digite a Populacao: %d \n", Populacao_2);
   printf("Digite a Area: %f \n", Area_2);
   printf("Digite o PIB: %f \n", PIB_2);
   printf("Digite o Numero de Pontos Turisticos: %d\n", PontosTuristicos_2);
   printf("Resultado Densidade: %.2f\n", Densidade_2);
   printf("Resultado PIB per Capita: %.2f\n", PIBPerCapita_2);

   CompPopulacao = Populacao_1 > Populacao_2;
   CompArea = Area_1 > Area_2;
   CompPIB = PIB_1 > PIB_2;
   CompPontosTuristicos = PontosTuristicos_1 > PontosTuristicos_2;
   CompSuperPoder = SuperPoder_1 > SuperPoder_2;
   CompPIBPerCapita = PIBPerCapita_1 > PIBPerCapita_2;
   
   printf("***Comparando as Cartas***\n");

   printf("População: Carta 1 venceu \n", Populacao_1, CompPopulacao);
   printf("Area: Carta 1 venceu \n", Area_1, CompArea);
   printf("PIB: Carta 1  venceu \n", PIB_1, CompPIB);
   printf("Pontos Turisticos: Carta 1 venceu \n", PontosTuristicos_1, CompPontosTuristicos);
   printf("Densidade Populacional: Carta 2 venceu \n", Densidade_2, CompDensidade);
   printf("PIB per Capita: Carta 1 venceu \n", PIBPerCapita_1, CompPIBPerCapita);
   printf("Super Poder: Carta 1 venceu \n", SuperPoder_1, CompSuperPoder); 
     

   return 0;
   
}   

