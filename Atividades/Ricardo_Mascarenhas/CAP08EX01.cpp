/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descrição: Função
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;


void Horas (int a, int b, int c);


int main()
{
    //Declaração de variáveis
    int h = 0;
    int m = 0;
    int s = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Informe três números internos representando horas, minutos e segundos, seguindo o modelo: 10(horas), 20(minutos) e 30(segundos)." << endl ;
    cin >> h >> m >> s ;


    Horas (h,m,s);

    return 0;
}




void Horas (int a, int b, int c)
{
    int ah = 0 ;
    int bh = 0;
    int st = 0;

   ah = a * 3600 ;
   bh = b * 60 ;

    st = ah + bh + c;

    cout << a << " horas, " << b << " minutos e " << c << " segundos, correspondem a " << st << " segundos. " << endl ;


}
