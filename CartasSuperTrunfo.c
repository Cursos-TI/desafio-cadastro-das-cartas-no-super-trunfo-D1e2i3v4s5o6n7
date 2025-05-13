#include <stdio.h>




int main() {
    int população, pontosTuristicos;
    float area, pib;
    char estado, codigoCarta[20], cidade[20];

    printf("Digite a população: \n");
    scanf("%d", &população);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos);

    printf("Digite a area em Km²: \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite o nome do estado: \n");
    scanf("%s", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigoCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Nome do estado:%s - código da carta:%s - Nome da cidade:%s \n", estado, codigoCarta, cidade);
    printf("População:%d - Numero de pontos turisticos:%d ", população, pontosTuristicos);
    printf("Digite a area em Km²:%f - Digite o pib:%f ", area, pib);

    return 0;



}
