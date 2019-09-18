/**********************************************************
- Autor:     Jéssica Assis
- Descrição: Exercicio 10 -   L2 - ORIENTAÇÃO A OBJETO
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
using namespace std;


class Produto // Classe
{
public:
    void setpeso (float pe) // método setNome
    {
        peso = pe;
    }

    void setpreco (float pr) // método setQuantidade
    {
        preco = pr ;
    }

    float getpeso() // método getNome
    {
        return peso;
    }

    float getpreco() // método Quantidade
    {

        return preco;
    }

private:
    float peso; // atributo peso.
    float preco; // atributo preço
};


int main()
{
    Produto p1; // objeto p1 do tipo Pessoa

    float fpeso= 0;
    float fpreco= 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe o peso: ";
    cin >> fpeso;
    p1.setpeso(fpeso); // executando o método peso

    cout << "Informe o Preço: ";
    cin >> fpreco;
    p1.setpreco(fpreco); // executando o método set pereço


     cout << "\n\n\nDados do produto:" << endl;
    cout << "Peso: " << p1.getpeso() << endl;
    cout << "preço: " << p1.getpreco () << endl;
    cout << "Valor: "<< p1.getpeso()*p1.getpreco ()<< endl;



    return 0;
}
