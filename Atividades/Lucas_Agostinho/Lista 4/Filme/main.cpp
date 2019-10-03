/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descrição:
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include "Cadastro.h"

using namespace std;

int main()
{
    ///Declaração de variáveis
    Cadastro filme;
    int iAnoLanc = 0;
    string sNome = "";
    int iID = 0;

    ///Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    ///Código do programa
    cout << "CADASTRO DOS FILMES: " << endl;

    cout << "Insira o ID do filme: ";
    cin >> iID;
    filme.setID(iID);

    cin.ignore();
    cout << "Insira o nome do filme: ";
    getline(cin, sNome);
    filme.setNome(sNome);

    cout << "Insira o ano em que foi lançado: ";
    cin >> iAnoLanc;
    filme.setAnoLancamento(iAnoLanc);

    cout << "\n\nFICHA DOS FILMES: " << endl;
    cout << "\nID: " << filme.getID() << endl;
    cout << "Nome: " << filme.getNome() << endl;
    cout << "Ano de lançamento: " << filme.getAnoLancamento() << endl;

    return 0;
}
