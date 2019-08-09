/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descrição: Manipulando caracteres
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string.h>


using namespace std;

int main()
{
    //Declaração de variáveis

    char eu[2] = {'o'};
    char tu[3] = {'a','s'};
    char ele[2] = {'a'};
    char nos[5] = {'a','m','o','s'};
    char vos[4] = {'a','i','s'};
    char eles[3] = {'a','m'};

    char palavra [20];
    int n = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "PALAVRA: "  ;
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
        cout << "Nós " << palavra << nos ;
         cout << endl ;
        cout << "Vós " << palavra << vos ;
         cout << endl ;
        cout << "Eles " << palavra << eles ;
    }

    else { cout << " Palavra não terminada em AR." ;}







    return 0;
}
