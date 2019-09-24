#include <iostream>
#include "Tempo.h"

using namespace std;

int main()
{
    Tempo t1;
    int m;
    int h;
    int s;

    cout<<"Insira as horas, em seguida os minutos e depois os segundos "<<endl;
    cin>>h;
    t1.setHora(h);
    cin>>m;
    t1.setMinuto(m);
    cin>>s;
    t1.setSegundo(s);



    cout<<"Horário: "<<t1.getHora()<<":";
    cout<<t1.getMinuto()<<":";
    cout<<t1.getSegundo();


    return 0;
}
