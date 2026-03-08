#include <stdio.h>

int main()
{   
  // ==================================================================================
  //  JOGO SUPER TRUNFU DE CIDADES
  // ==================================================================================

    // ==================================================================================
    // Variaveis Carta1 :
    // ==================================================================================
                   //obs : codigoCarta[4] Pq temos \0 no fim da linha.
      char estado, codigoCarta[4], nomeCidade[30];
      
      int populacao,pontosTuristicos;
      
      float areaKm, pib;
    
    // ==================================================================================
    // Variaveis Carta2 :
    // ==================================================================================

      char estado2, codigoCarta2[4], nomeCidade2[30];
      
      int populacao2,pontosTuristicos2;
      
      float areaKm2, pib2;

  // ==================================================================================
  // Solicitando dados da PRIMEIRA carta :
  // ==================================================================================  


    printf("\n\n1 - Dados da primeira Carta : \n");

    printf("\nDigite a Letra do Estado :\n");
    scanf(" %c", &estado);

    // Observaçao como string = array de char nao é necessario &; string = string[0];

    printf("\nDigite o Código da Carta :\n");
    scanf("%s", codigoCarta);
    
    printf("\nDigite o Nome da Cidade :\n");
    scanf("%s", nomeCidade);
    
    printf("\nDigite a População  :\n");
    scanf(" %d", &populacao);                       
    
    printf("\nDigite a Área(Km²) :\n");
    scanf(" %f", &areaKm);
    
    printf("\nDigite o PIB:\n");
    scanf(" %f", &pib);
    
    printf("\nDigite o Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos);
    
  // ==================================================================================
  // Solicitando dados da SEGUNDA carta :
  // ==================================================================================
  
    printf("\n\n2 - Dados da Segunda Carta : \n\n");

    printf("\nDigite a Letra do Estado :\n");
    scanf(" %c", &estado2);
   
    printf("\nDigite o Código da Carta :\n");
    scanf("%s", codigoCarta2);
    
    printf("\nDigite o Nome da Cidade :\n");
    scanf("%s", nomeCidade2);
    
    printf("\nDigite a População  :\n");
    scanf(" %d", &populacao2);                       
    
    printf("\nDigite a Área(Km²) :\n");
    scanf(" %f", &areaKm2);
    
    printf("\nDigite o PIB:\n");
    scanf(" %f", &pib2);
    
    printf("\nDigite o Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos2);
  

  // =========================
  // Exibicao das Cartas :
  // =========================
 
    // =========================
    // Primeira Carta : 
    // =========================
  
      printf("\n1 - Carta : \n\n");
      

      printf("Estado : %c \n", estado);

      printf("Código Da Carta: %s \n" , codigoCarta);
      
      printf("Nome Da Cidade : %s \n", nomeCidade);
      
      printf("População : %d \n", populacao);
      
      printf("Área(Km²) : %f \n", areaKm);
      
      printf("PIB : %f  \n", pib);
      
      printf("Número de Pontos Turísticos: %d \n ", pontosTuristicos);

    // =========================
    // Segunda Carta : 
    // =========================

      printf("\n\n2 - Carta : \n\n");
      
      printf("Estado : %c \n", estado2);

      printf("Código Da Carta : %s \n" , codigoCarta2);
      
      printf("Nome Da Cidade : %s \n", nomeCidade2);
      
      printf("População : %d \n", populacao2);
      
      printf("Área(Km²) : %f \n", areaKm2);
      
      printf("PIB : %f  \n", pib2);
      
      printf("Número de Pontos Turísticos: %d \n ", pontosTuristicos2);
      
 
  return 0;  
}
