#include <iostream>
#include <string>
#include "Funcionario.h"
#include "Aluno.h"

using namespace std;

int main()
{
    string a = " ";
    Aluno a1;
    Funcionario f1;

    cout << "Primeiro entre com as informações do aluno: " << endl;

    cout << "Qual o nome do aluno? ";
    getline(cin, a);
    a1.setNome(a);
    cout << "Qual o endereço? ";
    getline (cin, a);
    a1.setEndereco(a);
    cout << "Insira sua data de nascimento: ";
    //cin.ignore();
    getline(cin, a);
    a1.setDataNascimento(a);
    //cin.ignore();
    a1.setCurso();
    a1.setSemestre();

    cout << endl << "Nome: " << a1.getNome() << endl
        << "Endereço: " << a1.getEndereco() << endl
        << "Data de nascimento: " << a1.getDataNascimento() << endl
        << "Curso: " << a1.getCurso() << endl
        << "Semestre: " << a1.getSemestre() << endl;

      cout << endl << "Agora entre com as informaçoes do funcionario: " << endl;

    cout << "Qual o nome do funcionario? ";
    cin.ignore();
    getline(cin, a);
    f1.setNome(a);
    cout << "Qual o endereço? ";
    getline (cin, a);
    f1.setEndereco(a);
    cout << "Insira sua data de nascimento: ";
    //cin.ignore();
    getline(cin, a);
    f1.setDataNascimento(a);
    f1.setCargo();
    f1.setSalario();

    cout << endl << "Nome: " << f1.getNome() << endl
        << "Endereço: " << f1.getEndereco() << endl
        << "Data de nascimento: " << f1.getDataNascimento() << endl
        << "Cargo: " << f1.getCargo() << endl
        << "Salario: " << f1.getSalario() << endl;

    return 0;
}
