#ifndef ARESTA_H
#define ARESTA_H
#include "No.h"

class Aresta
{
    public:
        Aresta();
        Aresta(No* a, No*b);
        virtual ~Aresta();
        void setId(int id) { this->id = id; };
        int getId() { return id; };
        int getPeso() { return peso; };
        void setPeso(int peso) { this->peso = peso; };
        void setProx(Aresta* prox) { this->prox = prox; };
        void setAnt(Aresta* ant) { this->ant = ant; };
        Aresta* getProx() { return prox; };
        Aresta* getAnt() { return ant; };
        No* getNoA();
        No* getNoB();
        static int ids;

    protected:

    private:
        int id,peso;
        Aresta* prox,*ant;
        No* A;
        No*B;


};

#endif // ARESTA_H
