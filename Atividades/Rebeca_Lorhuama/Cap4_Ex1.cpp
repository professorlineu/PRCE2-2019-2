/**********************************************************
- Autor:     Rebeca Lorhuama de Castro Saraiva
- Descrição: Média de notas
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fNota1 = 0;
    float fNota2 = 0;
    float fNota3 = 0;
    float fNota4 = 0;
    float fMedia = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "MÉDIA DE NOTAS" << endl << endl;

    cout << "Digite a primeira nota: ";
    cin >> fNota1;

    cout << "Digite a segunda nota: ";
    cin >> fNota2;

    cout << "Digite a terceira nota: ";
    cin >> fNota3;

    cout << "Digite a quarta nota: ";
    cin >> fNota4;

    fMedia = (fNota1 + fNota2 + fNota3 + fNota4) / 4;

    cout << "\nA sua média é: " << fMedia << endl;

    if (fMedia >= 7)
    {
        cout << "\nAprovado!";
    }

    else
    {
        cout << "\nReprovado!";
    }

    return 0;
}
