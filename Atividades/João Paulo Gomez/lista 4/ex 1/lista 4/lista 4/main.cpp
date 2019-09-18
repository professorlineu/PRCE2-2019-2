#include <iostream>
#include "Cliente.h"
#include "Cliente.h"
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{

    int Id;
    string Nome;
    string Cidade;
    string Email;
    int Idade;

    Cliente c1;

    cout<<"Digite o ID do cliente: ";
    cin>>Id;
    c1.setId(Id);

    cout<<"Digite o nome do cliente: ";
    cin>>Nome;
    c1.setNome(Nome);

    cout<<"Digite a idade do cliente: ";
    cin>>Idade;
    c1.setIdade(Idade);

    cout<<"Digite o e-mail do cliente: ";
    cin>>Email;
    c1.setEmail(Email);

    cout<<"Digite a cidade do cliente: ";
    cin>>Cidade;
    c1.setCidade(Cidade);

    cout<<endl;


    cout<<"Dados do cliente:"<<endl;
    cout<<"ID: "<<c1.getId()<<endl;
    cout<<"Nome: "<<c1.getNome()<<endl;
    cout<<"Idade: "<<c1.getIdade()<<endl;
    cout<<"E-mail: "<<c1.getEmail()<<endl;
    cout<<"Cidade: "<<c1.getCidade()<<endl;


}
