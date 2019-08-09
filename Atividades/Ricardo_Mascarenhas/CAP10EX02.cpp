/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descrição: Pesquisa Prefeitura
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

 struct Pesquisa
    {
        float  iSal = 0;
        int iFil = 0 ;
        char cSex = 'f';
    };


int main()
{

    setlocale(LC_ALL,"");
    system("color F1");



    Pesquisa i;
    char ic = 's';
    float iMedSal = 0 ;
    float iMedSal1 = 0 ;
    int iMedFil = 0;
    int iMedFil1 = 0;
    int m = 0 ;
    int f = 0 ;
    float Maior = 0;
    int iS = 0;


    cout << "PESQUISA DA PREFEITURA" << endl ;

    cout << "Informe o seu salário: " ;
    cin >> i.iSal ;

    Maior = i.iSal ;

    cout << "\n" ;
    cout << "Informe quantos filhos você tem: " ;
    cin >> i.iFil ;

    cout << "\n";
    cout << "Informe seu sexo: (M/F) " ;
    cin >> i.cSex ;


    cout << "\n" ;
    cout << "Cadastrar uma nova pessoa? (S/N) - LIMITE DE 20 CADASTROS " ;
    cin >> ic ;


    while (ic == 's' || ic =='S' && iS < 20)
    {
        cout << "\n";


    if (i.iSal > Maior)Maior = i.iSal;

    cout << "Informe o seu salário: " ;
    cin >> i.iSal ;

    Maior = i.iSal ;
    if (i.iSal > Maior)Maior = i.iSal;

    iMedSal = i.iSal + iMedSal;
    iMedSal1 = iMedSal/(20);


    cout << "\n" ;
    cout << "Informe quantos filhos você tem: " ;
    cin >> i.iFil ;

    iMedFil = i.iFil + iMedFil;
    iMedFil1 = iMedFil / 20;

    cout << "\n";
    cout << "Informe seu sexo: (M/F) " ;
    cin >> i.cSex ;


    cout << "\n" ;
    cout << "Cadastrar uma nova pessoa? (S/N) - LIMITE DE 20 CADASTROS " ;
    cin >> ic ;

    if (ic == 's' || ic == 'S'){iS++;}


      if (i.cSex == 'f' || i.cSex == 'F' && i.iSal > 1000)
    {
        f++;
    }
    else
    {
        m++;
    }

    }



    cout << "RESULTADOS OBTIDOS" << endl ;
    cout << "\n" ;

    cout << "MÉDIA DOS SALÁRIOS: " << iMedSal1 ;
    cout << "\n" ;
    cout << "MÉDIA DO NÚMERO DE FILHOS: " << iMedFil1 ;
    cout << "\n" ;
    cout << "MAIOR SALÁRIO: " << Maior ;
    cout << "\n";
    cout << "Das 20 pessoas entrevistadas, " << (100*f)/20 << " %, correpondem a mulheres com salário superior a R$ 1000,00." << endl;




    return 0;
}
