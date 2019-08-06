//Autor: Victor Hugo Magalhães
//Descrição: Cap05 - Ex22
#include <iostream>
using namespace std;
//Declaração de variáveis
int iIdade = 1;
int iAltura = 0;
float fMedia = 0;
int iCont = 0;
//Prototipação de funções

int main(){
	while(iIdade > 0){

		cout << "Entre com a idade: ";
		cin >> iIdade;

		if(iIdade <= 0)
		{
			cout << "\nIdade menor ou igual a zero!\n" << endl;
			break;
		}
		else{
			cout << "Entre com a altura em cm: ";
			cin >> iAltura;
			cout << "\n";
				if(iIdade > 50){
				iCont++;
				fMedia += iAltura;
				}

			else{

				}
		}
	}//fim while	
	cout << "A média de altura das pessoas com mais de 50 anos é de: " << fMedia / iCont << "cm" << endl;
}//fim main