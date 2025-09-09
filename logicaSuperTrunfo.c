#include <stdio.h>

int main(){

    // Variáveis da carta 1.

    char Pais[70];
    int Populacao, Pontos_turisticos;
    float pib, Pib_per_capita, area, Densidade_demografica;
    
    // Variáveis da carta 2.

    char Pais2;
    int Populacao2, Pontos_turisticos2;
    float pib2, Pib_per_capita2, area2, Densidade_demografica2;

    
    // O usuário irá digitar os dados da primeira carta.
    
    printf("Por favor, digite os dados da carta 1 a seguir:\n"); // Notifica ao usuário que os dados que ele irá digitar são da carta 1.
    printf("\nDigite o estado: \n"); // Usuário digita o nome do país.
    scanf("%s", &Pais);

    printf("Digite a população: \n"); // Usuário digita a quantidade de pessoas que vivem no país.
    scanf("%d", &Populacao);

    printf("Digite o número de pontos turísticos: \n"); // Usuário digita a quantidade de pontos turísticos que há no país.
    scanf("%d", &Pontos_turisticos);

    printf("Digite a area (km²): \n"); // Usuário digita o tamanho do país.
    scanf("%d", &area);


    printf("Digite o PIB (em reais) da cidade: \n"); // Usuário digita o PIB do país.
    scanf("%f", &pib);

    // Abaixo está o cálculo do "PIB per Capita" e da "Densidade Demográfica" da carta 1.
    
    Pib_per_capita = (float) pib/Populacao;
    Densidade_demografica = (float) Populacao/area;


    // O usuário irá digitar os dados da segunda carta.
    
    printf("\nPor favor, digite os dados da carta 2 a seguir:\n"); // Notifica ao usuário que os dados que ele irá digitar são da carta 2.
    printf("\nDigite o estado: \n");
    scanf("%s", &Estado2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Nome_Cidade2);

    printf("Digite a população: \n");
    scanf("%d", &Populacao2);

    printf("Digite o PIB (em reais) da cidade: \n");
    scanf("%f", &pib2);

    // Abaixo está o cálculo do "PIB per Capita" e da "Densidade Demográfica" da carta 2.
   
    Pib_per_capita2 = (float) pib2/Populacao2;
    Densidade_demografica2 = (float) Populacao2/area2;


    
    return 0;
}