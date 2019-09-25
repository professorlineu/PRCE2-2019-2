#include <iostream>
#include "Filmes.h"

using namespace std;

int main()
{
    int iCont;

    Filmes F1[1];

    for(iCont = 0; iCont <= 1; iCont++)
    {
        F1[iCont].setNome();
        F1[iCont].setID();
        F1[iCont].setAno();
        cout << "============================================"<< endl;

        F1[iCont].getNome();
        F1[iCont].getID();
        F1[iCont].getAno();
        cout << endl;
        cin.ignore();
        cout << "========================================="<< endl;
    }

    return 0;
}
