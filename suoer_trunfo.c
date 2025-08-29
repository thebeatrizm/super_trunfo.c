#include <stdio.h>

int main(){

    char estado = 'E';
    char codigo [4]= "E01";
    char cidade [50]= "Espanha";
    int população= 50000;
    float area= 10005.00;
    float pib= 500000.0;
    int ponto_turisticos= 52;

    printf("Estado: %c\n",estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n",cidade);
    printf("População: %d\n",população);
    printf("Area: %.2f\n", area);
    printf("Pib:%f",pib);
    printf("Pontos turisticos: %d\n", ponto_turisticos);

    char estado2= 'G';
    char codigo2 [4]= "G02";
    char cidade2[50]= "Grecia";
    int populacao2= 100000;
    float area2= 152632;
    float pib2= 6320000;
    int pontos_turisticos2= 15;

printf("estado2: %c\n", estado2);
printf("codigo2: %s\n",codigo2);
printf("cidade2: %s\n", cidade2);
printf("populacao: %d\n",populacao2);
printf("area : %2.f\n",area2);
printf("pib: %f", pib2);
printf("pontos turisticos: %d\n", pontos_turisticos2);






}
