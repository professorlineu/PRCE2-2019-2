
/**********************************************************
- Autor:     Leonardo Miurin
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int matriz[3][5];
int i,j;
int iCont = 0;

int main()
{
    setlocale(LC_ALL,"");

    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            cout << "Matriz[" << i << "][" << j << "]" << endl;
            cin >> matriz[i][j];
            if(matriz[i][j] >= 15 && matriz[i][j] <= 20){
                iCont++;
            }
        }
    }
            cout << "Número de elementos entre 15 e 20: " << iCont << endl;




    return 0;
}
