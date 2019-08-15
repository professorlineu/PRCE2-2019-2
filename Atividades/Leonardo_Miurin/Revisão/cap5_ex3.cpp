
/**********************************************************
- Autor:     Leonardo Miurin
- Descrição: cap. 5/exercício 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int iIdade;
int iN = 0;
int i15, i30, i45, i60, infinito;
float f15, finfinito;

int main()
{
    setlocale(LC_ALL,"");

    do{
        cout << "Idade: " << endl;
        cin >> iIdade;
        iN++;

        if(iIdade <= 15){
           i15++;
        } else if(iIdade > 15 && iIdade <= 30){
           i30++;
        } else if(iIdade > 30 && iIdade <= 45){
           i45++;
        } else if(iIdade > 45 && iIdade <= 60){
           i60++;
        } else {
           infinito++;
        }

    } while(iN<8);

        cout << "Quantidade de pessoas com idade inferior a 15 anos: " << i15 << "\nQuantidade de pessoas com idade entre 16 e 30 anos: " << i30 << "\nQuantidade de pessoas com idade entre 31 e 45 anos: " << i45 << "\nQuantidade de pessoas com idade entre 46 e 60 anos: " << i60 << "\nQuantidade de pessoas com idade superior a 60 anos: " << infinito << endl;

        f15 = (i15*100)/iN;
        finfinito = (infinito*100)/iN;

        cout << "\nPorcentagem de pessoas com idade inferior a 15 anos em relação ao total de idades: " <<
         f15 << "%\nPorcentagem de pessoas com idade superior a 60 anos em relação ao total de idades: " <<
         finfinito << "%" << endl;

    return 0;
}
