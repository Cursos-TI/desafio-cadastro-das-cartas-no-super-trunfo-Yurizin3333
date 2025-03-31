#include <stdio.h>


int main() {

    printf("CADASTRO DE CARTAS DO SUPER TRUNFO! Digite as informações das cartas a seguir:\n");
    printf(" \n");
    printf("Carta 1:\n");


    char estado1;
    char codigo1[20];
    char nome1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;


    printf("Estado(Uma Letra): ");
    scanf("%c", &estado1);
    printf("Código(Estado+Número): ");
    scanf("%s", &codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", &nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área(KM²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    printf(" \n");

    printf("1° CARTA CADASTRADA COM SUCESSO! Confira as Informações da Sua Carta:\n");
    printf("Estado: %c\n", estado1);
    printf("Codígo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %f Km²\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);

    printf(" \n");
    printf("Carta 2:\n");

    char estado2;
    char codigo2[20];
    char nome2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    printf("Estado(Uma Letra): ");
    scanf(" %c", &estado2);
    printf("Código(Estado+Número): ");
    scanf("%s", &codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", &nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área(KM²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    printf(" \n");

    printf("2° CARTA CADASTRADA COM SUCESSO! Confira as Informações da Sua Carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Codígo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %f Km²\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turísticos: %d", pontos2);

    return 0;
}
