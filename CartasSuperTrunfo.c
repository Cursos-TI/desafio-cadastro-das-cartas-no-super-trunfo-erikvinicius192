#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

//declaraçao de variaveis 
      char estado;
      char codigo[50];
      char cidade[50];
      int populaçao;
      int pontos;
      float area;
      float pib;

      char estado2;
      char codigo2[50];
      char cidade2[50];
      int populaçao2;
      int pontos2;
      float area2;
      float pib2;



// atribuiçao as variaveis 
// nao esquecer do & antes das variaveis 

      printf("estado: ");
      scanf(" %c", &estado);

      printf("codigo da carta: ");
      scanf("%s", codigo);

      printf("nome da cidade: ");
      scanf("%s", cidade);

      printf("população: ");
      scanf("%d", &populaçao);

      printf("area em km²: ");
      scanf("%f" , &area);

      printf("numero de pontos turisticos: ");
      scanf("%d", &pontos);

      printf("PIB: ");
      scanf("%f", &pib);

// usar printf para aparecer as informaçoes das cartas 

      printf("Carta 1: \n");
      printf("Estado: %c\n", estado);
      printf("Codigo: %s\n",codigo );
      printf("Nome da cidade: %s\n", cidade);
      printf("População: %d\n", populaçao);
      printf("Área: %.2f km²\n", area);
      printf("PIB: %.2f bilhões de reais\n", area);
      printf("Numero de pontos turisticos: %d\n", pontos);



      printf("estado: ");
      scanf(" %c", &estado2);

      printf("codigo da carta: ");
      scanf("%s", codigo2);

      printf("nome da cidade: ");
      scanf("%s", cidade2);

      printf("população: ");
      scanf("%d", &populaçao2);

      printf("area em km²: ");
      scanf("%f", &area2);

      printf("numero de pontos turisticos: ");
      scanf("%d", &pontos2);

      printf("PIB: ");
      scanf("%f", &pib2);

      printf("Carta 2: \n");
      printf("Estado: %c\n", estado2);
      printf("Codigo: %s\n",codigo2);
      printf("Nome da cidade: %s\n", cidade2);
      printf("População: %d\n", populaçao2);
      printf("Área: %.2f km²\n", area2);
      printf("PIB: %.2f bilhões de reais\n", area2);
      printf("Numero de pontos turisticos: %d\n", pontos2);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
