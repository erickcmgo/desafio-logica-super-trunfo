#include <stdio.h>

// Função para comparar força entre duas cartas
void compararSimples(int forca1, int forca2) {
    printf("\n[COMPARAÇÃO SIMPLES - FORÇA]\n");

    if (forca1 > forca2) {
        printf("Carta 1 venceu com mais força!\n");
    } else if (forca1 < forca2) {
        printf("Carta 2 venceu com mais força!\n");
    } else {
        printf("Empate! As duas cartas têm a mesma força.\n");
    }
}

// Função para comparar um atributo escolhido pelo jogador
void compararMultipla(int f1, int v1, int i1, int f2, int v2, int i2) {
    int escolha;

    printf("\n[COMPARAÇÃO DE UM ATRIBUTO]\n");
    printf("Atributos disponíveis:\n");
    printf("1 - Força\n2 - Velocidade\n3 - Inteligência\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Comparando Força...\n");
            if (f1 > f2)
                printf("Carta 1 venceu!\n");
            else if (f1 < f2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Comparando Velocidade...\n");
            if (v1 > v2)
                printf("Carta 1 venceu!\n");
            else if (v1 < v2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Comparando Inteligência...\n");
            if (i1 > i2)
                printf("Carta 1 venceu!\n");
            else if (i1 < i2)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida. Por favor, tente novamente.\n");
