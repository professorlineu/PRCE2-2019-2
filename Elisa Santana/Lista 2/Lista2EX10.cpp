#include <iostream>
#include <cstdlib>
#include <ctype.h>
using namespace std;

class Produto
{
public:
    void setPeso()
    {
        cout << "Informe o peso:";
        cin >> Peso;
    }

    void setPreco()
    {
        cout << "Informe o preco:";
        cin >> Preco;
    }

    void setValor()
    {
       Valor = Peso * Preco;
    }

    void exibirDados()
    {
        cout << "\n\n\nDados do produto " << endl;
        cout << "Peso: " << Peso << endl;
        cout << "Preco: " << Preco << endl;
        cout << "Valor: " << Valor << endl;

    }

private:
    float Peso;
    float Preco;
    float Valor;

};

int main()
{
    Produto p1;

    setlocale (LC_ALL,"");
    system("color F1");

    p1.setPeso();
    p1.setPreco();
    p1.setValor();
    p1.exibirDados();




}
