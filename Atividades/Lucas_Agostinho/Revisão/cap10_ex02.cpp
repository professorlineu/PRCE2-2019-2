/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descrição: Censo
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

struct censo
{
    float fSalario = 0;
    int iIdade = 0;
    float fNumFilhos = 0;
    char cSexo = 0;
};

int main()
{
    ///Declaração de variáveis
    censo caragua;
    float fSumSalario = 0;
    float fMedSalario = 0;
    float fMaiorSalario = 0;
    float fSumFilhos = 0;
    float fMedFilhos = 0;
    int iContSalarioMulher = 0;
    float fPercentSalaMulher = 0;
    int iQtdRegistros = 0;
    int i = 0;

    ///Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    ///Código do programa
    cout << "Informe a quantidade de registros a serem inseridos: "
    cin >> iQtdRegistros;

    for (i = 0; i < iQtdRegistros; i++)
    {
        cout << "Informe o salário: ";
        cin >> caragua.fSalario;

        cout << "Informe a idade: ";
        cin >> caragua.iIdade;

        cout << "Informe o número de filhos: ";
        cin >> caragua.fNumFilhos;

        cout << "Informe o sexo (f = feminino / m = masculino): ";
        cin >> caragua.cSexo;

        fSumSalario += caragua.fSalario;

        fSumFilhos += caragua.fNumFilhos;

        if (caragua.fSalario > fMaiorSalario)
        {
            fMaiorSalario = caragua.fSalario;
        }

        if ((caragua.cSexo == 'F' || caragua.cSexo == 'f') && (caragua.fSalario > 1000))
        {
            iContSalarioMulher++;
        }

        cout << endl;
    }

    fMedSalario = fSumSalario / iQtdRegistros;

    fMedFilhos = fSumFilhos / iQtdRegistros;

    fPercentSalaMulher = (iContSalarioMulher * 100) / iQtdRegistros;

    cout << "A média do salário da população é de " << fMedSalario << " reais" << endl;
    cout << "A média de filhos da população é de " << fMedFilhos << " filhos por pessoa" << endl;
    cout << "O maior salário é o de " << fMaiorSalario << " reais" << endl;
    cout << "O percentual de mulheres com salário superior a 1000 reais é de " << fPercentSalaMulher << "%" << endl;

    return 0;
}
