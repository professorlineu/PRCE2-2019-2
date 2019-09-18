/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descrição:
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    ///Declaração de variáveis
    int matriz[6][3];
    int maior = 0;
    int linhaMaior = 0;
    int colunaMaior = 0;
    int menor = 0;
    int linhaMenor = 0;
    int colunaMenor = 0;
    int i = 0;
    int j = 0;

    ///Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    ///Código do programa
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Insira um valor para a célula " << (i + 1) << "x" << (j + 1) << ": ";
            cin >> matriz[i][j];
        }
    }

    menor = matriz[0][0];
    maior = matriz[0][0];

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                linhaMaior = i + 1;
                colunaMaior = j + 1;
            }

            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                linhaMenor = i + 1;
                colunaMenor = j + 1;
            }
        }
    }

    cout << "\nO maior elemento da matriz é o nº " << maior << " localizado na célula " << linhaMaior << "x" << colunaMaior << endl;
    cout << "O menor elemento da matriz é o nº " << menor << " localizado na célula " << linhaMenor << "x" << colunaMenor << endl;


    return 0;
}
