/**********************************************************
- Autor:     BRUNO MARQUES MARTINS
- Descrição: EXERCICIO LISTA 02 - ORIENTAÇÃO A OBJETOS
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>

using namespace std;


class estoque
{
	public:
		void setNome()
			{
			cout << "Informe produto que deseja cadastrar: ";
			cin>>Nome;
    	getline (cin, Nome);
			}

		void setQuantidade()
			{
				do
				{
				cout<<"informe a quantidade de produtos: ";
				cin>>Quantidade;
				if (Quantidade<=0)
					{
					cout<<"--------------------------------------------"<<endl;
					cout<<"Quantidade invalida!"<<endl;
					cout<<"Informe uma quantidade maior ou igual a Zero!"<<endl;
					cout<<"--------------------------------------------"<<endl;
					}
				}
				while(Quantidade<=0);
			}

		void setValor()
			{
			do
			{
			cout<<"informe o valor do produtos: ";
			cin>>Valor;
			if(Valor<0)
				{
						cout<<"--------------------------------------------"<<endl;
						cout<<"Valor invalido"<<endl;
						cout<<"Informe um valor maior que zero"<<endl;
						cout<<"--------------------------------------------"<<endl;
				}
			}
			while(Valor<0);
			}
		
		string getNome()
			{
			return Nome;
			}

		int getQuantidade()
			{
			return Quantidade;
			}

		float getValor()
			{
			return Valor;
			}
	private:
		string Nome;
		float Valor;
		int Quantidade;
};

int main()
{
cout<<"Controle de estoque"<<endl;

estoque e1[5];
string sNome;


for (int i=0; i<5;i++)
{
		e1[i].setNome();
    e1[i].setQuantidade();
		e1[i].setValor();
}
}