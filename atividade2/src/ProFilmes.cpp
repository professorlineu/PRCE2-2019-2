#include "ProFilmes.h"
#include<string.h>
#include<iostream>
#include<time.h>
using namespace std;
ProFilmes::ProFilmes()
{
    int IDf=0;
    string Nomef="";
    int Anolf=0;
    int Year=0;
}

ProFilmes::~ProFilmes()
{

}
//setter
void ProFilmes::setIDf(int va)
{
    IDf=va;
}
void ProFilmes::setNomef(string s)
{
    Nomef=s;
}
void ProFilmes::setAnolf(int c)
{
    Anolf=c;
}
void ProFilmes::setYear( int y)
{
    time_t now=time(0);
    tm*ltm=localtime(&now);
    y=1900+ltm->tm_year;
    Year=y;
}
//getter
int ProFilmes::getIDf()
{
    return IDf;
}
string ProFilmes::getNomef()
{
    return Nomef;
}
int ProFilmes::getAnolf()
{
    return Anolf;
}
int ProFilmes::getYear()
{
    return Year;
}
