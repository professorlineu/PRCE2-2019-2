/**********************************************************
- Autor:     Layane Quissak
- Descri��o: Cap 10 Ex 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

struct pesquisa
{
    char cS[20];
    float Sal[20];
    int Idade[20];
    int fil[20];
};


int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    pesquisa ip;
    int i = 0;
    int m = 0;
    int f = 0;
    int Maior = 0;
    int Menor = 0;
    int mp = 0;
    int iSoma = 0 ;
    int iMed = 0 ;
    int ii = 0;

    for (i=0; i<20; i++)
    {


        if (ip.Idade[i] > Maior)
        {
            Maior = ip.Idade[i] ;
        }

        if (ip.Idade[i] < Menor)
        {
            Menor = ip.Idade[i] ;
        }


    cout << "Informe seu sexo:(m/f) " ;
    cin >> ip.cS[i] ;

    if (ip.cS[i]=='M' || ip.cS[i]=='m')
    {
        m++ ;
    }
    else
    {
        f++;

    }

    cout << "Informe sua renda familiar: " ;
    cin >> ip.Sal[i] ;

    iSoma = iSoma + ip.Sal[i];
    iMed = iSoma / i ;

    cout << "Informe sua idade: " ;
    cin >> ip.Idade[i] ;

    Maior = ip.Idade[0] ;

    cout << "\n" ;

    cout << "Informe quantos filhos voc� tem: " ;
    cin >> ip.fil[i] ;

    cout << "\n" ;

    if (ip.cS[i] == 'f' && ip.fil[i] > 2 && ip.Sal[i] < 600)
    {
        mp++;
    }

  }

    cout << "RESULTADOS" << endl ;

    cout << "A m�dia dos sal�rios � de: R$" << iMed << endl ;
    cout << "O maior sal�rio informado �: " << Maior << endl ;
    cout << "O Menor sal�rio informado �: " << Menor << endl ;
    cout << mp << " mulhers t�m mais de 2 filhos, e possuem renda familiar inferior a R$600,00." << endl;

    return 0;
}
