/**********************************************************
- Autor:     Rebeca Lorhuama de Castro Saraiva
- Descrição: Cálculo do peso ideal
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

    //Declaração de variáveis
    char cSexo;
    float fAltura = 0;
    float fPesoIdeal = 0;
    float PesoIdeal();

int main()
{

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "PESO IDEAL" << endl << endl;

    cout << "Considere 'M' para Masculino e 'F' para Feminino" << endl;

    cout << "\nInforme o seu sexo: ";
    cin >> cSexo;

    cout << "Informe a sua altura (em metros): ";
    cin >> fAltura;

    PesoIdeal ();

    return 0;
}

float PesoIdeal()
{
    if (cSexo == 'M' || cSexo == 'm')
    {
        fPesoIdeal = (72.7 * fAltura - 58);

        cout << "O seu peso ideal é: " << fPesoIdeal << endl;
    }

    else if (cSexo == 'F' || cSexo == 'f')
    {
        fPesoIdeal = (62.1 * fAltura - 44.7);

        cout << "O seu peso ideal é: " << fPesoIdeal << endl;
    }

    else
    {
        cout << "Informação inválida";
    }
}
