/**********************************************************
- Autor:     Victor Hugo Magalhães
- Descrição: Ex 01 - POO
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
using namespace std;

class Estoque //Classe estoque
{
public:

	void SetNome(){
		cout << "Insira o nome do produto: ";
		getline (cin, Nome);
	}

	void SetValor(){
		do{
			cout << "Informe o Preço do produto: ";
			cin >> fValor;

			if(fValor < 0){
				cout << "Valor inválido!" << endl;
			}
		}while(fValor < 0);
	}

	void SetQuant(){
		do{
			cout << "Informe a quantidade do produto: ";
			cin >> iQuant;

			if(iQuant <= 0){
				cout << "Valor inválido!" << endl;
			}
		}while(iQuant <= 0);
	}

	void GetDados(){
		cout <<"\n\nDados do produto: " << endl;
		cout << "Nome: " << Nome << endl;
		cout << "Valor: " << fValor << endl;
		cout << "Quantidade: " << iQuant << endl;
	}

private:
	string Nome;
	float fValor;
	int iQuant;
};


int main(){
	Estoque e1; // objeto e1

	setlocale(LC_ALL,"");

		e1.SetNome(); // Método setNome

		e1.SetValor(); // Método setValor

		e1.SetQuant(); // Método setQuant

		e1.GetDados(); // Exibindo resultado

}
