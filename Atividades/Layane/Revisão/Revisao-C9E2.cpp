/**********************************************************
- Autor:     Layane Quissak
- Descri��o: C9E2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string.h>


using namespace std;

int main()
{

    char eu[2] = {'o'};
    char tu[3] = {'a','s'};
    char ele[2] = {'a'};
    char nos[5] = {'a','m','o','s'};
    char vos[4] = {'a','i','s'};
    char eles[3] = {'a','m'};

    char palavra [20];
    int n = 0;

    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Palavra: "  ;
    cin >> palavra ;

    n = strlen(palavra);


    if (palavra[n-2] == 'a' && palavra[n-1] == 'r')
    {

    palavra[n-2]='\0';

        cout << "Eu " << palavra << eu ;
        cout << endl ;
        cout << "Tu " << palavra << tu ;
         cout << endl ;
        cout << "Ele " << palavra << ele ;
         cout << endl ;
        cout << "N�s " << palavra << nos ;
         cout << endl ;
        cout << "V�s " << palavra << vos ;
         cout << endl ;
        cout << "Eles " << palavra << eles ;
    }

    else { cout << "N�o � verbo terminado em AR" ;}


    return 0;
}
