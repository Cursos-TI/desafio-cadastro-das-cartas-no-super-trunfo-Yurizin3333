#include <stdio.h>


int main() {

    printf("CADASTRO DE CARTAS DO SUPER TRUNFO! Digite as informações das cartas a seguir:\n");
    printf(" \n");
    printf("Carta 1:\n");


    char estado1;
    char codigo1[20], nome1[20];
    int populacao1, pontos1;          //Variáveis da primeira carta a ser lida.
    float area1, pib1, densidade1, PibCapital1, densidadeInvertida1, superpoder1;
 

    printf("Estado(Uma Letra): ");
    scanf("%c", &estado1);
    printf("Código(Estado+Número): ");
    scanf("%s", &codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", &nome1);
    printf("População: ");      //Entrada e saída de dados da primeira carta
    scanf("%d", &populacao1);
    printf("Área(KM²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1/area1;
    PibCapital1 = pib1/populacao1;
    densidadeInvertida1 = 1/densidade1; //Calcular o valor invertido da densidade para a soma e comparação das cartas.
    superpoder1 = populacao1+area1+pib1+pontos1+PibCapital1+densidadeInvertida1;

    printf(" \n");

    printf("1° CARTA CADASTRADA COM SUCESSO! Confira as Informações da Sua Carta:\n");
    printf("Estado: %c\n", estado1);
    printf("Codígo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);   //Mostrando os valores digitados da primeira carta
    printf("População: %d\n", populacao1);
    printf("Área: %.3f Km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB Per Capital: %.2f Reais\n", PibCapital1);
    printf("SUPERPODER: %.3f\n", superpoder1);

    printf(" \n");
    printf("Carta 2:\n");

    char estado2;
    char codigo2[20], nome2[20];
    int populacao2, pontos2;  //Variaveis da segunda carta
    float area2, pib2, densidade2, PibCapital2, densidadeInvertida2, superpoder2;

    printf("Estado(Uma Letra): ");
    scanf(" %c", &estado2);
    printf("Código(Estado+Número): ");
    scanf("%s", &codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", &nome2);
    printf("População: ");
    scanf("%d", &populacao2);  //Entrada e saída de dados da segunda carta
    printf("Área(KM²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2/area2;
    PibCapital2 = pib2/populacao2;
    densidadeInvertida2 = 1/densidade2;
    superpoder2 = populacao2+area2+pib2+pontos2+PibCapital2+densidadeInvertida2;

    printf(" \n");

    printf("2° CARTA CADASTRADA COM SUCESSO! Confira as Informações da Sua Carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Codígo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);  //Mostrando os valores digitados da segunda carta
    printf("Área: %.3f Km²\n", area2);
    printf("PIB: %2.f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB Per Capital: %2.f Reais\n", PibCapital2);
    printf("SUPERPODER: %.3f\n", superpoder2);

    printf(" \n");

    printf("COMPARAÇÃO DE CARTAS:\n");
    printf("População -> Carta 1 Venceu? -> %d\n", populacao1 > populacao2);
    printf("Área -> Carta 1 Venceu? -> %d\n", area1 > area2);
    printf("PIB -> Carta 1 Venceu? -> %d\n", pib1 > pib2);
    printf("Pontos Turísticos -> Carta 1 Venceu? -> %d\n", pontos1 > pontos2);
    printf("Densidade Populacional -> Carta 2 Venceu? -> %d\n", densidade1 > densidade2);  //Comprando as cartas
    printf("PIB Per Capital -> Carta 1 Venceu? -> %d\n", PibCapital1 > PibCapital2);
    printf("SUPERPODER -> Carta 1 Venceu? -> %d\n", superpoder1 > superpoder2);


    return 0;
}
