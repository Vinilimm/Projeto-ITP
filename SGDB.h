#ifndef SGDB_h
#define SGDB_h

typedef struct 
{
    unsigned int chavePrimaria;  
    char *nome;
    char *nomeColuna;
    int qtdColunas;
}Tabela;


void printmenu();

void criartabela(Tabela tabelas[], int qtdTabelas);
#endif