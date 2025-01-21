#include <stdio.h>

int main() {
    // Definição de variáveis para armazenar os atributos de uma cidade
    int codigo;
    char nome[50];
    long int populacao;
    float area;
    double pib;
    int num_pontos_turisticos;

    // Cadastro das Cartas
    printf("Bem-vindo ao sistema de cadastro de cidades!\n");
    printf("Por favor, insira os seguintes dados:\n");

    // Captura dos dados do usuário
    printf("Código da cidade: ");
    scanf("%d", &codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nome); // Lê uma string com espaços

    printf("População: ");
    scanf("%ld", &populacao);

    printf("Área (em km²): ");
    scanf("%f", &area);

    printf("PIB (em milhões): ");
    scanf("%lf", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &num_pontos_turisticos);

    // Exibição dos Dados das Cartas
    printf("\n--- Dados da Cidade Cadastrada ---\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %ld\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf milhões\n", pib);
    printf("Número de pontos turísticos: %d\n", num_pontos_turisticos);

    return 0;
}
