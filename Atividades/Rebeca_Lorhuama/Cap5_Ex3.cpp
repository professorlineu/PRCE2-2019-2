/**********************************************************
- Autor:     Seu nome
- Descrição: Breve descrição do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iIdade  = 0;
    float fMaior15 = 0;
    float fMaior30 = 0;
    float fMaior45 = 0;
    float fMaior60 = 0;
    float fMaiorIdoso = 0;
    float fCont = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "FAIXA ETÁRIA" << endl << endl;

    do
    {
        cout << "Informe a idade: ";
        cin >> iIdade;

        fCont = fCont + 1;

        if (iIdade <= 15)
        {
            fMaior15 = fMaior15 + 1;
        }

        else
        {
            if (iIdade <= 30)
            {
                fMaior30 = fMaior30 + 1;
            }

        else
        {
            if (iIdade <= 45)
            {
                fMaior45 = fMaior45 + 1;
            }

            else
            {
                if (iIdade <= 60)
                {
                    fMaior60 = fMaior60+1;
                }

                else
                {
                    if (iIdade > 60)
                    {
                        fMaiorIdoso = fMaiorIdoso + 1;
                    }
                }
            }
      }
      }
}

while (fCont != 8);

cout << "\nQuantidade de pessoas na 1ª Faixa Etária: " << fMaior15 << endl;
cout << "Quantidade de pessoas na 2ª Faixa Etária: " << fMaior30 << endl;
cout << "Quantidade de pessoas na 3ª Faixa Etária: " << fMaior45 <<  endl;
cout << "Quantidade de pessoas na 4ª Faixa Etária: " << fMaior60 << endl;
cout << "Quantidade de pessoas na 5ª Faixa Etária: " << fMaiorIdoso << endl;

cout << "\nPorcentagem de pessoas na 1ª faixa etária: " << fMaior15 / fCont * 100 << "%" << endl;
cout << "Porcentagem de pessoas na 5ª faixa etária: " << fMaiorIdoso / fCont * 100 << "%" << endl;


    return 0;
}
