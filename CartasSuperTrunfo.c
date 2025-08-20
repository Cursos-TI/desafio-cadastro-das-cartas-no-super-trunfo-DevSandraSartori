#include <stdio.h>
#include <string.h>

int main (){
    printf("\n------- Desafio Nível Aventureiro -------\n");

    //declarando variáveis carta 1
    char estado1; 
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade1;  
    float pibpercapita1; 

    //declarando variáveis carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float pibpercapita2;

    //solicitando dados carta 1
    printf("------- Cadastro da Carta 1 -------\n");

    printf("Digite o Estado (Letra de A - H):\n");
    scanf(" %c", &estado1);
    
    printf("Digite o Código da carta (Ex:. A01):\n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    getchar(); // Limpa o buffer de entrada
    fgets(cidade1, 50, stdin); // ler strings com espacos
    cidade1[strcspn(cidade1, "\n")] = 0; // Para remover a quebra de linha
        
    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área:\n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos1);

    // ---- cálculos carta 1 ----
    densidade1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1; 

    //solicitando dados carta 2
    printf("------- Cadastro da Carta 2 -------\n");
    
    printf("Digite o Estado (Letra de A - H):\n");
    scanf(" %c", &estado2);
    
    printf("Digite o Código da carta (Ex:. B02):\n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    getchar(); // Limpa o buffer de entrada
    fgets(cidade2, 50, stdin); // ler strings com espacos
    cidade2[strcspn(cidade2, "\n")] = 0; // Para remover a quebra de linha

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área:\n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos2);

    // ---- cálculos carta 2 ----
    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;

    //dados a serem impressos carta 1
    printf("\n------- Carta 1 -------\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    //dados a serem impressos carta 2
    printf("\n------- Carta 2 -------\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    return 0;
}