/**********************************************************
- Autor:     Jéssica Assis
- Descrição: Exercicio 1  L2- ORIENTAÇÃO A OBJETO
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
using namespace std;


class Estoque // Classe
{
public:
    void setNome(string n) // método setNome
    {
        Nome = n;
    }

    void setQuantidade (float a) // método setQuantidade
    {
        Quantidade = a ;
    }

    // ver pq está voltando.

    void setValor (float b) // método setValor
    {
        Valor = b;
    }

    string getNome() // método getNome
    {
        return Nome;
    }

    double getQuantidade() // método Quantidade
    {

        return Quantidade;
    }

    double getValor() // Metodo valor
    {
        return Valor;
    }

private:
    string Nome; // atributo Nome
    double Quantidade; // atributo Quantidade
    double Valor; // atributo Valor
};


int main()
{
    Estoque e1 [5]; // objeto p1 do tipo Pessoa

    string sNome;
    double dQuantidade= 0;
    double dValor= 0;

    setlocale(LC_ALL,"");
    system("color F1");

    for (int i = 0; i < 5; i++)
    {
        cout << "Nome: " << endl;
        getline (cin, sNome); // ver aqui o que está acontcendo
        e1[i].setNome(sNome);

        do
        {
            cout << "Quantidade: "<< endl;
            cin >> dQuantidade;
            if (Quantidade <= 0)
            {
                cout <<"Digite novamente" << endl;
            }
        }
        while (Quantidade <= 0);

        e1 [i].setQuantidade (dQuantidade);


        do
        {
            cout << "Valor: " << endl;
            cin >> dValor;
            if (Valor < 0)
            {
                cout <<"Digite Novamente " << endl;
            }
        }
        while (Valor < 0);

        e1 [i].setValor (dValor);
    }



    for (int i = 0; i < 5; i++)
    {

        cout << "Exibir dados" << endl;
        cout <<"\n\n Nome: "<< e1[i].getNome()<< endl;
        cout <<"\n\n Quantidade: "<< e1[i].getQuantidade()<< endl;
        cout <<"\n\n Valor: "<< e1[i].getValor()<< endl;
    }


    return 0;
}
