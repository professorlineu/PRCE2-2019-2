#include "Pessoa.h"
#include <string>
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;


//Pessoa::Pessoa()
//{
//ctor
//}

//Pessoa::~Pessoa()
//{
//    //dtor
//}
void Pessoa::setNome (string N)
{
    Nome = N;
}
void Pessoa::setEnd (string E)
{
    End = E;
}
void Pessoa::setDia (int D)
{
    Dia = D;
}
void Pessoa::setMes (int M)
{
    Mes = M;
}
void Pessoa::setAno (int An)
{
    Ano = An;
}


void Aluno::setCurso (string C)
{
    Curso = C;
}
void Aluno::setSemestre (int S)
{
    Semestre = S;
}


void Funcionario::setSalario (float Sal)
{
    Salario = Sal;
}
void Funcionario::setCargo (string Car)
{
    Cargo = Car;
}



//**********************************************************//



string Pessoa::getNome ()
{
    return Nome;
}
string Pessoa::getEnd ()
{
    return End;
}
int Pessoa::getDia ()
{
    return Dia;
}
int Pessoa::getMes ()
{
    return Mes;
}
int Pessoa::getAno ()
{
    return Ano;
}



string Aluno::getCurso ()
{
    return Curso;
}
int Aluno::getSemestre ()
{
    return Semestre;
}




float Funcionario::getSalario ()
{
    return Salario;
}
string Funcionario::getCargo ()
{
    return Cargo;
}

