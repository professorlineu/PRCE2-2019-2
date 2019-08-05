//Autor: Victor Hugo Magalhães
//Descrição: Cap05 - Ex23
#include <iostream>
using namespace std;
//Declaração de variáveis
int iOpt = 0;
float fSalario = 0;
float fSalarioFerias = 0;
float fSalarioDT = 0;
int iMeses = 13;
//Prototipação de funções
void salario();
void ferias();
void dt();

int main(){
cout << "Bem-vindo" << endl;

while(iOpt != 4){
	cout <<"\n***********Menu***********" << endl;
	cout << "1.Novo Salário" << endl;
	cout << "2.Férias" << endl;
	cout << "3.Décimo Terceiro" << endl;
	cout << "4.Sair" << endl;
	cout << "**************************" << endl;
	cout << "Sua entrada: ";
	cin >> iOpt;

	switch(iOpt)
	{
		case 1:
			salario();
		break;

		case 2:
			ferias();
		break;

		case 3:
			dt();
		break;

		case 4:
			cout << "Programa finalizado!" << endl;
		break;

		default:
			cout << "Selecione uma opção válida!" << endl;
		break;
	}//fim switch
}//fim while
}//fim main

void salario(){
	cout << "\nInsira o Salário do funcionário: ";
		cin >> fSalario;
		if(fSalario < 210)
		{
			cout << "\nO novo salário será de: R$ " << fSalario * 1.15 << endl;
		}
		else if (fSalario >= 210 && fSalario <= 600)
		{
			cout << "\nO novo salário será de: R$ " << fSalario * 1.10 << endl;
		}
		else
		{
			cout << "\nO novo salário será de: R$ " << fSalario * 1.05 << endl;
 		}
}//fim função novo salario

void ferias(){
	cout << "\nInsira o Salário do funcionário: ";
	cin >> fSalarioFerias;
	cout << "\nO funcionário receberá de férias: R$ " <<fSalarioFerias + (fSalarioFerias)/3 << endl;
}//fim função férias

void dt(){ //dt = decimo terceiro
	while (iMeses > 12 || iMeses < 0){
		cout <<"\nInsira o Salário do funcionário: ";
		cin >> fSalarioDT;
		cout << "\nInsira o número de meses trabalhados pelo funcionário: ";
		cin >> iMeses;
		cout << "\nO funcionário receberá: R$ " << fSalarioDT * (iMeses)/12 << endl;
	}//fim while
}//fim função 13°