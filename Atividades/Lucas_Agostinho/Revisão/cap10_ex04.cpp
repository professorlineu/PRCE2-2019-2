/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descrição: Coleta de dados
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

struct dadosHabitantes
{
    int iIdade[20];
    char cSexo[20];
    float fRenda[20];
    int iNumFilhos[20];
};

int main()
{
    ///Declaração de variáveis
    dadosHabitantes caragua;
    float fSumSalario = 0;
    float fMedSalario = 0;
    int iMaiorIdade = 0;
    int iMenorIdade = 0;
    int iQtdMulFilRenda = 0;
    int iQtdRegistros = 0;
    int i = 0;

    ///Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    ///Código do programa
    cout << "Informe a quantidade de registros a serem inseridos (max. 20): ";
    cin >> iQtdRegistros;
    cout << endl;

    cout << "Informe a idade: ";
    cin >> caragua.iIdade[0];

    cout << "Informe o sexo (f = feminino / m = masculino): ";
    cin >> caragua.cSexo[0];

    cout << "Informe a renda familiar: ";
    cin >> caragua.fRenda[0];

    cout << "Informe o número de filhos: ";
    cin >> caragua.iNumFilhos[0];

    fSumSalario += caragua.fRenda[0];

    iMaiorIdade = caragua.iIdade[0];

    iMenorIdade = caragua.iIdade[0];

    if ((caragua.cSexo[0] == 'f' || caragua.cSexo[0] == 'F') && (caragua.iNumFilhos[0] > 2) && (caragua.fRenda[0] < 600))
    {
        iQtdMulFilRenda++;
    }

    cout << endl;

    for (i = 1; i < iQtdRegistros; i++)
    {
        cout << "Informe a idade: ";
        cin >> caragua.iIdade[i];

        cout << "Informe o sexo (f = feminino / m = masculino): ";
        cin >> caragua.cSexo[i];

        cout << "Informe a renda familiar: ";
        cin >> caragua.fRenda[i];

        cout << "Informe o número de filhos: ";
        cin >> caragua.iNumFilhos[i];

        fSumSalario += caragua.fRenda[i];

        if (caragua.iIdade[i] > iMaiorIdade)
        {
            iMaiorIdade = caragua.iIdade[i];
        }

        if (caragua.iIdade[i] < iMenorIdade)
        {
            iMenorIdade = caragua.iIdade[i];
        }

        if ((caragua.cSexo[i] == 'f' || caragua.cSexo[i] == 'F') && (caragua.iNumFilhos[i] > 2) && (caragua.fRenda[i] < 600))
        {
            iQtdMulFilRenda++;
        }

        cout << endl;
    }

    fMedSalario = fSumSalario / iQtdRegistros;

    cout << "\nA média de salário entre os habitantes é de " << fMedSalario << " reais" << endl;
    cout << "A maior idade do grupo é de " << iMaiorIdade << " anos" << endl;
    cout << "A menor idade do grupo é de " << iMenorIdade << " anos" << endl;
    cout << "A quantidade de mulheres com mais de dois filhos e com renda familiar inferior a R$ 600,00 é de " << iQtdMulFilRenda << " mulher(es)" << endl;

    return 0;
}
