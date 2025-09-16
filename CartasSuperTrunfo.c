#include <stdio.h>


int main() {
   
   char estado [15];
   char codigo [5];
   char cidade [20];
   int populacao; 
   int pontoturistico;
   float area;
   float pib;
  printf("\n==== cadastro da CARTA 1 ====\n");

   printf("digite seu estado: \n");
   scanf("%s", estado);

   printf("codigo: \n");
   scanf("%s", codigo);

   printf("nome da cidade: \n");
   scanf("%s",cidade);

   printf("total de habitantes: \n");
   scanf("%d",&populacao);

   printf("area: \n");
   scanf("%f" ,&area);

   printf("pib : \n");
   scanf("%f" ,&pib);

   printf("quantidades de pontos turisticos: \n");
   scanf("%d", &pontoturistico);
   
   // saida formatada
   printf("\n==== CARTA 1 ====\n");
   printf("Estado : %s \n" , estado);
   printf("Codigo da carta : %s \n ",codigo);
   printf("cidade: %s \n" , cidade);
   printf("habitantes: %d\n" , populacao);
   printf("area : %.2f km²\n", area);
   printf("pib?: %.2f bilhoes\n", pib);
   printf(" Pontos Turisticos: %d \n", pontoturistico);

  // variaveis carta 2: 
   char estado2 [15];
   char codigo2 [5];
   char cidade2 [20];
   int populacao2; 
   int pontoturistico2;
   float area2;
   float pib2;

  printf("\n==== cadastro da CARTA 2 ====\n");
  printf("digite seu estado: \n");
   scanf("%s", estado2);

   printf("codigo: \n");
   scanf("%s", codigo2);

   printf("nome da cidade: \n");
   scanf("%s",cidade2);

   printf("total de habitantes: \n");
   scanf("%d",&populacao2);

   printf("area: \n");
   scanf("%f" ,&area2);

   printf("pib : \n");
   scanf("%f" ,&pib2);

   printf("quantidades de pontos turisticos: \n");
   scanf("%d", &pontoturistico2);
   
  // saida formatada
   printf("\n==== CARTA 2 ====\n");
   printf("Estado : %s \n" , estado2);
   printf("Codigo da carta : %s \n ",codigo2);
   printf("cidade: %s \n" , cidade2);
   printf("habitantes: %d\n" , populacao2);
   printf("area : %.2f km²\n", area2);
   printf("pib?: %.2f bilhoes\n", pib2);
   printf(" Pontos Turisticos: %d \n", pontoturistico2);


   





   
   
   return 0;
} 
