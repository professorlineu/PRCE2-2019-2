/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descrição: Lista 5 - Exercício 20
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int iOpcao;
    int iNota1;
    int iNota2;
    int iNota3;
    int iPeso1;
    int iPeso2;
    int iPeso3;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while(iOpcao != 3)
    {
        cout << "Escolha uma das opções: " << endl;
        cout << "1. Média aritmética " << endl;
        cout << "2. Média ponderada " << endl;
        cout << "3. Sair " << endl;
        cout << "Opção ";
        cin >> iOpcao;

        if(iOpcao == 1)
        {
            cout << "Digite a primeira nota: ";
            cin >> iNota1;

            cout << "Digite a segunda nota: ";
            cin >> iNota2;

            cout << "A média entre as duas notas é: " << (iNota1+iNota2)/2 << endl << endl;
        }

        else if(iOpcao == 2)
        {
            cout << "Digite a primeira nota: ";
            cin >> iNota1;

            cout << "Digite a segunda nota: ";
            cin >> iNota2;

            cout << "Digite a terceira nota: ";
            cin >> iNota3;

            cout << "Digite o peso da primeira nota: ";
            cin >> iPeso1;

            cout << "Digite o peso da segunda nota: ";
            cin >> iPeso2;

            cout << "Digite o peso da terceira nota: ";
            cin >> iPeso3;

            cout << "A média das notas é: " <<((iNota1*iPeso1)+(iNota2*iPeso2)+(iNota3*iPeso3))/(iPeso1+iPeso2+iPeso3);

            cout << endl << endl;
        }

        else if(iOpcao == 3)
        {
            cout << "Fechando o programa";
        }
    }

    return 1;
}
