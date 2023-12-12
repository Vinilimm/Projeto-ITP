#include <stdio.h>
#include <string.h>
#include "SGDB.h"

int main()
{
    int escolha = 0;
    Tabela tabelas[10];
    int qtdTabelas = -1;
        while (escolha != 8)
    {
        printmenu();
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
           criartabela(tabelas, qtdTabelas);
            break;

        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        case 6:
            /* code */
            break;
        case 7:
            /* code */
            break;
        }
    }
    return 0;
}
