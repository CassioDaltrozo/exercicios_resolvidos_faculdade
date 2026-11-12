#include <stdio.h>
#include <string.h>

// Estrutura que representa cada registro no arquivo binário
typedef struct {
    char nome[50];
    float altura;
} Atleta;

void buscarAlturaAtletas(const char *nomeArquivo) {
    // 1. Abre o arquivo binário para leitura ("rb")
    FILE *arquivo = fopen(nomeArquivo, "rb");
    if (arquivo == NULL) {
        printf("Erro: Nao foi possivel abrir o arquivo '%s'.\n", nomeArquivo);
        return;
    }

    char nomeBusca[50];
    Atleta atleta;
    int encontrado;

    // 2. Laço para possibilitar a busca de diversos atletas
    while (1) {
        printf("\nDigite o nome do atleta (ou 'sair' para encerrar): ");
        scanf(" %49[^\n]", nomeBusca); // Lê o nome completo, incluindo espaços

        if (strcmp(nomeBusca, "sair") == 0) {
            break;
        }

        // 3. Reposiciona o ponteiro de leitura para o início do arquivo a cada nova busca
        rewind(arquivo);
        encontrado = 0;

        // 4. Lê registro por registro até o fim do arquivo
        while (fread(&atleta, sizeof(Atleta), 1, arquivo) == 1) {
            if (strcmp(atleta.nome, nomeBusca) == 0) {
                printf("-> Altura de %s: %.2f m\n", atleta.nome, atleta.altura);
                encontrado = 1;
                break; // Para a busca atual assim que encontrar o atleta
            }
        }

        if (!encontrado) {
            printf("-> Atleta '%s' nao encontrado no arquivo.\n", nomeBusca);
        }
    }

    // 5. Fecha o arquivo antes de encerrar a função
    fclose(arquivo);
    printf("Busca encerrada e arquivo fechado.\n");
}

int main(){
    char nome[] = "aulas_teoricas/aulas/16_ate_30/19.bin";

    buscarAlturaAtletas(nome);
}
