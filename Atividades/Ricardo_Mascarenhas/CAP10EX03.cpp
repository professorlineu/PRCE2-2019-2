/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descrição: Pesquisa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

struct pesquisa
{
    char cS[50];
    float Alt[50];
    int Idade[50];
    char cO[50];
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
    int mp = 0;
    int iSoma = 0 ;
    int iMed = 0 ;
    int ii = 0;



    cout << "PESQUISA" << endl ;



    for (i=0; i<3; i++)
    {


        if (ip.Idade[i] > Maior)
        {
            Maior = ip.Idade[i] ;
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


    cout << "\n" ;

    cout << "Informe a sua altura: " ;
    cin >> ip.Alt[i] ;

    cout << "\n" ;

    cout << "Informe sua idade: " ;
    cin >> ip.Idade[i] ;

    Maior = ip.Idade[0] ;

    cout << "\n" ;

    cout << "Informe a cor de seus olhos: (V-verde, A-azul, C-castanho) " ;
    cin >> ip.cO[i] ;

    cout << "\n" ;

      if (ip.cS[i] == 'f'  || ip.cS[i] == 'F')
      {
          cout << " " ;
      }
      else if (ip.cO[i] = 'v' && ip.Alt[i] < 1.70)
      {
          mp ++;
      }
      else if (ip.Idade[i] >= 20 && ip.Idade[i] <= 45)
      {
          mp++;
      }



      if (ip.cO[i] == 'c' || ip.cO[i] == 'C' && ip.Alt[i] > 1.60)
      {
          ii++;
          iSoma = ( ip.Idade[i] + iSoma );
          iMed = ( iSoma / ii ) ;
      }



    }



    cout << "RESULTADOS" << endl ;
    cout << "A média da idade das pessoas com olhos castanhos, e como altura superiro a 1,69m é: " << iMed << endl;
    cout << "A maior idade informada é: " << Maior << endl ;
    cout << "Na pesquisa " << mp << " mulheres apresentam idade entre 20 e 45 anos ou possuem olhos verdem e altura inferior a 1,70m. " << endl ;
    cout << "Apenas " << (m*100)/i << " % dos entrevistados são homens. " ;


    return 0;
}
