/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descrição: Somatória
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int somatoria (int iNum);

int main()
{
    ///Declaração de variáveis
    int iValorN = 0;
    int iResult = 0;

    ///Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    ///Código do programa
    cout << "Insira o número para a somatória: ";
    cin >> iValorN;

    iResult = somatoria(iValorN);

    cout << "\nSomatória dos números inteiros entre 1 e " << iValorN << ": " << iResult << endl;

    return 0;
}

int somatoria (int iNum)
{
    int iSoma = 0;
    int iCont = 0;

    while (iCont <= iNum)
    {
        iSoma += iCont;

        iCont++;
    }

    return iSoma;
}
