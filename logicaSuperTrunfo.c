#include <stdio.h>

int main(){

    // Variáveis da carta 1.

    char Pais[50];
    int Populacao, Pontos_turisticos;
    float pib, area, Densidade_demografica;
    
    // Variáveis da carta 2.

    char Pais2[50];
    int Populacao2, Pontos_turisticos2;
    float pib2, area2, Densidade_demografica2;

    
    // O usuário irá digitar os dados da primeira carta.
    
    printf("Por favor, digite os dados da carta 1 a seguir:\n"); // Notifica ao usuário que os dados que ele irá digitar são da carta 1.
    printf("\nDigite o país: \n"); // Usuário digita o nome do país.
    scanf("%s", &Pais);

    printf("Digite a população: \n"); // Usuário digita a quantidade de pessoas que vivem no país.
    scanf("%d", &Populacao);

    printf("Digite o número de pontos turísticos: \n"); // Usuário digita a quantidade de pontos turísticos que há no país.
    scanf("%d", &Pontos_turisticos);

    printf("Digite a area (km²): \n"); // Usuário digita o tamanho do país.
    scanf("%f", &area);

    printf("Digite o PIB (em reais) do país: \n"); // Usuário digita o PIB do país.
    scanf("%f", &pib);

    // Abaixo está o cálculo da "Densidade Demográfica" da carta 1.
    
    Densidade_demografica = (float) Populacao/area;


    // O usuário irá digitar os dados da segunda carta.
    
    printf("Por favor, digite os dados da carta 2 a seguir:\n"); // Notifica ao usuário que os dados que ele irá digitar são da carta 2.
    printf("\nDigite o país: \n"); // Usuário digita o nome do país.
    scanf("%s", &Pais2);

    printf("Digite a população: \n"); // Usuário digita a quantidade de pessoas que vivem no país.
    scanf("%d", &Populacao2);

    printf("Digite o número de pontos turísticos: \n"); // Usuário digita a quantidade de pontos turísticos que há no país.
    scanf("%d", &Pontos_turisticos2);

    printf("Digite a area (km²): \n"); // Usuário digita o tamanho do país.
    scanf("%f", &area2);

    printf("Digite o PIB (em reais) do país: \n"); // Usuário digita o PIB do país.
    scanf("%f", &pib2);


    // Abaixo está o cálculo da "Densidade Demográfica" da carta 2.
   
    Densidade_demografica2 = (float) Populacao2/area2;
    
    // Menu interativo

    int opcao;

    printf("\nEscolha qual atributo você deseja comparar:\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Quantidade de pontos turísticos\n");
    printf("5.Densidade demográfica\n");
    printf("\nDigite a opção:");

    scanf("%d", &opcao);

    switch (opcao){
    
    case 1:
        if(Populacao > Populacao2){~
        
            printf("\n%s venceu com %d habitantes\n\n", Pais, Populacao);

        } else if(Populacao < Populacao2){

            printf("\n%s venceu com %d habitantes\n\n", Pais2, Populacao2);

        } else{

            printf("Empate!\n\n");
        }
        break;
    
    case 2:
        if(area > area2)
        {
            printf("\n%s venceu com uma área de %.2f km²\n\n", Pais, area);

        } else if(area < area2){

            printf("\n%s venceu com uma área de %.2f km²\n\n", Pais2, area2);

        }  else{
            printf("Empate!\n\n");
        }
        break;
        
    case 3:
        if(pib > pib2){

            printf("\n%s venceu com um PIB de R$%.2f\n\n", Pais, pib);

        } else if(pib < pib2){

            printf("\n%s venceu com um PIB de R$%.2f\n\n", Pais2, pib2);

        } else{
            printf("Empate!\n\n");
        }
        
        break;

    case 4:
        if (Pontos_turisticos > Pontos_turisticos2)
        {
           printf("\n%s venceu com %d pontos turísticos\n\n", Pais, Pontos_turisticos);

        } else if(Pontos_turisticos < Pontos_turisticos2){

            printf("\n%s venceu com %d pontos turísticos\n\n", Pais2, Pontos_turisticos2);

        } else{
            printf("Empate!\n\n");}
        
        break;
        
    case 5: 
        if(Densidade_demografica < Densidade_demografica2){

            printf("\n%s venceu com %.2f habitantes/km²\n", Pais, Densidade_demografica);
            printf("\nDensidade demográfica (%s): %.2f\n", Pais, Densidade_demografica);
            printf("Densidade demográfica (%s): %.2f\n\n", Pais2, Densidade_demografica2);

        } else if(Densidade_demografica < Densidade_demografica2){

            printf("\n%s venceu com %.2f habitantes/km2\n", Pais2, Densidade_demografica2);
            printf("\nDensidade demográfica (%s): %.2f\n", Pais, Densidade_demografica);
            printf("Densidade demográfica (%s): %.2f\n\n", Pais2, Densidade_demografica2);
        
        } else{
            printf("Empate!\n\n");}
        
        break;

     default:

        printf("\nOpção inválida, tente novamente.\n\n");
        break;
    }
    


    
    return 0;
}