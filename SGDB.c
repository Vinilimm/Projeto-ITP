#include <stdio.h>
#include "SGDB.h"

void printmenu()
{
    char *texto = "Ola, bem vindo ao SGBD da disciplina de ITP.\nDigite o numero da opcao desejada:\n1.Criar um tabela\n2.Listar todas as tabelas\n3.Criar uma nova linha na tabela\n4.Listar todos os dados de uma tabela\n5.Pesquisar valor em uma tabela\n6.Apagar uma tupla (registro ou linha) de uma tabela\n7.Apagar uma tabela\n8.Sair do menu\n";
    printf(texto);
    /*printf(
    "Olá, bem vindo ao SGBD da disciplina de ITP.
    Digite o número da opção desejada:
    1.Criar um tabela
    2.Listar todas as tabelas
    3.Criar uma nova linha na tabela
    4.Listar todos os dados de uma tabela
    5.Pesquisar valor em uma tabela
    6.Apagar uma tupla (registro ou linha) de uma tabela
    7.Apagar uma tabela
    8.Sair do menu");*/
}

