#include <stdio.h>
#include <string.h>

int main() {
    printf("\n------- Desafio Nível Mestre -------\n");

    // ===== VARIÁVEIS CARTA 1 =====
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1; // agora unsigned long int
    float area1;
    float pib1;
    int pontosturisticos1;

    float densidade1;
    float pibpercapita1;
    float superpoder1;

    // ===== VARIÁVEIS CARTA 2 =====
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    float densidade2;
    float pibpercapita2;
    float superpoder2;

    // ===== CADASTRO CARTA 1 =====
    printf("\n------- Cadastro da Carta 1 -------\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da carta (Ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    getchar(); // Limpa o buffer de entrada
    fgets(cidade1, 50, stdin); // ler strings com espacos
    cidade1[strcspn(cidade1, "\n")] = 0; // Para remover a quebra de linha

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // CÁLCULOS CARTA 1
    densidade1 = (float) populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / (float) populacao1;
    superpoder1 = (float) populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1.0 / densidade1);

    // ===== CADASTRO CARTA 2 =====
    printf("\n------- Cadastro da Carta 2 -------\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da carta (Ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    getchar();
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // CÁLCULOS CARTA 2
    densidade2 = (float) populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / (float) populacao2;
    superpoder2 = (float) populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1.0 / densidade2);

    // ===== IMPRESSÃO DAS CARTAS =====
    printf("\n------- Carta 1 -------\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n------- Carta 2 -------\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

   // Cada linha compara o atributo e mostra (1) se Carta 1 venceu, (0) se Carta 2 venceu
    printf("\n------- Comparação de Cartas -------\n");

    printf("População: %s (%d)\n",
       populacao1 > populacao2 ? "Carta 1 venceu" :
       populacao2 > populacao1 ? "Carta 2 venceu" : "Empate",
       populacao1 > populacao2 ? 1 : 0);

    printf("Área: %s (%d)\n",
       area1 > area2 ? "Carta 1 venceu" :
       area2 > area1 ? "Carta 2 venceu" : "Empate",
       area1 > area2 ? 1 : 0);

    printf("PIB: %s (%d)\n",
       pib1 > pib2 ? "Carta 1 venceu" :
       pib2 > pib1 ? "Carta 2 venceu" : "Empate",
       pib1 > pib2 ? 1 : 0);

    printf("Pontos Turísticos: %s (%d)\n",
       pontosturisticos1 > pontosturisticos2 ? "Carta 1 venceu" :
       pontosturisticos2 > pontosturisticos1 ? "Carta 2 venceu" : "Empate",
       pontosturisticos1 > pontosturisticos2 ? 1 : 0);

// menor densidade vence
    printf("Densidade Populacional: %s (%d)\n",
       densidade1 < densidade2 ? "Carta 1 venceu" :
       densidade2 < densidade1 ? "Carta 2 venceu" : "Empate",
       densidade1 < densidade2 ? 1 : 0);

    printf("PIB per Capita: %s (%d)\n",
       pibpercapita1 > pibpercapita2 ? "Carta 1 venceu" :
       pibpercapita2 > pibpercapita1 ? "Carta 2 venceu" : "Empate",
       pibpercapita1 > pibpercapita2 ? 1 : 0);

    printf("Super Poder: %s (%d)\n",
       superpoder1 > superpoder2 ? "Carta 1 venceu" :
       superpoder2 > superpoder1 ? "Carta 2 venceu" : "Empate",
       superpoder1 > superpoder2 ? 1 : 0);


    return 0;
    }