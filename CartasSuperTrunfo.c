#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
   //variáveis//

    int pontos_turisticos1, pontos_turisticos2 ;
    unsigned long int populacao1, populacao2 ;
    int opc ;
    int resultado_atb1, resultado_atb2;

    float area1, area2 ;
    float pib1, pib2 ;
    float d_populacional1, d_populacional2, poder1 ;
    float pibpercapita1, pibpercapita2, poder2 ;

    char estado1[3], estado2[3];
    char codigo1[10], codigo2[10] ;
    char cidade1[30], cidade2[30], pais1[30],pais2[30];
    char opc2, opc3;

  //Área para entrada de dados//
    printf("Cadastre suas cartas \n");

    //cadastro da carta 1//
    printf("***Carta 1*** \n");
    
    printf("Digite o pais: \n"); scanf("%s", pais1);
   
    printf("digite o estado: \n"); scanf("%s", estado1);
    
    printf("Digite o coidgo da carta (ex: A01,B02): \n"); scanf("%s", codigo1);

    printf("digite o nome da cidade: \n"); scanf("%s", cidade1); 

    printf("Digite a quantiade de habitantes: \n"); scanf("%lu", &populacao1);

    printf("Digite a area: \n"); scanf("%f", &area1);

    printf("Digite o pib: \n"); scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turisticos: \n"); scanf("%d", &pontos_turisticos1);

  //cadstro da carta 2//

    printf("***Carta 2*** \n");
    
    printf("Digite o pais: \n"); scanf("%s", pais2);

    printf("digite o estado (A até H): \n"); scanf("%s", estado2);
    
    printf("Digite o coidgo da carta (ex: A01,B02): \n"); scanf("%s", codigo2);

    printf("digite o nome da cidade: \n"); scanf("%s", cidade2); 

    printf("Digite a quantiade de habitantes: \n"); scanf("%lu", &populacao2);

    printf("Digite a area: \n"); scanf("%f", &area2);

    printf("Digite o pib: \n"); scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turisticos: \n"); scanf("%d", &pontos_turisticos2);

    //calculos 
    d_populacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    d_populacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;


    poder1= (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pibpercapita1 + 
    (1.0 / d_populacional1);

    poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pibpercapita2 +
    (1.0 / d_populacional2);


  // Exibição das cartas//
  printf("***Carta 1*** \n");
  printf("Pais: %s \n", pais1);
  printf("Estado: %s \n", estado1);
  printf("Codigo da carta: %s\n", codigo1);
  printf("Cidade: %s \n", cidade1);
  printf("população: %lu \n", populacao1);
  printf("Area: %.3f km²\n", area1);
  printf("PIB: %.3f \n", pib1);
  printf("Pontos turisticos: %d \n", pontos_turisticos1);
  printf("Densidade Populacional: %f hab/km²\n", d_populacional1 );
  printf("PIB per Capita: %f reais \n", pibpercapita1);
  printf("Super poder: %f \n", poder1);

  printf("***Carta 2*** \n");
  printf("Pais: %s \n", pais2);
  printf("Estado: %s \n", estado2);
  printf("Codigo da carta: %s\n", codigo2);
  printf("Cidade: %s \n", cidade2);
  printf("população: %lu \n", populacao2);
  printf("Area: %.3f km²\n", area2);
  printf("PIB: %.3f \n", pib2);
  printf("Pontos turisticos: %d \n", pontos_turisticos2);
  printf("Densidade Populacional: %f hab/km²\n", d_populacional2);
  printf("PIB per Capita: %f reais \n", pibpercapita2);
  printf("Super poder: %f \n", poder2);


    //comparação das cartas 
  printf("***comparando as cartas*** \n");
  printf("População - Carta 1 venceu:  %d \n", populacao1 > populacao2);
  printf("Area - Carta 1 venceu:  %d \n", area1 > area2);
  printf("PIB - Carta 1 venceu: %d \n", pib1 > pib2); 
  printf("Pontos Turísticos - Carta 1 venceu: %d \n", pontos_turisticos1 > pontos_turisticos2);
  printf("Densidade Populacional - Carta 1 venceu: %d \n", d_populacional1 < d_populacional2);
  printf("PIB per Capita - Carta 1 venceu: %d \n", pibpercapita1 > pibpercapita2);
  printf("Super Poder - Carta 1 vendeu: %d \n\n", poder1 > poder2);

 //                                           TEMA 3

    printf("***Batalha de super poderes*** \n");
 //exibição do poder das cartas
 printf("Carta 1 %s %s: %f \n", cidade1, estado1, poder1);
 printf("Carta 2 %s %s: %f \n", cidade2, estado2, poder2);
 
 //comparação de poder das cartas

 if(poder1 > poder2){
 printf("A carta 1 venceu \n");
 }  else if (poder1<poder2){
  printf("A carta 2 venceu \n");
 }    else {
  printf("Deu empate \n\n");
 }             
    //menu
    printf("selecione oque quer comparar: \n");
    printf("1. população \n");
    printf("2. Area \n");
    printf("3. PIB \n");
    printf("4. Pontos turisticos \n");
    printf("5. Densidade demogarfica \n");
    scanf(" %d", &opc);

      switch (opc) {
case 1 :
    printf("você escolheu população \n");
    printf("país 1: %s \n", pais1);
    printf("país 2: %s \n", pais2);
    printf("população 1: %lu \n", populacao1);
    printf("população 2: %lu \n", populacao2);
  if (populacao1 > populacao2) {
    printf("carta 1 venceu \n");
  } else if (populacao1 < populacao2)
  {
    printf("a carta 2 venceu \n");
  } else {
    printf("empatou \n");
  } 
 break;  
case 2 :
    printf("você escolheu Area \n");
    printf("país 1: %s \n", pais1);
    printf("país 2: %s \n", pais2);
    printf("Area 1: %f \n", area1);
    printf("Area 2: %f \n", area2);
  if (area1 > area2) {
    printf("carta 1 venceu \n");
  } else if (area1 < area2)
  {
    printf("a carta 2 venceu \n");
  } else {
    printf("empatou");
  } 
 break; 

 case 3 :
    printf("você escolheu PIB \n");
    printf("país 1: %s \n", pais1);
    printf("país 2: %s \n", pais2);
    printf("PIB 1: %f \n", pib1);
    printf("PIB 2: %f \n", pib2);
  if (pib1 > pib2) {
    printf("carta 1 venceu \n");
  } else if (pib1 < pib2)
  {
    printf("a carta 2 venceu \n");
  } else {
    printf("empatou \n");
  } 
 break;

case 4 :
    printf("você escolheu pontos turisticos \n");
    printf("país 1: %s \n", pais1);
    printf("país 2: %s \n", pais2);
    printf("Pontos turisticos 1: %d \n", pontos_turisticos1);
    printf("Pontos turisticos 2: %d \n", pontos_turisticos2);
  if (pontos_turisticos1 > pontos_turisticos2) {
    printf("carta 1 venceu \n");
  } else if (pontos_turisticos1 < pontos_turisticos2)
  {
    printf("a carta 2 venceu \n");
  } else {
    printf("empatou");
  } 
 break; 
 
 case 5 :
    printf("você escolheu Densidade demografica \n");
    printf("país 1: %s \n", pais1);
    printf("país 2: %s \n", pais2);
    printf("D. populacional 1: %f \n", d_populacional1);
    printf("D. populacional 2: %f \n", d_populacional2);

  if (d_populacional1 < d_populacional2) {
    printf("carta 1 venceu \n");
  }else if (d_populacional1 > d_populacional2)
  {
    printf("a carta 2 venceu \n");
  }else {
    printf("empatou \n");
  } 
 break; 
 default: 
    printf("N/A\n\n");

}

printf("*** Escolha dois atributos para comparar ***\n");
printf("S. Super poder \n");
printf("D. Densidade demografica \n");
scanf(" %c", &opc2);

switch(opc2) {

case 'S':
case 's':
  printf("você escolheu Super poder\n");
  resultado_atb1 = poder1 > poder2 ? 1 : 0 ;
  printf(" super poder 1 : %f, super poder 2 : %f \n", poder1,poder2);
  break;

case 'D':
case 'd':
printf("Você escolheu Densidade demografica \n");
resultado_atb1 = d_populacional1 < d_populacional2 ? 1:0 ;
printf(" Densidade demografica 1 : %f, Densidade demografica 2 : %f \n", d_populacional1,d_populacional2);
break;

default:
  printf("N/A \n");
}

printf("Selecione o segundo atributo \n");
scanf(" %c", &opc3);

if(opc2 == opc3) {
  printf("Selecione um atributo diferente \n");
} else {

switch (opc3)
{
case 'S':
case 's':
  printf("você escolheu Super poder\n");
  resultado_atb2 = poder1 > poder2 ? 1 : 0 ;
  printf(" super poder 1 : %f, super poder 2 : %f \n", poder1,poder2);
  break;

case 'D':
case 'd':
printf("Você escolheu Densidade demografica \n");
resultado_atb2 = d_populacional1 < d_populacional2 ? 1:0 ;
printf(" Densidade demografica 1 : %f, Densidade demografica 2 : %f \n", d_populacional1,d_populacional2);
break;
default:
printf("N/A \n");
}

if (resultado_atb1 && resultado_atb2)
{
 printf("A carta 1 venceu \n");
} else if(resultado_atb1 != resultado_atb2)
{
  printf("empatou \n");
}else 
{
  printf("A carta 2 venceu \n");
}








}




return 0;
} 
