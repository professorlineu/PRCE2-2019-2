//Autor: Victor Hugo Magalhães
//Descrição: Cap04 - Ex23

#include <iostream>

using namespace std;

//Declaração de variáveis
int iCodigo = 0;
int iQuant = 0;
float fPreco = 0;
float fVT = 0; //Valor Total
void PT(); //Função de Cálculo
void Desconto(); //Função de Desconto

int main() {
  
	cout << "Entre com o código do produto: ";
	cin >> iCodigo;
	if(iCodigo >= 1 && iCodigo <= 40)
	{
		cout << "Entre com a quantidade comprada: ";
		cin >> iQuant;

		cout << "\n";
		PT(); //Função Cálculo Valor Total
		Desconto(); //Função Cálculo Valor com Desconto
	}
	else{
		cout << "Código Inválido!!!" << endl;
		cout << "Insira um código válido!" << endl;
	}
	
}//fim MAIN

void PT() //preço total sem desconto
{ 
	if(iCodigo >= 1 && iCodigo <= 10)
	{
		fPreco = 10.00;
		fVT = fPreco * iQuant;
		cout << "Preço unitário: " << fPreco << endl;
		cout << "Preço s/ desconto: " << fVT << endl;	
	}	

	else if(iCodigo > 10 && iCodigo <= 20)
	{
		fPreco = 15.00;
		fVT = fPreco * iQuant;
		cout << "Preço unitário: " << fPreco << endl;
		cout << "Preço s/ desconto: " << fVT << endl;
	}

	else if(iCodigo > 20 && iCodigo <= 30)
	{
		fPreco = 20.00;
		fVT = fPreco * iQuant;
		cout << "Preço unitário: " << fPreco << endl;
		cout << "Preço s/ desconto: " << fVT << endl;
	}

	else if(iCodigo > 30 && iCodigo <= 40)
	{
		fPreco = 30.00;
		fVT = fPreco * iQuant;
		cout << "Preço unitário: " << fPreco << endl;
		cout << "Preço s/ desconto:" << fVT << endl;
	}
}//fim função PT

void Desconto()
{
	if(fVT <= 250.00)
	{
		cout << "Desconto de 5% sobre o valor total!" << endl;
		cout << "Desconto de: R$ " << fVT - fVT * 0.95 << endl;
		cout << "Valor final: R$ " << fVT * 0.95 << endl;
	}

	else if(fVT > 250.00 && fVT <= 500.00)
	{
		cout << "Desconto de 10% sobre o valor total!" << endl;
		cout << "Desconto de: R$ " << fVT - fVT * 0.90 << endl;
		cout << "Valor final: R$ " << fVT * 0.90 << endl;
	}
	
	else
	{
		cout << "Desconto de 15% sobre o valor total!" << endl;
		cout << "Desconto de: R$ " << fVT - fVT * 0.85 << endl;
		cout << "Valor final: R$ " << fVT * 0.85 << endl;
	}
}//fim desconto
