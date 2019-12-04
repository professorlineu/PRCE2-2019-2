#ifndef HORARIO_H
#define HORARIO_H

using namespace std;

class Horario
{
    public:
        // construtor e destrutor
        Horario();
        ~Horario();

        // m�todos setters
        void setHora(int);
        void setHora(int, int);
        void setHora(int, int, int);

        // m�todos getters
        int getHora();
        int getMinuto();
        int getSegundo();
        void getHoraCompleta();

    private:
        // atributos
        int Hora;
        int Minuto;
        int Segundo;
};

#endif // HORARIO_H
