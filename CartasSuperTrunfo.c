#include <stdio.h>


int main() {
   
   //*==== variaveis carta 1:
   char estado [15];
   char codigo [5];
   char cidade [20];
   int populacao; 
   int pontoturistico;
   float area;
   float pib;
   float pibBilhoes;
   float densidadePopulacional; 
   float Pibpercapita;



   printf("\n==== cadastro da CARTA 1 ====\n");

   printf("digite seu estado: \n");
   scanf("%s", estado);

   printf("codigo: \n");
   scanf("%s", codigo);

   printf("nome da cidade: \n");
   scanf("%s",cidade);

   printf("total de habitantes: \n");
   scanf("%d",&populacao);

   printf("area (km²): \n");
   scanf("%f" ,&area);

   printf("pib ( em bilhoes de reais): \n");
   scanf("%f" ,&pibBilhoes);

   printf("quantidades de pontos turisticos: \n");
   scanf("%d", &pontoturistico);


   //calculos para carta1

   pib = pibBilhoes * 1000000000;
   densidadePopulacional =  (float)populacao / (float)area;
   Pibpercapita = (float)pib /  (float) populacao;
   
   // saida formatada
   printf("\n==== CARTA 1 ====\n");
   printf("Estado : %s \n" , estado);
   printf("Codigo da carta : %s \n ",codigo);
   printf("cidade: %s \n" , cidade);
   printf("habitantes: %d\n" , populacao);
   printf("area : %.2f km²\n", area);
   printf("PIB: %.2f bilhoes de reais\n", pibBilhoes);
   printf(" Pontos Turisticos: %d \n", pontoturistico);
   printf("densidade populacional e: %.2f hab/km2\n", densidadePopulacional );
   printf("PIB per capita: %.2f\n", Pibpercapita);





  //*==== variaveis carta 2: 
   char estado2 [15];
   char codigo2 [5];
   char cidade2 [20];
   int populacao2; 
   int pontoturistico2;
   float area2;
   float pib2;
   float pibBilhoes2;
   float densidadePopulacional2;
   float pibpercapita2;

   

  printf("\n==== cadastro da CARTA 2 ====\n");
  printf("digite seu estado: \n");
   scanf("%s", estado2);

   printf("codigo: \n");
   scanf("%s", codigo2);

   printf("nome da cidade: \n");
   scanf("%s",cidade2);

   printf("total de habitantes: \n");
   scanf("%d",&populacao2);

   printf("area (km²): \n");
   scanf("%f" ,&area2);

   printf("pib ( em bilhoes de reais): \n");
   scanf("%f" ,&pibBilhoes2);

   printf("quantidades de pontos turisticos: \n");
   scanf("%d", &pontoturistico2);
   //calculos para carta2
   
   pib2 = pibBilhoes2 * 1000000000;
   densidadePopulacional2 = (float) populacao2 / area2;
   pibpercapita2 = (float) pib2 / (float) populacao2;



  // saida formatada
   printf("\n==== CARTA 2 ====\n");
   printf("Estado : %s \n" , estado2);
   printf("Codigo da carta : %s \n ",codigo2);
   printf("cidade: %s \n" , cidade2);
   printf("habitantes: %d\n" , populacao2);
   printf("area : %.2f km²\n", area2);
   printf("pib?: %.2f bilhoes\n", pib2);
   printf(" Pontos Turisticos: %d \n", pontoturistico2);
   printf("densidade populacional e: %.2f hab/km2\n", densidadePopulacional2 );
   printf("PIB per capita: %.2f\n", pibpercapita2);
   


   





   
   
   return 0;
} 
