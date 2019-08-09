/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descrição: Média
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fNota1 = 0;
    float fNota2 = 0;
    float fMedia = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Bem-Vindo ao programa de cálculo de médias. \n Digite as duas notas de seu aluno: " << endl ;
    cin >> fNota1 >> fNota2 ;

    fNota1 + fNota2 = fMedia

    if (fMedia >= 0 && fMedia < 3)
    {
        cout << "Aluno Reprovado!!"
    }
    else if (fMedia >= 3 && fMedia < 7)
    {
        cout << "Aluno deverá realizar o Exame!"
    }
    else
    {
        cout << "Aluno Aprovado!!"
    }



    return 0;
}
