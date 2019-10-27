/**********************************************************
- Autor:     Layane Quissak
- Descrição: Capítulo 7- Ex 14
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{

    int matriz[2] [3];
    int i = 0;
    int j = 0;
    setlocale(LC_ALL,"");
    system("color F1");

    while (i <= 1 && j <= 2)
    {
        cout << "Digite o número que corresponda a posição desejada na matriz: ";
        cin >> matriz [i] [j];

        cout << endl;

        if(i==0)
        {
            j++;

            if(j==3)
            {
                j=0;
                i=1;
            }
        }

        else if(i==1)
        {
            j++;

            if(j==3)
            {
                j=0;
                i=2;
            }
        }

    }

    i=0;
    j=0;

    cout << "Os números que não pertencem ao intervalo [5,15] são: ";

    while(i <= 1 && j <= 2)
    {



        if(matriz [i] [j] > 15 || matriz [i] [j] <5)
        {
            cout << matriz [i] [j] << " ";
        }


        if(i==0)
        {
            j++;

            if(j==3)
            {
                j=0;
                i=1;
            }
        }

        else if(i==1)
        {
            j++;

            if(j==3)
            {
                j=0;
                i=2;
            }
        }

    }


    return 0;
}
