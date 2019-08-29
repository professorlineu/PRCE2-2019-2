#include <iostream>
#include<cstdlib>
#include<stdio.h>
using namespace std;
class Produto
{
public:
    void setcomeco()
    {
        printf("Interface de controle para registro de produtos\nDigite as informações pedidas abaixo:\n");

    }
    void setfPreco()
    {
        do
        {
        cout<<"Digite o valor do produto: R$";
        scanf("%f",&fPreco);
        }
        while(fPreco<0);


    }
    void setfPeso()
    {
        do
        {
          cout<<"Digite o peso do produto( em quilo gramas): ";
        scanf("%f",&fPeso);
        }
        while(fPeso<0);



    }
    float operacao()
    {

        fResult=fPeso*fPreco;
        return (fResult);
    }
    void exibirDados()
    {
        cout<<"\nDados do produto:\n";
        cout<<"Peso: "<<fPeso<<endl;
        cout<<"Preço: R$"<<fPreco<<endl;
        cout<<"Valor do produto(proçoxpeso): "<<fResult<<endl;
    }
private:
    float fPeso;
    float fPreco;
    float fResult;
};
int main()
{
    setlocale(LC_ALL,"");
    Produto p1;
    p1.setcomeco();
    p1.setfPreco();
    p1.setfPeso();
    p1.operacao();
    p1.exibirDados();
    return 0;

}
 /**observação*****************************************
 utlizando o scanf o programa aceita colocar virgua ao envés de ponto nas variaveis,
 com cin ele aceita ponto ao envéz de virgula.
 ******************************************************/
