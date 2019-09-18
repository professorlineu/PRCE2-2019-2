#include <iostream>
#include "Horario.h"
#include <locale.h>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
   int a=0;
   int b=0;
   int c=0;
   int op=0;

   Horario h1;

   setlocale(LC_ALL,"");


   system("color F1");


       cout<<"Digite o horário: "<<endl;
       cin>>a>>b>>c;


   h1.setHora(a,b,c);

   h1.getHoraCompleta();

}
