#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>
using namespace std;
class Estoque
{
public:
    void setcomeco()
    {
        printf("Interface de registro para estoque do produto.\nDigite os valores pedidos abaixo:\n");
    }

    void setNome()
    {

        cin.ignore();
        cout<<"Informe o nome da pessoa: ";
        getline(cin,Nome);
    }

    void setValor()

    {

        cout<<"Informe o valor do produto:R$";
        cin>>Valor;
        if(Valor<0)

        {

            cout<<"Valor invalido";
            exit(0);
        }
    }



    void setQuantidade()
    {
        cout<<"Informe a quantidade do produto disponivel: ";
        cin>>Quantidade;
        if(Quantidade<0)
        {
            cout<<"Valor invalido";
            exit(0);
        }
    }
    int setvalnum()
    {
        cout<<"Digite quantos produtos serão adicionados(quantidade máxima de 5 produtos): ";
     cin>>valnum;
        if(valnum<=0 ||valnum>5)
        {
            cout<<"Valor invalido";
            exit(0);
        }
        return valnum;
    }
    void exibirDados()
    {
      cout<<"\nDados do produto:\n";
        cout<<"Nome: "<<Nome<<endl;
        cout<<"Quantidade: "<<Quantidade<<endl;
        cout<<"Valor: R$"<<Valor<<endl;
    }
private:
    string Nome;
    int Quantidade;
    float Valor;
    int valnum;
};

int main()

{
    setlocale(LC_ALL,"");
    Estoque e[5];
    e[0].setcomeco();
    int val=0;
    int i=0;
    val=e[i].setvalnum();
    for(int i=0; i<val; i++)
    {
        e[i].setNome();
        e[i].setValor();
        e[i].setQuantidade();
    }

    for(int i=0; i<val; i++)
    {
        e[i].exibirDados();
    }

    return 0;
}
