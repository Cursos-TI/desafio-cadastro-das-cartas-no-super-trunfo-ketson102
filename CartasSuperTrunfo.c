#include <stdio.h>
#include <string.h>

// Estrutura da carta
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica; 
} Carta;

int main() {
    // Criando duas cartas de exemplo
    Carta c1 = {"Brasil", 214000000, 8515767.0, 2.055, 20, 214000000/8515767.0};
    Carta c2 = {"Argentina", 46000000, 2780400.0, 0.643, 15, 46000000/2780400.0};

    int atributo1, atributo2;
    float valorC1_attr1, valorC2_attr1, valorC1_attr2, valorC2_attr2;
    float somaC1, somaC2;

    printf("=== SUPER TRUNFO - COMPARAÇÃO DE CARTAS ===\n\n");
    printf("Carta 1: %s\n", c1.nome);
    printf("Carta 2: %s\n\n", c2.nome);

    // MENU 1 - Escolha do primeiro atributo
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    scanf("%d", &atributo1);

    // MENU 2 - Escolha do segundo atributo (dinâmico)
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for(int i=1; i<=5; i++){
        if(i != atributo1){
            switch(i){
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    scanf("%d", &atributo2);

    // Função auxiliar para pegar valores
    float getValor(Carta c, int atributo) {
        switch(atributo){
            case 1: return c.populacao;
            case 2: return c.area;
            case 3: return c.pib;
            case 4: return c.pontosTuristicos;
            case 5: return c.densidadeDemografica;
            default: return 0;
        }
    }

    // Pegando os valores de cada atributo
    valorC1_attr1 = getValor(c1, atributo1);
    valorC2_attr1 = getValor(c2, atributo1);

    valorC1_attr2 = getValor(c1, atributo2);
    valorC2_attr2 = getValor(c2, atributo2);

    // Comparação
    printf("\n=== RESULTADOS ===\n");
    printf("%s -> %.2f e %.2f\n", c1.nome, valorC1_attr1, valorC1_attr2);
    printf("%s -> %.2f e %.2f\n", c2.nome, valorC2_attr1, valorC2_attr2);

    somaC1 = valorC1_attr1 + valorC1_attr2;
    somaC2 = valorC2_attr1 + valorC2_attr2;

    printf("\nSoma dos atributos:\n");
    printf("%s = %.2f\n", c1.nome, somaC1);
    printf("%s = %.2f\n", c2.nome, somaC2);

    if(somaC1 > somaC2){
        printf("\n>>> %s venceu a rodada!\n", c1.nome);
    } else if(somaC2 > somaC1){
        printf("\n>>> %s venceu a rodada!\n", c2.nome);
    } else {
        printf("\n>>> Empate!\n");
    }

    return 0;
}
