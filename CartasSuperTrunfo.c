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
      
      float areaKm, pib, densidadePopulacional, pibPercapta;
    
    // ==================================================================================
    // Variaveis Carta2 :
    // ==================================================================================

      char estado2, codigoCarta2[4], nomeCidade2[30];
      
      int populacao2,pontosTuristicos2;
      
      float areaKm2, pib2, densidadePopulacional2, pibPercapta2;

  // ==================================================================================
  // Solicitando dados da PRIMEIRA carta :
  // ==================================================================================  


      printf("\n\n1 - Dados da primeira Carta : \n");

      printf("\nDigite a Letra do Estado :\n");
      scanf(" %c", &estado);

      // Observaçao como string = array de char nao é necessario &; string = string[0];

      printf("\nDigite o Código da Carta :\n");
      scanf("%s", codigoCarta);
      getchar(); //Limpar buffer que contem enter.
      
      printf("\nDigite o Nome da Cidade :\n");

      //fgets pega uma linha inteira de texto ate ó enter;
      //(Variavel , tamanho do vetor do tipo char, stdin)
      fgets(nomeCidade, 30, stdin);
      
      //scanf("%s", nomeCidade);
      
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
      getchar();
      
      printf("\nDigite o Nome da Cidade :\n");
      
      fgets(nomeCidade2, 30, stdin);
      
      
      //scanf("%s", nomeCidade2);
      
      printf("\nDigite a População  :\n");
      scanf(" %d", &populacao2);                       
      
      printf("\nDigite a Área(Km²) :\n");
      scanf(" %f", &areaKm2);
      
      printf("\nDigite o PIB:\n");
      scanf(" %f", &pib2);
      
      printf("\nDigite o Número de Pontos Turísticos:\n");
      scanf("%d", &pontosTuristicos2);
    
  
  // ==================================================
  // Calculos :
  // ==================================================
    
      densidadePopulacional = (float)populacao/areaKm;
      densidadePopulacional2 = (float)populacao2/areaKm2;

      pibPercapta = (float)pib/populacao;
      pibPercapta2 = (float)pib2/populacao2;

  // ==================================================
  // Exibicao das Cartas :
  // ==================================================
 
    // ===================
    // Primeira Carta : 
    // ===================
  
      printf("\n1 - Carta : \n\n");
      

      printf("Estado : %c \n", estado);

      printf("Código Da Carta: %s \n" , codigoCarta);
      
      printf("Nome Da Cidade : %s ", nomeCidade);//obs n contem "/n" pois fgets() guarda "/n" ou seja o enter.
      
      printf("População : %d \n", populacao);
      
      printf("Área(Km²) :  %.2f \n", areaKm);
      
      printf("PIB :  %.2f  \n", pib);
      
      printf("Número de Pontos Turísticos: %d \n ", pontosTuristicos);
      
      printf("Densidade Populacional: %.2f  hab/km²\n ", densidadePopulacional);
      
      printf("Pib Percapta :  %.2f  \n", pibPercapta);
    
    // =========================
    // Segunda Carta : 
    // =========================

      printf("\n\n2 - Carta : \n\n");
      
      printf("Estado : %c \n", estado2);

      printf("Código Da Carta : %s \n" , codigoCarta2);
      
      printf("Nome Da Cidade : %s ", nomeCidade2); 
      
      printf("População : %d \n", populacao2);
      
      printf("Área(Km²) :  %.2f \n", areaKm2);
      
      printf("PIB :  %.2f  \n", pib2);
      
      printf("Número de Pontos Turísticos: %d \n ", pontosTuristicos2);

      printf("Densidade Populacional:  %.2f  hab/km²\n ", densidadePopulacional2);
      
      printf("Pib Percapta :  %.2f  \n", pibPercapta2);
      

    // =========================
    //Fim Do programa
    // =========================

     return 0;  
}
