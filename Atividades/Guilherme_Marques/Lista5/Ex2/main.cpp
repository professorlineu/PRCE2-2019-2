/**********************************************************
- Autor:     Guilherme Marques
- Descri��o: Calculadora Valor Im�veis
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h>
using namespace std;

int main()
{



    cout << "\nCuidados para Pets\n";
    cout << "Qual pet voc� possui?:";
    cout << "1 - Cachorro";
    cout << "2 - Gato";
    cin >> iResposta;

    while (iResposta != 1 && iResposta != 2)
    {
        cout << "Resposta inv�lida, insira outra: ";
        cin >> iResposta;
    }

    if(iResposta = 1)
    {
        cout << "Quantos anos ele tem?";
        cin >> iIdade;
        c1.setIdade(iIdade);

        cout << "Com qual "
    }
}
