/**********************************************************
- Autor:    Ricardo Mascarenhas
- Descrição: Idades
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int i = 0;
    int iIdade = 0;
    int i15 = 0;
    int i30 = 0;
    int i45 = 0;
    int i46 = 0;
    int i60 = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "ANÁLISE POPULACIONAL" << endl ;

    cout << endl ;

    cout << "Informe o número de pessoas que serão cadastradas: " << endl ;
    cin >> i ;






   for (int iC = 0; iC < i ; iC ++)
    {

        cout << "Informe uma idade: " << endl ;
        cin >> iIdade ;





         if (iIdade <= 0)
        {
            cout << "Idade inválida!" << endl ;
        }
        if (iIdade <= 15){ i15++;}
        if (iIdade >= 16 && iIdade <= 30){ i30++;}
        if (iIdade >= 31 && iIdade <= 45){ i45++;}
        if (iIdade >= 46 && iIdade <= 60){ i46++;}
        if (iIdade > 60){ i60++;}




    }

    cout << endl ;

    cout << "FAIXA ETÁRIA \n 1 - Até 15 anos \n 2 - De 16 a 30 anos \n 3 - De 31 a 45 anos \n 4 - De 46 a 60 anos \n 5 - Acima de 60 anos." << endl ;

    cout << endl ;



    cout << i15 << " Pessoas estão na 1º Faixa etária. " << endl ;
    cout << i30 << " Pessoas estão na 2º Faixa etária. " << endl ;
    cout << i45 << " Pessoas estão na 3º Faixa etária. " << endl ;
    cout << i46 << " Pessoas estão na 4º Faixa etária. " << endl ;
    cout << i60 << " Pessoas estão na 5º Faixa etária. " << endl ;

    cout << endl ;

    cout << "A quantidade de pessoas na primeira faixa etária, corresponde a " << (i15*100)/i << " % do total de pessoass cadastradas. " << endl ;


    cout << endl ;


    cout << "A quantidade de pessoas na quinta faixa etária, corresponde a " << (i60*100)/i << " % do total de pessoass cadastradas. " << endl ;



    return 0;
}
