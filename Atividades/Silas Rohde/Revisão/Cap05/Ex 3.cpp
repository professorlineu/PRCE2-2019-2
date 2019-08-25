/**********************************************************
- Autor:     Silas Barboza Rohde
- Descrição: Lista de revisão - Cap05 ex 03
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int iDade = 0;
int iRepeat = 0;
float fCont015 = 0;
float fCont1630 = 0;
float fCont3045 = 0;
float fCont4560 = 0;
float fCont60 = 0;


int main()
{
    while(iRepeat < 8)
    {
        cout << "Informe sua idade: ";
        cin >> iDade;

        if (iDade > 0 && iDade < 16)
        {
            fCont015++;
        }
        else if (iDade > 15  && iDade <= 30)
        {
            fCont1630++;
        }
        else if (iDade > 30  && iDade <= 45)
        {
            fCont3045++;
        }
        else if (iDade > 45 && iDade <= 60)
        {
            fCont4560++;
        }
        else if (iDade > 60)
        {
            fCont60++;
        }
        else
        {
            cout << "Informação errada!";
        }

        iRepeat++;
    }

    cout << "\nForam cadastradas " << fCont015 << " pessoas entre 0 e 15 anos" << endl;
    cout << "Foram cadastradas " << fCont1630 << " pessoas entre 16 e 30 anos" << endl;
    cout << "Foram cadastradas " << fCont3045 << " pessoas entre 31 e 45 anos" << endl;
    cout << "Foram cadastradas " << fCont4560 << " pessoas entre 46 e 60 anos" << endl;
    cout << "Foram cadastradas " << fCont60 << " pessoas com mais de 60 anos" << endl;

    cout << "\nA porcentagem de pessoas entre 0 e 15 anos são de " << (fCont015 / 8) * 100 << "%" << endl;
    cout << "A porcentagem de pessoas com mais de 60 anos são de " << (fCont60 / 8) * 100 << "%" << endl;


    return 0;

}
