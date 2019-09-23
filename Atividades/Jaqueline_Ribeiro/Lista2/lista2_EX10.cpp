/**********************************************************
- Autor:     Jaqueline Silva Ribeiro
- Descrição: Lista 2 - EX 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

class Produto
{
public:
    void setPeso () //metodo
    {
          cout<<"Informe o peso:";
          cin>> fPeso;
    }


    void setPreco () //metodo
    {
        cout<<"Informe o preço:";
        cin>>fPreco;
    }
    void dados()
    {
        cout<<"Dados do produto:\nPeso: "<<fPeso<<"\nPreço: "<<fPreco<<"\nValor: "<<fPeso*fPreco<< endl;
    }

private:
    float fPeso;
    float fPreco;
};
int main()
{   Produto p1; //objeto

    setlocale(LC_ALL,"");
    system("color F1");

    p1.setPeso(); //executa o metodo setPeso
    p1.setPreco(); //executa o metodo setPreco
    p1.dados(); // executa o metodo dados

return 0;
}



