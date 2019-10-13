// Thiago Vieira Marcondes - 170379x
// Exercicio 5 - Ex17_Cap6

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int MDC (int Num1, int Num2)
{
    int Resto;

     //O pera��es:
    Resto = Num1 % Num2;

    while (Resto != 0)
    {
        Num1 = Num2;
        Num2 = Resto;
        Resto = Num1 % Num2;
    }

    return Num2;
}


int main ()
{
    setlocale(LC_ALL,"");

    int N1, N2;

    //Entrada de dados atrav�s do usu�rio.
    cout << "Insira o primeiro n�meo: ";
    cin >> N1;

    cout << "\nInsira o segundo n�meor: ";
    cin >> N2;


    cout << "\nO M�ximo Divisor Comum entre os n�meros inseridos � de: " << MDC (N1, N2) << endl;
}

