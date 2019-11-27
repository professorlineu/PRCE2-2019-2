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

    cout << "CADASTRO DE FUNCIONÁRIOS" << endl;
    cout << "\n";
    cout << "Seja Bem-Vindo a plataforma de cadastro de funcionários." <<endl;
    cout << "\n";

    cout << "Informe quantos funcionários serão cadastrados: " ;
    cin >> iQuant ;

    system("CLS");

    for (int i=0; i < iQuant; i++)
    {
        cin.ignore();

        cout << "Informe o nome funcionário: " ;
        getline(cin,sNome[i]);
        C1[i].setNome(sNome[i]);


        cout << "Informe o código do funcionário: " ;
        cin >> iCod[i];
        C1[i].setCodigo(iCod[i]);

        cout << "Informe o salário do funcionário: R$ " ;
        cin >> fSalario[i];
        C1[i].setSalario(fSalario[i]);

        fSalMenor = fSalario [0];

        if (fSalMenor > fSalario [i])
        {
            fSalMenor = fSalario[i];
        }

        cout << "Informe quantos anos o funcionário já está trabalhando na empresa: " ;
        cin >> iTempo[i] ;
        C1[i].setTempo(iTempo[i]);

        system("CLS");
    }


    //***********************************************************************************************



    cout << "OPÇÕES: " << endl ;
    cout << " 1 - SEGUIR PARA O MENU. " << endl ;
    cout << " 2 - SAIR DO PROGRAMA. " << endl ;
    cin >> p ;

    system("CLS");


    //for (int p = 0; p == 1; p++)
    if (p==1)
    {

        Menu ();
        cout << "INFORME A OPÇÃO DESEJADA: " ;
        cin >> Op ;

        system("CLS");


        switch (Op)
        {
        case 1:
            cout << "INFORME O SALÁRIO A SER CONSULTADO: R$ " << endl ;
            cin >> fSal;

            cout << "RELATÓRIOS:" << endl ;
            cout << "FUNCIONÁRIOS COM SALÁRIO IGUAL OU INFERIOR AO DIGITADO" << endl;
            cout << "\n";

            for (int i = 0; i < iQuant; i++)
            {
                if (fSalario [i] <= fSal)
                {
                    c1++;
                    cout << "\n";
                    cout << "Nome do Funcionário: " << sNome[i] ;
                    cout << "\n";
                    cout << "Código do funcionário: " << iCod[i];
                    cout << "\n";
                    cout << "Salário do funcionário: R$ " << fSalario[i];
                    cout << "\n";
                }
            }
            if (c1 ==0)
            {
                cout << "Nenhum funcionário está nessa categoria. " << endl ;
                cout << "\n";
            }
            cout << "\n";
            cout << "FUNCIONÁRIOS COM SALÁRIO SUPERIOR AO DIGITADO: " << endl ;
            cout << "\n";

            for (int i = 0; i < iQuant; i++)
            {
                if (fSalario [i] > fSal)
                {
                    c2++;
                    cout << "\n";
                    cout << "Nome do Funcionário: " << sNome[i] ;
                    cout << "\n";
                    cout << "Código do funcionário: " << iCod[i];
                    cout << "\n";
                    cout << "Salário do funcionário: R$ " << fSalario[i];
                    cout << "\n";
                }
            }
            if (c2 ==0)
            {
                cout << "Nenhum funcionário está nessa categoria. " << endl ;
                cout << "\n";
            }

            Menu ();
            cout << "\n";
            cout << "INFORME A OPÇÃO DESEJADA: " ;
            cin >> Op ;

            system("CLS");

            if (Op==2)
            {

                cout << " O valor do menor salário pago é de: R$ " << fSalMenor;
                cout << "\n";
                cout << "Funcionários com salário igual ao menor salário: " << endl ;
                cout << "\n";
                for (int i = 0; i < iQuant; i++)
                {
                    if (fSalario [i] == fSalMenor)
                    {
                        c3++;
                        cout << "\n";
                        cout << "Nome do Funcionário: " << sNome[i] ;
                        cout << "\n";
                        cout << "Código do funcionário: " << iCod[i];
                        cout << "\n";
                        cout << "Salário do funcionário: R$ " << fSalario[i];
                        cout << "\n";
                    }
                }
                if (c3 ==0)
            {
                cout << "Nenhum funcionário está nessa categoria. " << endl ;
                cout << "\n";
            }

            }
            if (Op==3)
            {
                cout << "FUNCIONÁRIOS ISENTOS DE IMPOSTOS: " << endl ;
                for (int i = 0; i < iQuant; i++)
                {
                    if (fSalario [i] < 1500 && 2 <= iTempo [i] <= 4)
                    {
                        c4++;
                        cout << "\n";
                        cout << "Nome do Funcionário: " << sNome[i] ;
                        cout << "\n";
                        cout << "Código do funcionário: " << iCod[i];
                        cout << "\n";
                        cout << "Salário do funcionário: R$ " << fSalario[i];
                        cout << "\n";
                    }
                }
                if (c4 ==0)
            {
                cout << "Nenhum funcionário está nessa categoria. " << endl ;
                cout << "\n";
            }


            }

            break ;
        case 2:
            cout << " O valor do menor salário pago é de: R$ " << fSalMenor;
            cout << "\n";
            cout << "Funcionários com salário igual ao menor salário: " << endl ;
            cout << "\n";
            for (int i = 0; i < iQuant; i++)
            {
                if (fSalario [i] == fSalMenor)
                {
                    c1++;
                    cout << "\n";
                    cout << "Nome do Funcionário: " << sNome[i] ;
                    cout << "\n";
                    cout << "Código do funcionário: " << iCod[i];
                    cout << "\n";
                    cout << "Salário do funcionário: R$ " << fSalario[i];
                    cout << "\n";
                }

            }
            if (c1 ==0)
            {
                cout << "Nenhum funcionário está nessa categoria. " << endl ;
                cout << "\n";
            }

            Menu ();
            cout << "\n";
            cout << "INFORME A OPÇÃO DESEJADA: " ;
            cin >> Op ;

            system("CLS");

            if (Op == 1)
            {
                cout << "INFORME O SALÁRIO A SER CONSULTADO: R$ " << endl ;
                cin >> fSal;

                cout << "RELATÓRIOS:" << endl ;
                cout << "FUNCIONÁRIOS COM SALÁRIO IGUAL OU INFERIOR AO DIGITADO" << endl;
                cout << "\n";

                for (int i = 0; i < iQuant; i++)
                {
                    if (fSalario [i] <= fSal)
                    {
                        c2++;
                        cout << "\n";
                        cout << "Nome do Funcionário: " << sNome[i] ;
                        cout << "\n";
                        cout << "Código do funcionário: " << iCod[i];
                        cout << "\n";
                        cout << "Salário do funcionário: R$ " << fSalario[i];
                        cout << "\n";
                    }
                }
                if (c2 ==0)
            {
                cout << "Nenhum funcionário está nessa categoria. " << endl ;
                cout << "\n";
            }
                cout << "\n";
                cout << "FUNCIONÁRIOS COM SALÁRIO SUPERIOR AO DIGITADO: " << endl ;
                cout << "\n";

                for (int i = 0; i < iQuant; i++)
                {
                    if (fSalario [i] > fSal)
                    {
                        c3++;
                        cout << "\n";
                        cout << "Nome do Funcionário: " << sNome[i] ;
                        cout << "\n";
                        cout << "Código do funcionário: " << iCod[i];
                        cout << "\n";
                        cout << "Salário do funcionário: R$ " << fSalario[i];
                        cout << "\n";
                    }
                }
                if (c3 ==0)
            {
                cout << "Nenhum funcionário está nessa categoria. " << endl ;
                cout << "\n";
            }
            }

            if (Op==3)
            {
                cout << "FUNCIONÁRIOS ISENTOS DE IMPOSTOS: " << endl ;
                for (int i = 0; i < iQuant; i++)
                {
                    if (fSalario [i] < 1500 && 2 <= iTempo [i] <= 4)
                    {
                        c4++;
                        cout << "\n";
                        cout << "Nome do Funcionário: " << sNome[i] ;
                        cout << "\n";
                        cout << "Código do funcionário: " << iCod[i];
                        cout << "\n";
                        cout << "Salário do funcionário: R$ " << fSalario[i];
                        cout << "\n";
                    }
                }
                if (c4 ==0)
            {
                cout << "Nenhum funcionário está nessa categoria. " << endl ;
                cout << "\n";
            }


            }
            break;
        case 3:
            cout << "FUNCIONÁRIOS ISENTOS DE IMPOSTOS: " << endl ;
            for (int i = 0; i < iQuant; i++)
            {
                if (fSalario [i] < 1500 && 2 <= iTempo [i] <= 4)
                {
                    c1++;
                    cout << "\n";
                    cout << "Nome do Funcionário: " << sNome[i] ;
                    cout << "\n";
                    cout << "Código do funcionário: " << iCod[i];
                    cout << "\n";
                    cout << "Salário do funcionário: R$ " << fSalario[i];
                    cout << "\n";
                }
            }
            if (c1 ==0)
            {
                cout << "Nenhum funcionário está nessa categoria. " << endl ;
                cout << "\n";
            }

            Menu ();
            cout << "\n";
            cout << "INFORME A OPÇÃO DESEJADA: " ;
            cin >> Op ;

            system("CLS");

            if (Op == 1)
            {
                cout << "INFORME O SALÁRIO A SER CONSULTADO: R$ " << endl ;
                cin >> fSal;

                cout << "RELATÓRIOS:" << endl ;
                cout << "FUNCIONÁRIOS COM SALÁRIO IGUAL OU INFERIOR AO DIGITADO" << endl;
                cout << "\n";

                for (int i = 0; i < iQuant; i++)
                {
                    if (fSalario [i] <= fSal)
                    {
                        c2++;
                        cout << "\n";
                        cout << "Nome do Funcionário: " << sNome[i] ;
                        cout << "\n";
                        cout << "Código do funcionário: " << iCod[i];
                        cout << "\n";
                        cout << "Salário do funcionário: R$ " << fSalario[i];
                        cout << "\n";
                    }
                }
                if (c2 ==0)
            {
                cout << "Nenhum funcionário está nessa categoria. " << endl ;
                cout << "\n";
            }
                cout << "\n";
                cout << "FUNCIONÁRIOS COM SALÁRIO SUPERIOR AO DIGITADO: " << endl ;
                cout << "\n";

                for (int i = 0; i < iQuant; i++)
                {
                    if (fSalario [i] > fSal)
                    {
                            c3++;
                        cout << "\n";
                        cout << "Nome do Funcionário: " << sNome[i] ;
                        cout << "\n";
                        cout << "Código do funcionário: " << iCod[i];
                        cout << "\n";
                        cout << "Salário do funcionário: R$ " << fSalario[i];
                        cout << "\n";
                    }
                }
                if (c3 ==0)
            {
                cout << "Nenhum funcionário está nessa categoria. " << endl ;
                cout << "\n";
            }
            }

            if (Op==2)
            {

                cout << " O valor do menor salário pago é de: R$ " << fSalMenor;
                cout << "\n";
                cout << "Funcionários com salário igual ao menor salário: " << endl ;
                cout << "\n";
                for (int i = 0; i < iQuant; i++)
                {
                    if (fSalario [i] == fSalMenor)
                    {
                        c4++;
                        cout << "\n";
                        cout << "Nome do Funcionário: " << sNome[i] ;
                        cout << "\n";
                        cout << "Código do funcionário: " << iCod[i];
                        cout << "\n";
                        cout << "Salário do funcionário: R$ " << fSalario[i];
                        cout << "\n";
                    }
                }
                if (c4 ==0)
            {
                cout << "Nenhum funcionário está nessa categoria. " << endl ;
                cout << "\n";
            }

            }


            break;
        default:
            cout << "Código inválido!!!" << endl;

        }
    }





    return 0;
}


void Menu ()
{
    cout << "\n";
    cout << "*******" << endl ;
    cout << " MENU: " << endl ;
    cout << " 1 - CONSULTAR SALÁRIO. " << endl ;
    cout << " 2 - CONSULTAR MENOR SALÁRIO PAGO. " << endl ;
    cout << " 3 - CONSULTAR FUNCIONÁRIOS ISSENTOS DE IMPOSTOS. " << endl ;
    cout << "***************************************************************************" << endl ;
}




