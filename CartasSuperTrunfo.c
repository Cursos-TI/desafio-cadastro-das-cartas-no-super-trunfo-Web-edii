#include <stdio.h>

int main(){
    char nome_da_cidade[20];
    int populacao;
    int Numero_de_pontos_turisticos;
    char codigo[4]; //Código da carta (Ex: B01, B02...)
    float pib;
    float area;

 //Cadastro de Cidade:

    printf("Bem Vindo ao Desafio Super Trunfo\n");

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade);

    printf("Digite a população:\n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &Numero_de_pontos_turisticos);

    printf("Digite o código:\n");
    scanf("%s", &codigo[4]);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a Área:\n");
    scanf("%f", &area);

    printf("CONFIRA SUAS RESPOSTAS:\n"); //Hora de Conferir tudo que foi respondido anteriomente.
    
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Numero de pontos Turísticos: %d\n", Numero_de_pontos_turisticos);
    printf("Código: %s\n", codigo);
    printf("PIB: %f\n", pib);
    printf("Área: %f\n", area);

    return 0;

}