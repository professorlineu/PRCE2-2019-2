/**********************************************************
- Autor:     Vinicius Soares
- Descrição: Estrutura de Decisão - Cap 4 - Ex 2
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
    cout << "Informe a primeira nota do aluno: ";
    cin >> fNota1;

    cout << "Informe a segunda nota do aluno: ";
    cin >> fNota2;

    fMedia = (fNota1 + fNota2)/2;
    if (fMedia >= 7)
    {
        cout << "A média é: " << fMedia << endl << "Aprovado\n";
    }
    if (fMedia >= 3 && fMedia < 7)
    {
      cout << "A média é: " << fMedia << endl << "Exame\n";
    }
    if (fMedia < 3)
  {
    cout << "A média é: " << fMedia << endl << "Reprovado\n";
  }

    return 0;
}
