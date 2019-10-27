/**********************************************************
- Autor:    Layane Quissak
- Descri��o: Cap 11 Ex 1 e 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{

    setlocale(LC_ALL,"");
    system("color F1");

    fstream CadastroCliente;
    char opc = 's' ;
    string nome;
    string en ;
    int cod;
    string linha;


    CadastroCliente.open("Cadastro.txt",ios::out|ios::app);

    while((opc=='s') or (opc=='S'))
    {
        cout << "Cadastrando novo cliente " << endl ;
        cout << "Digite o c�digo do cliente: "<<endl;
        cin >> cod ;
        cout << "Digite o nome do cliente: "<<endl;
        cin >> nome ;
        cout << "Digite o endere�o do cliente: "<<endl;
        cin >> en ;
        cout << "Deseja cadastrar um novo cliente? (s/n) " << endl;
        cin >> opc;

        system("CLS");
    }
    CadastroCliente.close();

    CadastroCliente.open("Cadastro.txt",ios::in);

    cout << "Clientes Cadastrados" << endl;

    if(CadastroCliente.is_open())
    {
        while(getline(CadastroCliente,linha))

        {
            cout << linha << endl ;
        }

    }
    else
    {
        cout << "N�o foi poss�vel abrir o programa" << endl ;
    }

}
