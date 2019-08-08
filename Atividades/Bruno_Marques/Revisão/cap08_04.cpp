#include <iostream>
using namespace std;

float CalculoVolume (float raio)
{

float fVolume=0;
fVolume=(raio*raio*raio*4)/3;

return fVolume;
}

int main()
{
int raio=0;

cout<<"Digite o valor do Raio da esfera: ";
cin>>raio;

cout<<"O volume da esfera é: "<< CalculoVolume (raio)<<endl;
}
