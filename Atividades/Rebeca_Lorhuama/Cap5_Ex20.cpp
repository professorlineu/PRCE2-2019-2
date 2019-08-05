/**********************************************************
- Autor:     Rebeca Lorhuama de Castro Saraiva
- Autor:     Rossana Aparecida Ribeiro da Silva de Oliveira
- Descrição: Médias
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iOpcao = 0;
    float fNota1 = 0;
    float fNota2 = 0;
    float fNota3 = 0;
    float fPeso1 = 0;
    float fPeso2 = 0;
    float fPeso3 = 0;
    float fMediaA = 0;
    float fMediaP = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while (iOpcao != 3)
    {
        cout << "OPÇÕES" << endl;

        cout << "\n1. Média Aritmética";
        cout << "\n2. Média Ponderada";
        cout << "\n3. Sair" << endl;

        cout << "\nEscolha uma opção: ";
        cin >> iOpcao;

        if (iOpcao == 1)
        {
            cout << "\nDigite a nota: ";
            cin >> fNota1;

            cout << "Digite a nota: ";
            cin >> fNota2;

            fMediaA = (fNota1 + fNota2) / 2;

            cout << "Média Aritmética: " << fMediaA << endl;
        }

        if (iOpcao == 2)
        {
            cout << "\nDigite a nota: ";
            cin >> fNota1;
            cout << "Digite o peso: ";
            cin >> fPeso1;

            cout << "Digite a nota: ";
            cin >> fNota2;
            cout << "Digite o peso: ";
            cin >> fPeso2;

            cout << "Digite a nota: ";
            cin >> fNota3;
            cout << "Digite o peso: ";
            cin >> fPeso3;

            fMediaP = (fNota1 * fPeso1 + fNota2 * fPeso2 + fNota3 * fPeso3) / (fPeso1 + fPeso2 + fPeso3);

            cout << "Média Aritmética: " << fMediaP << endl;
        }

         if (iOpcao != 1 && iOpcao != 2 && iOpcao != 3)
        {
            cout << "Opção Inválida" << endl;
        }
    }

    cout << "\nPrograma Finalizado" << endl;


   return 0;
}
