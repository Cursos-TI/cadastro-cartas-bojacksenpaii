#include <stdio.h>
#include <string.h>

int main() { 
    //Carta 1
    char letra[3];
    char codigo[5];
    char cidade[50];
    
    int populacao, turismo;
    float area, pib;
    
    //Carta 2
    char estado[3];
    char carta[5];
    char nome[50];
    
    int pessoas, pontos;
    float tamanho, valor;

    //Codificando carta 1
    printf("Informe os dados para a primeira carta:\n");
    printf("Insira uma letra de 'A' a 'H' para representar o Estado da sua carta: \n");
    fgets(letra, 3, stdin);
    letra[strcspn(letra, "\n")] = '\0';

    printf("Insira um numero entre 01 a 04 para codificar a sua carta: \n");
    fgets(codigo, 5, stdin);
    codigo[strcspn(codigo, "\n")] = '\0';

    printf("Insira o nome da cidade: \n");
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Insira o tamanho populacional da cidade: \n");
    scanf("%d", &populacao);

    printf("Insira o tamanho em Km² da cidade: \n");
    scanf("%f", &area);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib);
    
    printf("Insira o numero de pontos turisticos existentes na cidade: \n");
    scanf("%d", &turismo);


    //Codificando carta 2
    printf("\nInforme os dados para a segunda carta:\n");

    getchar();

    printf("Insira uma letra de 'A' a 'H' para representar o Estado da sua carta: \n");
    fgets(estado, 3, stdin);
    estado[strcspn(estado, "\n")] = '\0';

    printf("Insira um numero entre 01 a 04 para codificar a sua carta: \n");
    fgets(carta, 5, stdin);
    carta[strcspn(carta, "\n")] = '\0';

    printf("Insira o nome da cidade: \n");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Insira o tamanho populacional da cidade: \n");
    scanf("%d", &pessoas);

    printf("Insira o tamanho em Km² da cidade: \n");
    scanf("%f", &tamanho);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &valor);
    
    printf("Insira o numero de pontos turisticos existentes na cidade: \n");
    scanf("%d", &pontos);

    //Exibição da carta 1

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", letra);
    printf("Codigo: %s%s\n", letra, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area (em Km²): %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", turismo);

    //Exibição da carta 2

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s%s\n", estado, carta);
    printf("Nome da Cidade: %s\n", nome);
    printf("Populacao: %d\n", pessoas);
    printf("Area (em Km²): %.2f\n", tamanho);
    printf("PIB: %.2f\n", valor);
    printf("Pontos Turisticos: %d\n", pontos);

    return 0;

}