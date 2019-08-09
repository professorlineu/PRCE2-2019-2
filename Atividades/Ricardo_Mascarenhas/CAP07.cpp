/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descrição: Matriz
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;


int main()

{

    setlocale(LC_ALL,"");
    system("color F1");


    int matriz[3][4];
    int i,j ;
    int iPar = 0;
    int iImpar = 0;

	for(i=0; i<3; i++)
    {
		for(j=0; j<4; j++)
		{
        cout << "Os 4 primeiros valores serão referentes a primeira linha, os 4 seguintes a terceira e os 4 últimos a última linha. " << endl ;
        cout << endl ;

        cout << "Digite um número:  " ;
        cin >> matriz[i][j] ;

        if (matriz[i][j] % 2 == 0 )
        {
            iPar++;
        }
        else
        {
            iImpar++;
        }

		}
    }


    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            cout << matriz [i][j] << " " ;
        }
        cout << "\n" ;
    }


    cout << "\n" ;

    cout << "Dos números digitados " << iPar << " são pares. " << endl ;
    cout << endl ;
     cout << "Dos números digitados " << iImpar << " são ímpares. " << endl ;











    return 0;
}
