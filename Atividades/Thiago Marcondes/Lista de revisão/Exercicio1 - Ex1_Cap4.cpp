// Thiago Vieira Marcondes - 170379x
// Exercicio 1 - Ex1_Cap4

#include <iostream>

using namespace std;

int main (){

    float nota1, nota2, nota3, nota4, media;

        cout << "- Digite as as quatro notas: \n";
        cin >> nota1;
        cin >> nota2;
        cin >> nota3;
        cin >> nota4;

            media = (nota1 + nota2 +nota3 + nota4) / 4;

        cout << "\n- A media final do aluno e de: " << media;

            if (media < 7) { cout << "\n- O aluno foi REPROVADO.";
                }
            else { cout << "\n- O aluno foi APROVADO.";
                }

    return 0;

}
