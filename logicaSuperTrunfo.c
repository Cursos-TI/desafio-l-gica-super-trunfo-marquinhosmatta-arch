#include <stdio.h>

int main() {
    // Programa: Desafio Lógico - Super Trunfo

    // Declarando os nomes das cidades
    char cidade1[] = "Alagoas";
    char cidade2[] = "Goiás";

    // Atributos da cidade 1 (Alagoas)
    int populacao1 = 3300000;     // População de Alagoas
    float pib1 = 70000.50;        // PIB de Alagoas
    int pontosTuristicos1 = 15;   // Pontos turísticos de Alagoas

    // Atributos da cidade 2 (Goiás)
    int populacao2 = 7200000;     // População de Goiás
    float pib2 = 160000.75;       // PIB de Goiás
    int pontosTuristicos2 = 20;   // Pontos turísticos de Goiás

    // Exibindo as cartas das cidades
    printf("===== CARTAS SUPER TRUNFO =====\n\n");

    printf("Carta 1: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n\n", pontosTuristicos1);

    printf("Carta 2: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n\n", pontosTuristicos2);

    // Comparando as cidades com base no atributo principal: População
    printf("===== RESULTADO DA RODADA =====\n");

    // Estrutura condicional que decide quem venceu
    if (populacao1 > populacao2) {
        // Caso a população da cidade 1 seja maior
        printf("%s venceu a rodada! (Populacao maior)\n", cidade1);
    } 
    else if (populacao2 > populacao1) {
        // Caso a população da cidade 2 seja maior
        printf("%s venceu a rodada! (Populacao maior)\n", cidade2);
    } 
    else {
        // Caso as populações sejam iguais
        printf("Empate! As duas cidades possuem a mesma populacao.\n");
    }

    // Exibindo o resumo comparativo
    printf("\n===== RESUMO COMPARATIVO =====\n");
    printf("%s -> Populacao: %d | PIB: %.2f | Pontos Turisticos: %d\n",
           cidade1, populacao1, pib1, pontosTuristicos1);
    printf("%s -> Populacao: %d | PIB: %.2f | Pontos Turisticos: %d\n",
           cidade2, populacao2, pib2, pontosTuristicos2);

    // Fim do programa
    printf("\nFim da rodada!\n");

    return 0;

    
}

Eu fiz esse programa em C pra simular uma rodada do Super Trunfo entre as cidades Alagoas e Goiás.
Coloquei os dados das duas cidades, tipo população, PIB e pontos turísticos.
Depois usei if e else pra comparar quem tem a população maior e mostrar quem ganhou.
No final o programa mostra tudo na tela com printf.
Fiz de um jeito bem simples só pra mostrar como funciona a comparação.
