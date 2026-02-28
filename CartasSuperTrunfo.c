#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
   //variáveis//
    char estado1, estado2;
    char codigo1[10], codigo2[10] ;
    char cidade1[30], cidade2[30];
    int população1, população2 ;
    float area1, area2 ;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
  //Área para entrada de dados//
    printf("Cadastre suas cartas \n");
    //cadastro da carta 1//
    printf("Carta 1 \n");

    printf("digite o estado (A até H): \n"); scanf("%c", &estado1);
    
    printf("Digite o coidgo da carta (ex: A01,B02): \n"); scanf("%s", codigo1);

    printf("digite o nome da cidade: \n"); scanf("%s", cidade1); 

    printf("Digite a quantiade de habitantes: \n"); scanf("%d", &população1);

    printf("Digite a area: \n"); scanf("%f", &area1);

    printf("Digite o pib: \n"); scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turisticos: \n"); scanf("%d", &pontos_turisticos1);

  //cadstro da carta 2//

     printf("Carta 2 \n");

    printf("digite o estado (A até H): \n"); scanf("%c", &estado2);
    
    printf("Digite o coidgo da carta (ex: A01,B02): \n"); scanf("%s", codigo2);

    printf("digite o nome da cidade: \n"); scanf("%s", cidade2); 

    printf("Digite a quantiade de habitantes: \n"); scanf("%d", &população2);

    printf("Digite a area: \n"); scanf("%f", &area2);

    printf("Digite o pib: \n"); scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turisticos: \n"); scanf("%d", &pontos_turisticos2);

  // Exibição das cartas//
  printf("Carta 1 \n");
  printf("Estado: %c \n", estado1);
  printf("Codigo da carta: %s\n", codigo1);
  printf("Cidade: %s \n", cidade1);
  printf("população: %d \n", população1);
  printf("Area: %.3f km²\n", area1);
  printf("PIB: %.3f \n", pib1);
  printf("Pontos turisticos: %d \n", pontos_turisticos1);
 
  printf("Carta 2 \n");
  printf("Estado: %c \n", estado2);
  printf("Codigo da carta: %s\n", codigo2);
  printf("Cidade: %s \n", cidade2);
  printf("população: %d \n", população2);
  printf("Area: %.3f km²\n", area2);
  printf("PIB: %.3f \n", pib2);
  printf("Pontos turisticos: %d \n", pontos_turisticos2);
 

  
return 0;
} 
