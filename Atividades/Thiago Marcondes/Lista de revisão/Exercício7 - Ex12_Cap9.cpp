#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string.h>

using namespace std;

int main()
{
    char Data[10], Mes[10];
    int Contador=0;

    setlocale(LC_ALL,"");

    cout << "ISIRA A DATA DA SEGUINTE MANEIRA: DD/MM/AAAA (INCLUINDO AS BARRAS): ";
    cin >> Data;


        while(Data[3] != '0' && Data[3] != '1')
        {
        cout << "OS DADOS INSERIDOS SÃO INVÁLIDOS." << endl;
        cout << "ISIRA A DATA DA SEGUINTE MANEIRA: DD/MM/AAAA: ";
        cin >> Data;
        }

        while(Contador<3)
        {
        cout << Data[Contador];
        Contador++;
        }


        if(Data[3] == '0')
        {
            if(Data[4] == '1')
            {
            cout << " de Janeiro de ";
            }
            else if(Data[4] == '2')
            {
            cout << " de Fevereiro de ";
            }
            else if(Data[4] == '3')
            {
            cout << " de Março de ";
            }
            else if(Data[4] == '4')
            {
            cout << " de Abril de ";
            }
            else if(Data[4] == '5')
            {
            cout << " de Maio de ";
            }
            else if(Data[4] == '6')
            {
            cout << " de Junho de ";
            }
            else if(Data[4] == '7')
            {
            cout << " de Julho de ";
            }
            else if(Data[4] == '8')
            {
            cout << " de Agosto de ";
            }
            else if(Data[4] == '9')
            {
            cout << " de Setembro de";
            }
        }
        else if (Data[3] == '1')
        {
            if (Data[4] == '0')
            {
            cout << " de Outubro de ";
            }
            else if (Data[4] == '1')
            {
            cout << " de Novembro de ";
            }
            else if (Data[4] == '2')
            {
            cout << " de Dezembro de ";
            }
        }

    Contador = 5;

        while(Contador > 4 && Contador < 10)
        {
        cout << Data[Contador];
        Contador++;
        }

    return 1;
}
