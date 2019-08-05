//Autor: Victor Hugo Magalhães
//Descrição: Cap04 - Ex25
#include <iostream>
using namespace std;
//Declaração de variáveis
int iHorasExtras = 0;
int iHorasFaltadas = 0;
float fMinutos = 0;
//Prototipação de funções
void gratificacao();

int main(){
	
	cout << "Entre com o número de horas extras: ";
	cin >> iHorasExtras;
	cout << "\nEntre com o número de horas faltadas:";
	cin >> iHorasFaltadas;
	gratificacao();
	cout << fMinutos;

	if(fMinutos >= 2400)
	{
		cout << "\nBonificação de R$ 500,00" << endl;
	}
	else if(fMinutos < 2400 && fMinutos > 1800)
	{
		cout << "\nBonificacação de R$ 400,00" << endl;
	}
	else if(fMinutos <= 1800 && fMinutos >= 1200)
	{
		cout << "\nBonificação de R$ 300,00" << endl;
	}
	else if(fMinutos < 1200 && fMinutos >= 600)
	{
		cout << "\nBonificação de R$ 200,00" << endl;
	}
	else
	{
		cout << "\nBonificação de R$ 100,00" << endl;
	}
}//fim main

void gratificacao(){
	fMinutos = iHorasExtras - (2/3*(iHorasFaltadas));
	fMinutos = fMinutos * 60;
}//fim função gratificacao