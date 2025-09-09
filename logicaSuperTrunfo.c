#include <stdio.h>

int main(){

    // Variáveis da carta 1.

    char Estado[70], Nome_Cidade[70];
    int Populacao;
    float pib, Pib_per_capita;
    
    // Variáveis da carta 2.

    char Estado2[70], Nome_Cidade2[70];
    int Populacao2;
    float pib2, Pib_per_capita2;

    // Primeiramente o programa irá mostrar sua principal função de uso: Comparar o "PIB per Capita" entre duas cidades.

    printf("*Comparador de PIB per Capita*\n");
    
    // O usuário irá digitar os dados da primeira carta.
    
    printf("Por favor, digite os dados da carta 1 a seguir:\n"); // Notifica ao usuário que os dados que ele irá digitar são da carta 1.
    printf("\nDigite o estado: \n"); // Usuário digita o nome do estado.
    scanf("%s", &Estado);

    printf("Digite o nome da cidade: \n"); // Usuário digita o nome do cidade.
    scanf("%s", &Nome_Cidade);

    printf("Digite a população: \n"); // Usuário digita a quantidade de pessoas que vivem na cidade.
    scanf("%d", &Populacao);


    printf("Digite o PIB (em reais) da cidade: \n"); // Usuário digita o PIB da cidade.
    scanf("%f", &pib);

    // Abaixo está o cálculo do PIB per Capita utilizando duas variáveis ("pib" e "Populacao") da carta 1.
    
    Pib_per_capita = (float) pib/Populacao;


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

    // Abaixo está o cálculo do PIB per Capita utilizando duas variáveis ("pib2" e "Populacao2") da carta 2.
   
    Pib_per_capita2 = (float) pib2/Populacao2;

    // Abaixo o usuário verá o "PIB per Capita" de cada carta e logo após, o resultado do vencedor.
        printf("\n ---- Comparação do PIB per Capita entre duas cidades ----\n");
        printf("\n%s (%s) - PIB per Capita: R$ %.2f\n", Nome_Cidade, Estado, Pib_per_capita);
        printf("%s (%s) - PIB per Capita: R$ %.2f\n", Nome_Cidade2, Estado2, Pib_per_capita2);
        
    // A lógica a ser utilizada para determinar qual cidade (carta) será o vencedor da comparação.
    
    if (Pib_per_capita > Pib_per_capita2)
    {
        printf("\n* Vencedor: %s (%s) com um PIB per Capita de R$ %.2f\n", Nome_Cidade, Estado, Pib_per_capita);
    }
        else{
        printf("\n* Vencedor: %s (%s) com um PIB per Capita de R$ %.2f\n", Nome_Cidade2, Estado2, Pib_per_capita2);
        }

    
    return 0;
}