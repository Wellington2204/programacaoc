#include <stdio.h>

int main(){

    // Projeto DESAFIO XADREZ

    // Inicio: declarar as variaveis da Carta 1
    
    //CARTA 1    

    int carta;
    char Estado[10];
    char Codigodacarta[50];
    char NomedaCidade[50];
    int Populacao;
    float Area;
    float PIB;
    int PontosTuristicos;
    float Densidade;
    float PIBPerCapita;
     
   
    //Instanciar as variaveis, usando o printf e scanf, utilizando seus especificadores

    //%d: Imprime um inteiro no formato decimal. 
    //%i: Equivalente a %d. 
    //%f: Imprime um número de ponto flutuante no formato padrão. 
    //%e: Imprime um número de ponto flutuante na notação científica. 
    //%c: Imprime um único caractere. 
    //%s: Imprime uma cadeia (string) de caracteres.

   printf("***DESAFIO XADREZ***\n");

   printf("Carta: \n");
   scanf("%d" , &carta);

   printf("Digite o Estado: \n");
   scanf("%s", &Estado);
      
   printf("Digite o Estado + codigo da carta:\n");
   scanf("%s", &Codigodacarta);    
   
   printf("Digite o Nome da Cidade: \n");
   scanf("%s", &NomedaCidade);

   printf("Digite a População: \n");
   scanf("%d", &Populacao);

   printf("Digite a Area: \n");
   scanf("%f", &Area);

   printf("Digite o PIB: \n");
   scanf("%f", &PIB);

   printf("Digite o Numero de Pontos Turisticos: \n");
   scanf("%d", &PontosTuristicos);

   Densidade = Populacao / Area;
   PIBPerCapita = PIB / Populacao;
 

   // Imprimir o resultado.
   
   printf("Digite o Estado: %s \n", Estado);
   printf("Digite O Codigo da Carta: %s\n", Codigodacarta);
   printf("Digite o Nome da Cidade: %s \n", NomedaCidade);
   printf("Digite a População: %d \n", Populacao);
   printf("Digite a Area: %f \n", Area);
   printf("Digite o PIB: %f \n", PIB);
   printf("Digite o Numero de Pontos Turisticos: %d \n", PontosTuristicos);
   printf("Resultado Densidade: %.2f\n", Densidade);
   printf("Resultado PIB per Capita: %.2f\n", PIBPerCapita);
   
   // Inicio: declarar as variaveis da Carta 2

   //CARTA 2
  
   printf("Carta: \n");
   scanf("%d" , &carta); 

   printf("Digite o Estado: \n");
   scanf("%s", &Estado);
      
   printf("Digite o Estado + codigo da carta:\n");
   scanf("%s", &Codigodacarta);    
   
   printf("Digite o Nome da Cidade: \n");
   scanf("%s", &NomedaCidade);

   printf("Digite a População: \n");
   scanf("%d", &Populacao);

   printf("Digite a Area: \n");
   scanf("%f", &Area);

   printf("Digite o PIB: \n");
   scanf("%f", &PIB);

   printf("Digite o Numero de Pontos Turisticos: \n");
   scanf("%d", &PontosTuristicos);

   Densidade = Populacao / Area;
   PIBPerCapita = PIB / Populacao;
  
   printf("Digite o Estado: %s \n", Estado);
   printf("Digite o Codigo da Carta: %s\n", Codigodacarta);
   printf("Digite o Nome da Cidade: %s \n", NomedaCidade);
   printf("Digite a População: %d \n", Populacao);
   printf("Digite a Area: %f \n", Area);
   printf("Digite o PIB: %f \n", PIB);
   printf("Digite o Numero de Pontos Turisticos: %d\n", PontosTuristicos);
   printf("Resultado Densidade: %.2f\n", Densidade);
   printf("Resultado PIB per Capita: %.2f\n", PIBPerCapita);
   


   return 0;
   
}   

