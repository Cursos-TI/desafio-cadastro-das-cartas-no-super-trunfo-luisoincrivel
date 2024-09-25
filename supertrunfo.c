#include <stdio.h>

int main(){
    int codigodacidade;
    char nome[30];
    int populacao;
    float area;
    double PIB;
    int pontosturisticos;

     printf("Entre com o codigo\n");
     scanf("%d", &codigodacidade);

     printf("Entre com o nome\n");
     scanf("%s", &nome);

     printf("Entre com a pupolação\n");
     scanf("%d", &populacao);
     
     printf("Entre com a área\n");
     scanf("%2f", &area);
     
     printf("Entre com o PIB\n");
     scanf("%2f", &PIB);

     printf("Entre com os pontos turisticos\n");
     scanf("%d", &pontosturisticos);

     printf("Codigo da carta: %d\n", codigodacidade);
     printf("Nome da cidade: %s\n", nome);
     printf("População: %d\n", populacao);
     printf("Área: %e\n", area);
     printf("PIB: %f\n", PIB);
     printf("Pontos turisticos: %d", pontosturisticos);
     
     return 0;

     }