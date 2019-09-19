#include "Cliente.h"

Cliente::Cliente()
{
    //ctor
    sNome = "-";
    iIdade = 0;
    sEmail = "-";
    sCidade = "-";
}

Cliente::~Cliente()
{
    //dtor
}

void Cliente::setNome()
{
    string x;
    cout << "Informe seu nome: ";
    cin.ignore();
    getline(cin, x);
    sNome = x;
}

void Cliente::setCidade()
{
    string z;
    cout << "Informe sua cidade: ";
    //cin.ignore();
    getline(cin, z);
    sCidade = z;
}

void Cliente::setEmail()
{
    string y;
    int posicao = 0;
    cout << "Informe seu email: ";
    //cin.ignore();
    getline (cin, y);
    posicao = y.find('@');
        if(posicao == -1)
        {
            cout << "Email inválido!!";
            return;
        }
        else{
            sEmail = y;
        }

}

void Cliente::setIdade()
{
    int x;
    cout << "Informe sua Idade: ";
    cin >> x;
    iIdade = x;
}

void Cliente::setID()
{
    int y;
    cout << "Informe o ID: ";
    cin >> y;
    ID = y;
}

string Cliente::getNome()
{
   cout <<"Nome: " << sNome << endl;
}

string Cliente::getCidade()
{
    cout <<"Cidade: " << sCidade << endl;
}

string Cliente::getEmail()
{
    cout <<"Email: " << sEmail << endl;
}

int Cliente::getIdade()
{
    cout << "Idade: " << iIdade << endl;
}

int Cliente::getID()
{
    cout << "ID: " << ID << endl;
}
