#include <iostream>
#include "cadastro.h"
#include <locale.h>
#include <cstdlib>
#include <string>

using namespace std;

void Menu ();

int main()
{
    CADASTRO C1[10];
    int iQuant = 0 ;
    string sNome[5];
    int iCod[5];
    int i = 0;
    float fSalario[5];
    int iTempo[5];
    int p = 0 ;
    int Op = 0;
    float fSal = 0;
    float fSalMenor = 0;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;

    cout << "CADASTRO DE FUNCION�RIOS" << endl;
    cout << "\n";
    cout << "Seja Bem-Vindo a plataforma de cadastro de funcion�rios." <<endl;
    cout << "\n";

    cout << "Informe quantos funcion�rios ser�o cadastrados: " ;
    cin >> iQuant ;

    system("CLS");

    for (int i=0; i < iQuant; i++)
    {
        cin.ignore();

        cout << "Informe o nome funcion�rio: " ;
        getline(cin,sNome[i]);
        C1[i].setNome(sNome[i]);


        cout << "Informe o c�digo do funcion�rio: " ;
        cin >> iCod[i];
        C1[i].setCodigo(iCod[i]);

        cout << "Informe o sal�rio do funcion�rio: R$ " ;
        cin >> fSalario[i];
        C1[i].setSalario(fSalario[i]);

        fSalMenor = fSalario [0];

        if (fSalMenor > fSalario [i])
        {
            fSalMenor = fSalario[i];
        }

        cout << "Informe quantos anos o funcion�rio j� est� trabalhando na empresa: " ;
        cin >> iTempo[i] ;
        C1[i].setTempo(iTempo[i]);

        system("CLS");
    }


    //***********************************************************************************************



    cout << "OP��ES: " << endl ;
    cout << " 1 - SEGUIR PARA O MENU. " << endl ;
    cout << " 2 - SAIR DO PROGRAMA. " << endl ;
    cin >> p ;

    system("CLS");


    //for (int p = 0; p == 1; p++)
    if (p==1)
    {

        Menu ();
        cout << "INFORME A OP��O DESEJADA: " ;
        cin >> Op ;

        system("CLS");


        switch (Op)
        {
        case 1:
            cout << "INFORME O SAL�RIO A SER CONSULTADO: R$ " << endl ;
            cin >> fSal;

            cout << "RELAT�RIOS:" << endl ;
            cout << "FUNCION�RIOS COM SAL�RIO IGUAL OU INFERIOR AO DIGITADO" << endl;
            cout << "\n";

            for (int i = 0; i < iQuant; i++)
            {
                if (fSalario [i] <= fSal)
                {
                    c1++;
                    cout << "\n";
                    cout << "Nome do Funcion�rio: " << sNome[i] ;
                    cout << "\n";
                    cout << "C�digo do funcion�rio: " << iCod[i];
                    cout << "\n";
                    cout << "Sal�rio do funcion�rio: R$ " << fSalario[i];
                    cout << "\n";
                }
            }
            if (c1 ==0)
            {
                cout << "Nenhum funcion�rio est� nessa categoria. " << endl ;
                cout << "\n";
            }
            cout << "\n";
            cout << "FUNCION�RIOS COM SAL�RIO SUPERIOR AO DIGITADO: " << endl ;
            cout << "\n";

            for (int i = 0; i < iQuant; i++)
            {
                if (fSalario [i] > fSal)
                {
                    c2++;
                    cout << "\n";
                    cout << "Nome do Funcion�rio: " << sNome[i] ;
                    cout << "\n";
                    cout << "C�digo do funcion�rio: " << iCod[i];
                    cout << "\n";
                    cout << "Sal�rio do funcion�rio: R$ " << fSalario[i];
                    cout << "\n";
                }
            }
            if (c2 ==0)
            {
                cout << "Nenhum funcion�rio est� nessa categoria. " << endl ;
                cout << "\n";
            }

            Menu ();
            cout << "\n";
            cout << "INFORME A OP��O DESEJADA: " ;
            cin >> Op ;

            system("CLS");

            if (Op==2)
            {

                cout << " O valor do menor sal�rio pago � de: R$ " << fSalMenor;
                cout << "\n";
                cout << "Funcion�rios com sal�rio igual ao menor sal�rio: " << endl ;
                cout << "\n";
                for (int i = 0; i < iQuant; i++)
                {
                    if (fSalario [i] == fSalMenor)
                    {
                        c3++;
                        cout << "\n";
                        cout << "Nome do Funcion�rio: " << sNome[i] ;
                        cout << "\n";
                        cout << "C�digo do funcion�rio: " << iCod[i];
                        cout << "\n";
                        cout << "Sal�rio do funcion�rio: R$ " << fSalario[i];
                        cout << "\n";
                    }
                }
                if (c3 ==0)
            {
                cout << "Nenhum funcion�rio est� nessa categoria. " << endl ;
                cout << "\n";
            }

            }
            if (Op==3)
            {
                cout << "FUNCION�RIOS ISENTOS DE IMPOSTOS: " << endl ;
                for (int i = 0; i < iQuant; i++)
                {
                    if (fSalario [i] < 1500 && 2 <= iTempo [i] <= 4)
                    {
                        c4++;
                        cout << "\n";
                        cout << "Nome do Funcion�rio: " << sNome[i] ;
                        cout << "\n";
                        cout << "C�digo do funcion�rio: " << iCod[i];
                        cout << "\n";
                        cout << "Sal�rio do funcion�rio: R$ " << fSalario[i];
                        cout << "\n";
                    }
                }
                if (c4 ==0)
            {
                cout << "Nenhum funcion�rio est� nessa categoria. " << endl ;
                cout << "\n";
            }


            }

            break ;
        case 2:
            cout << " O valor do menor sal�rio pago � de: R$ " << fSalMenor;
            cout << "\n";
            cout << "Funcion�rios com sal�rio igual ao menor sal�rio: " << endl ;
            cout << "\n";
            for (int i = 0; i < iQuant; i++)
            {
                if (fSalario [i] == fSalMenor)
                {
                    c1++;
                    cout << "\n";
                    cout << "Nome do Funcion�rio: " << sNome[i] ;
                    cout << "\n";
                    cout << "C�digo do funcion�rio: " << iCod[i];
                    cout << "\n";
                    cout << "Sal�rio do funcion�rio: R$ " << fSalario[i];
                    cout << "\n";
                }

            }
            if (c1 ==0)
            {
                cout << "Nenhum funcion�rio est� nessa categoria. " << endl ;
                cout << "\n";
            }

            Menu ();
            cout << "\n";
            cout << "INFORME A OP��O DESEJADA: " ;
            cin >> Op ;

            system("CLS");

            if (Op == 1)
            {
                cout << "INFORME O SAL�RIO A SER CONSULTADO: R$ " << endl ;
                cin >> fSal;

                cout << "RELAT�RIOS:" << endl ;
                cout << "FUNCION�RIOS COM SAL�RIO IGUAL OU INFERIOR AO DIGITADO" << endl;
                cout << "\n";

                for (int i = 0; i < iQuant; i++)
                {
                    if (fSalario [i] <= fSal)
                    {
                        c2++;
                        cout << "\n";
                        cout << "Nome do Funcion�rio: " << sNome[i] ;
                        cout << "\n";
                        cout << "C�digo do funcion�rio: " << iCod[i];
                        cout << "\n";
                        cout << "Sal�rio do funcion�rio: R$ " << fSalario[i];
                        cout << "\n";
                    }
                }
                if (c2 ==0)
            {
                cout << "Nenhum funcion�rio est� nessa categoria. " << endl ;
                cout << "\n";
            }
                cout << "\n";
                cout << "FUNCION�RIOS COM SAL�RIO SUPERIOR AO DIGITADO: " << endl ;
                cout << "\n";

                for (int i = 0; i < iQuant; i++)
                {
                    if (fSalario [i] > fSal)
                    {
                        c3++;
                        cout << "\n";
                        cout << "Nome do Funcion�rio: " << sNome[i] ;
                        cout << "\n";
                        cout << "C�digo do funcion�rio: " << iCod[i];
                        cout << "\n";
                        cout << "Sal�rio do funcion�rio: R$ " << fSalario[i];
                        cout << "\n";
                    }
                }
                if (c3 ==0)
            {
                cout << "Nenhum funcion�rio est� nessa categoria. " << endl ;
                cout << "\n";
            }
            }

            if (Op==3)
            {
                cout << "FUNCION�RIOS ISENTOS DE IMPOSTOS: " << endl ;
                for (int i = 0; i < iQuant; i++)
                {
                    if (fSalario [i] < 1500 && 2 <= iTempo [i] <= 4)
                    {
                        c4++;
                        cout << "\n";
                        cout << "Nome do Funcion�rio: " << sNome[i] ;
                        cout << "\n";
                        cout << "C�digo do funcion�rio: " << iCod[i];
                        cout << "\n";
                        cout << "Sal�rio do funcion�rio: R$ " << fSalario[i];
                        cout << "\n";
                    }
                }
                if (c4 ==0)
            {
                cout << "Nenhum funcion�rio est� nessa categoria. " << endl ;
                cout << "\n";
            }


            }
            break;
        case 3:
            cout << "FUNCION�RIOS ISENTOS DE IMPOSTOS: " << endl ;
            for (int i = 0; i < iQuant; i++)
            {
                if (fSalario [i] < 1500 && 2 <= iTempo [i] <= 4)
                {
                    c1++;
                    cout << "\n";
                    cout << "Nome do Funcion�rio: " << sNome[i] ;
                    cout << "\n";
                    cout << "C�digo do funcion�rio: " << iCod[i];
                    cout << "\n";
                    cout << "Sal�rio do funcion�rio: R$ " << fSalario[i];
                    cout << "\n";
                }
            }
            if (c1 ==0)
            {
                cout << "Nenhum funcion�rio est� nessa categoria. " << endl ;
                cout << "\n";
            }

            Menu ();
            cout << "\n";
            cout << "INFORME A OP��O DESEJADA: " ;
            cin >> Op ;

            system("CLS");

            if (Op == 1)
            {
                cout << "INFORME O SAL�RIO A SER CONSULTADO: R$ " << endl ;
                cin >> fSal;

                cout << "RELAT�RIOS:" << endl ;
                cout << "FUNCION�RIOS COM SAL�RIO IGUAL OU INFERIOR AO DIGITADO" << endl;
                cout << "\n";

                for (int i = 0; i < iQuant; i++)
                {
                    if (fSalario [i] <= fSal)
                    {
                        c2++;
                        cout << "\n";
                        cout << "Nome do Funcion�rio: " << sNome[i] ;
                        cout << "\n";
                        cout << "C�digo do funcion�rio: " << iCod[i];
                        cout << "\n";
                        cout << "Sal�rio do funcion�rio: R$ " << fSalario[i];
                        cout << "\n";
                    }
                }
                if (c2 ==0)
            {
                cout << "Nenhum funcion�rio est� nessa categoria. " << endl ;
                cout << "\n";
            }
                cout << "\n";
                cout << "FUNCION�RIOS COM SAL�RIO SUPERIOR AO DIGITADO: " << endl ;
                cout << "\n";

                for (int i = 0; i < iQuant; i++)
                {
                    if (fSalario [i] > fSal)
                    {
                            c3++;
                        cout << "\n";
                        cout << "Nome do Funcion�rio: " << sNome[i] ;
                        cout << "\n";
                        cout << "C�digo do funcion�rio: " << iCod[i];
                        cout << "\n";
                        cout << "Sal�rio do funcion�rio: R$ " << fSalario[i];
                        cout << "\n";
                    }
                }
                if (c3 ==0)
            {
                cout << "Nenhum funcion�rio est� nessa categoria. " << endl ;
                cout << "\n";
            }
            }

            if (Op==2)
            {

                cout << " O valor do menor sal�rio pago � de: R$ " << fSalMenor;
                cout << "\n";
                cout << "Funcion�rios com sal�rio igual ao menor sal�rio: " << endl ;
                cout << "\n";
                for (int i = 0; i < iQuant; i++)
                {
                    if (fSalario [i] == fSalMenor)
                    {
                        c4++;
                        cout << "\n";
                        cout << "Nome do Funcion�rio: " << sNome[i] ;
                        cout << "\n";
                        cout << "C�digo do funcion�rio: " << iCod[i];
                        cout << "\n";
                        cout << "Sal�rio do funcion�rio: R$ " << fSalario[i];
                        cout << "\n";
                    }
                }
                if (c4 ==0)
            {
                cout << "Nenhum funcion�rio est� nessa categoria. " << endl ;
                cout << "\n";
            }

            }


            break;
        default:
            cout << "C�digo inv�lido!!!" << endl;

        }
    }





    return 0;
}


void Menu ()
{
    cout << "\n";
    cout << "*******" << endl ;
    cout << " MENU: " << endl ;
    cout << " 1 - CONSULTAR SAL�RIO. " << endl ;
    cout << " 2 - CONSULTAR MENOR SAL�RIO PAGO. " << endl ;
    cout << " 3 - CONSULTAR FUNCION�RIOS ISSENTOS DE IMPOSTOS. " << endl ;
    cout << "***************************************************************************" << endl ;
}




