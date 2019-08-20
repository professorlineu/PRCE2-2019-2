/**********************************************************
- Autor:     Jéssica Assis
- Descrição: Revisão - ex 21 Cap 6
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int iCA = 0, iCB = 0, iCC = 0, iCD = 0, iVN = 0, iVB = 0, iCont = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Escolha seu canditado:\n1- Canditado A\n2- Candidato B\n3- Candidato C\n4- Candidato D\n5- Nulo\n6- Branco \n0- Sair\n";

    do
    {
        cout <<"\nDigite seu voto: ";
        cin >> iCont;
        system("color F2");

        switch (iCont)
        {
        case 1:
            iCA++;
            break;

        case 2:
            iCB++;
            break;

        case 3:
            iCC++;
            break;

        case 4:
            iCD++;
            break;

        case 5:
            iVN++;
            break;

        case 6:
            iVB++;
            break;

        case 0:
            cout << "\nFIM\n" ;
            break;

        default:
            cout << "Voto Inválido";
            break;

        }
    }

    while (iCont != 0);

    system("color F4");
    cout<<"\nTotal de votos para cada candidato:\nCandidato A \t"<<iCA<<"\nCandidato B \t"<<iCB<<"\nCandidato C \t"<<iCC<<"\nCandidato D \t"<<iCD <<endl;
    cout<<"Total de votos nulo:"<<iVN<<endl;
    cout<<"Total de votos em branco:"<<iVB<<endl;
    cout <<"\nA porcentagem dos votos nulos: " << iVN*100/(iCA+iCB+iCC+iCD+iVN+iVB) << "%";
    cout <<"\nA porcentagem dos votos Branco: " << iVB*100/(iCA+iCB+iCC+iCD+iVN+iVB) << "%";
    return 0;
}
