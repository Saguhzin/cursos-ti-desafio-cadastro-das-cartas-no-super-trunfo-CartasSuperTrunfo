#include <stdio.h>
#include <stdlib.h>


int main(){
  
// ==================================================================================
  //  JOGO SUPER TRUNFU DE CIDADES
  // ==================================================================================

    // ==================================================================================
    // Variaveis Carta1 :
    // ==================================================================================
                   //obs : codigoCarta[4] Pq temos \0 no fim da linha.
      char estado = 'S', codigoCarta[4] = "S01", nomeCidade[30] = "Sao Paulo";
      
      unsigned long int populacao = 12300000;
      int pontosTuristicos = 15;
      
      float areaKm = 1521.11, pib = 699.28, densidadePopulacional, pibPercapta, superPoder;
    
    // ==================================================================================
    // Variaveis Carta2 :
    // ==================================================================================

      char estado2 = 'R', codigoCarta2[4] = "R04", nomeCidade2[30] = "Rio De Janeiro";

      unsigned long int populacao2 = 6775000;
      int pontosTuristicos2 = 12;
      
      float areaKm2 = 12000.25, pib2 = 407.12, densidadePopulacional2, pibPercapta2, superPoder2;

  // ==================================================================================
  // Solicitando dados da PRIMEIRA carta :
  // ==================================================================================  


    printf("\n\n1 - Dados da primeira Carta : \n");

    printf("\nDigite a Letra do Estado :\n");
    //scanf(" %c", &estado);

    // Observaçao como string = array de char nao é necessario &; string = string[0];

    printf("\nDigite o Código da Carta :\n");
    //scanf("%s", codigoCarta);
    //getchar(); //Limpar buffer que contem enter.
    
    printf("\nDigite o Nome da Cidade :\n");

    //fgets pega uma linha inteira de texto ate ó enter;
    //(Variavel , tamanho do vetor do tipo char, stdin)
    //fgets(nomeCidade, 30, stdin);
    
    ////scanf("%s", nomeCidade);
    
    printf("\nDigite a População  :\n");
    //scanf(" %lu", &populacao);                       
    
    printf("\nDigite a Área(Km²) :\n");
    //scanf(" %f", &areaKm);
    
    printf("\nDigite o PIB:\n");
    //scanf(" %f", &pib);
    
    printf("\nDigite o Número de Pontos Turísticos:\n");
    //scanf("%d", &pontosTuristicos);
    
  // ==================================================================================
  // Solicitando dados da SEGUNDA carta :
  // ==================================================================================
  
    printf("\n\n2 - Dados da Segunda Carta : \n\n");

    printf("\nDigite a Letra do Estado :\n");
    //scanf(" %c", &estado2);
   
    printf("\nDigite o Código da Carta :\n");
    //scanf("%s", codigoCarta2);
    //getchar();
    
    printf("\nDigite o Nome da Cidade :\n");
    
    //fgets(nomeCidade2, 30, stdin);
    
    
    ////scanf("%s", nomeCidade2);
    
    printf("\nDigite a População  :\n");
    //scanf(" %lu", &populacao2);                       
    
    printf("\nDigite a Área(Km²) :\n");
    //scanf(" %f", &areaKm2);
    
    printf("\nDigite o PIB:\n");
    //scanf(" %f", &pib2);
    
    printf("\nDigite o Número de Pontos Turísticos:\n");
    //scanf("%d", &pontosTuristicos2);
  
  
  // =========================
  // Calculos :
  // =========================
    
    densidadePopulacional = (float)populacao/areaKm;
    densidadePopulacional2 = (float)populacao2/areaKm2;

    pibPercapta = (float)(pib * 1000000000) / populacao;
    pibPercapta2 = (float)(pib2 * 1000000000) / populacao2;
    // Quem tem menos = +;
    float inverso = 1 / densidadePopulacional;
    float inverso2 = 1 / densidadePopulacional2;

    superPoder = (float)populacao + areaKm + pib + pontosTuristicos + pibPercapta + inverso;
    superPoder2 = (float)populacao2 + areaKm2 + pib2 + pontosTuristicos2 + pibPercapta2 + inverso2;

  // =========================
  // Exibicao das Cartas :
  // =========================
 
    // =========================
    // Primeira Carta : 
    // =========================
  
      printf("\n1 - Carta : \n\n");
      

      printf("Estado : %c \n", estado);

      printf("Código Da Carta: %s \n" , codigoCarta);
      
      printf("Nome Da Cidade : %s", nomeCidade);
      //obs n contem "/n" pois fgets() guarda "/n" ou seja o enter.
      
      printf("\nPopulação : %lu \n", populacao);
      
      printf("Área(Km²) :  %.2f \n", areaKm);
      
      printf("PIB :  %.2f  \n", pib);
      
      printf("Número de Pontos Turísticos: %d \n", pontosTuristicos);
      
      printf("Densidade Populacional: %.2f  hab/km²\n", densidadePopulacional);
      
      printf("Pib Percapta :  %.2f  \n", pibPercapta);

      printf("Super Poder :  %.2f  \n", superPoder);
    
    // =========================
    // Segunda Carta : 
    // =========================

      printf("\n\n2 - Carta : \n\n");
      
      printf("Estado : %c \n", estado2);

      printf("Código Da Carta : %s \n" , codigoCarta2);
      
      printf("Nome Da Cidade : %s", nomeCidade2); 
      
      printf("\nPopulação : %lu \n", populacao2);
      
      printf("Área(Km²) :  %.2f \n", areaKm2);
      
      printf("PIB :  %.2f  \n", pib2);
      
      printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);

      printf("Densidade Populacional:  %.2f  hab/km²\n", densidadePopulacional2);
      
      printf("Pib Percapta :  %.2f  \n", pibPercapta2);
      
      printf("Super Poder :  %.2f  \n", superPoder2);

    // =========================
    // Resultado da Batalha : 
    // =========================

      printf("\n\n\nRESULTADO :  ");
     

      //Populacao : /////////////////////////////
      
      printf("\n\n Comparação de cartas (Atributo: População): ");

      printf("\n\n    Carta 1 (%s) : %lu ", codigoCarta, populacao);

      printf("\n    Carta 2 (%s) : %lu ", codigoCarta2, populacao2);
      
      if (populacao > populacao2) 
      printf("\n\n  Resultado :   Carta 1 Ganhou !! \n\n");
      else 
      printf("\n\n  Resultado :   Carta 2 Ganhou !! \n\n");
      

      //Area : ///////////////////////////////////////////

      printf("\n\n Comparação de cartas (Atributo: Área(Km²)): ");

      printf("\n\n    Carta 1 (%s) : %.2f ", codigoCarta, areaKm);

      printf("\n    Carta 2 (%s) : %.2f ", codigoCarta2, areaKm2);
      
      if (areaKm > areaKm2) 
      printf("\n\n  Resultado :   Carta 1 Ganhou !! \n\n");
      else 
      printf("\n\n  Resultado :   Carta 2 Ganhou !! \n\n");

      //PIB/////////////////////////////////////////////////////
      
      printf("\n\n Comparação de cartas (Atributo:Pib) : ");

      printf("\n\n    Carta 1 (%s) : %.2f ", codigoCarta, pib);

      printf("\n    Carta 2 (%s) : %.2f ", codigoCarta2, pib2);
      
      if (pib > pib2) 
      printf("\n\n  Resultado :   Carta 1 Ganhou !! \n\n");
      else 
      printf("\n\n  Resultado :   Carta 2 Ganhou !! \n\n");
      
      
     /////////Pontos Turisticos/////////////////////////////////////////////////////
      
      printf("\n\n Comparação de cartas (Atributo:Pontos Turisticos) :  ");

      printf("\n\n  Carta 1 (%s) : %.2d ", codigoCarta, pontosTuristicos);

      printf("\n  Carta 2 (%s) : %.2d ", codigoCarta2, pontosTuristicos2);
      
      if (pontosTuristicos > pontosTuristicos2) 
      printf("\n\n  Resultado :   Carta 1 Ganhou !! \n\n");
      else 
      printf("\n\n  Resultado :   Carta 2 Ganhou !! \n\n");
      
      
    /////////////densidade Populacional/////////////////////////////////////////////////////
      
      printf("\n\n Comparação de cartas (Atributo:densidade Populacional) :  ");

      printf("\n\n    Carta 1 (%s) : %.2f ", codigoCarta, densidadePopulacional);

      printf("\n    Carta 2 (%s) : %.2f ", codigoCarta2, densidadePopulacional2);
      
      if (densidadePopulacional < densidadePopulacional2) 
      printf("\n\n  Resultado :   Carta 1 Ganhou !! \n\n");
      else 
      printf("\n\n  Resultado :   Carta 2 Ganhou !! \n\n");
      
    /////////////Pib Percapta/////////////////////////////////////////////////////
      
      printf("\n\n Comparação de cartas (Atributo:pib Percapta) :  ");

      printf("\n\n    Carta 1 (%s) : %.2f ", codigoCarta, pibPercapta);

      printf("\n    Carta 2 (%s) : %.2f ", codigoCarta2, pibPercapta2);
      
      if (pibPercapta > pibPercapta2) 
      printf("\n\n  Resultado :   Carta 1 Ganhou !! \n\n");
      else 
      printf("\n\n  Resultado :   Carta 2 Ganhou !! \n\n");
      
    /////////////Super Poder/////////////////////////////////////////////////////
      
      printf("\n\n Comparação de cartas (Atributo:Super Poder :  ");

      printf("\n\n  Carta 1 (%s) : %.2f ", codigoCarta, superPoder);

      printf("\n  Carta 2 (%s) : %.2f ", codigoCarta2, superPoder2);
      
      if (superPoder > superPoder2) 
        printf("\n\n  Resultado :   Carta 1 Ganhou !! \n\n");
        else 
        printf("\n\n  Resultado :   Carta 2 Ganhou !! \n\n");
      
      printf("\n\n  Resultado Final :  ");

      if (superPoder > superPoder2)  
        printf("\n\n  !!! Carta 1 Ganhou !!! \n\n");
       else 
        printf("\n\n  !!! Carta 2 Ganhou !!! \n\n");

  return 0;
}