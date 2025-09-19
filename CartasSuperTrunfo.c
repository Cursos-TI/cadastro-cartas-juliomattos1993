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
   float superpoder;




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
   superpoder = (float) populacao + area + pib + pontoturistico + densidadePopulacional + Pibpercapita +(1.0 / densidadePopulacional);
   
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
   float superpoder2;

   

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
   superpoder2 = (float) populacao2 + area2 + pib2 + pontoturistico2 + densidadePopulacional2 + pibpercapita2 + (1.0 / densidadePopulacional2);



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
   

   //=== comparacoes ===

   printf("\n====comparacao de cartas ===\n");

    printf("Populacao: carta %d venceu (%d)\n", populacao > populacao2 ? 1 : 2, populacao > populacao2);
    printf("Area: carta %d venceu (%d)\n", area > area2 ? 1 : 2, area > area2);
    printf("Pib: carta %d venceu (%d)\n", pib > pib2 ? 1 : 2, pib > pib2);
    printf("Ponto turistico: carta %d venceu (%d)\n", pontoturistico > pontoturistico2 ? 1 : 2, pontoturistico > pontoturistico2);
    printf("Densidade populacional: carta %d venceu (%d)\n", densidadePopulacional > densidadePopulacional ? 1 : 2, densidadePopulacional > densidadePopulacional2);
    printf("Pib Per Capita: carta %d venceu (%d)\n", Pibpercapita > pibpercapita2 ? 1 : 2, Pibpercapita > pibpercapita2);

    printf(" super poder : Carta %d venceu (%d)\n", superpoder > superpoder2 ? 1 : 2, superpoder > superpoder2);





   
   
   return 0;
} 
