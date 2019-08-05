//Autor: Victor Hugo Magalhães
//Descrição: Cap05 - Ex25
#include <iostream>
using namespace std;
//Declaração de variáveis
int iCodCliente = 999; //Pra não entrar em conflito com a condição do while foi definido como 999
int iInvestimento = 0;
float fVI = 0; //fVI = Valor Investido
//Prototipação de funções
void investimento();

int main(){
	while(iCodCliente > 0){
	cout <<"Entre com o código do cliente: ";
	cin >> iCodCliente;
	cout << "\nEntre com o tipo de investimento: " << endl;
	cout << "1.Poupança" << endl;
	cout << "2.Poupança Plus" << endl;
	cout << "3.Fundos de renda fixa" << endl;
	cin >> iInvestimento;
	cout << "\nEntre com o valor investido: ";
	cin >>fVI;
	investimento();
	}//fim while
}//fim main

void investimento(){
	switch(iInvestimento)
	{
		case 1:
			cout << "Rendimento Mensal: 1,5%" << endl;
			cout << "Total Investido: R$ " << fVI << endl;
			cout << "Total de Juros pagos: R$ " << fVI * 0.015 << endl; 
			cout << "Rendimento total: R$ " << fVI * 1.015 << "\n" << endl;
		break;

		case 2:
			cout << "Rendimento Mensal: 2%" << endl;
			cout << "Total Investido: R$ " << fVI << endl;
			cout << "Total de Juros pagos: R$ " << fVI * 0.02 << endl; 
			cout << "Rendimento total: R$ " << fVI * 1.02 << "\n" << endl;
		break;

		case 3:
			cout << "Rendimento Mensal: 4%" << endl;
			cout << "Total Investido: R$ " << fVI << endl;
			cout << "Total de Juros pagos: R$ " << fVI * 0.04 << endl; 
			cout << "Rendimento total: R$ " << fVI * 1.04 << "\n" << endl;
		break;

		default:
			cout << "Escolha uma alternativa válida!" << endl;
	}
}