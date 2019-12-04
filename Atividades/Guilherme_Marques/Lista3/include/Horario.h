#ifndef HORARIO_H
#define HORARIO_H

class Horario
{
    public:
        // construtor e destrutor
        Horario();
        ~Horario();

        // m�todos setters
        void setHora(int h);
        void setHora(int h, int m);
        void setHora(int h, int m, int s);

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
