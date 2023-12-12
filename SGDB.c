#include <stdio.h>
#include <string.h>
#include "SGDB.h"

void printmenu()
{
    char *texto = "Ola, bem vindo ao SGBD da disciplina de ITP.\nDigite o numero da opcao desejada:\n1.Criar um tabela\n2.Listar todas as tabelas\n3.Criar uma nova linha na tabela\n4.Listar todos os dados de uma tabela\n5.Pesquisar valor em uma tabela\n6.Apagar uma tupla (registro ou linha) de uma tabela\n7.Apagar uma tabela\n8.Sair do menu\n";
    printf(texto);
}

void criartabela(Tabela tabelas[], int *qtdTabelas)
{
    char nome[100];
    char nomeColuna[100];
    printf("Digite o nome da tabela\n");
    scanf("%s", &nome);
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(nome, tabelas[i].nome)== 0)
        {
            printf("Tabela ja existe");
            return;
        }
    }
    qtdTabelas += 1;
    FILE *arquivo;
    strcpy(tabelas[qtdTabelas].nome, nome);
    strcat(tabelas[qtdTabelas].nome, ".txt");
    arquivo = fopen(tabelas[qtdTabelas].nome, "a");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo");
        return;
    }
    printf("Digite o nome da coluna para ser a chave primaria\n");
    scanf("%s", &nomeColuna);
    fprintf(arquivo,"%s", nomeColuna);
    fclose(arquivo);
}