#ifndef GRAFO_H
#define GRAFO_H
#include <list>
#include "No.h"
#include "Aresta.h"
#include <iostream>

class Grafo
{
    public:
        Grafo();
        virtual ~Grafo();
    void AddAresta(No*a,No*b);                     // CRIA UMA NOVA ARESTA E ADICIONA NA LISTA
    void AddNo(No a);                              // CRIA UM NOVO NO E ADICIONA NA LISTA
    void removeAresta(Aresta a);
    void removeNo(int n);
    std::list<Aresta> getListaAresta();   // RETORNA LISTA DE ARESTAS
    std::list<No> getListaNo();             // RETORNA LISTA DE NOS
    protected:

    private:

        std::list<Aresta> Laresta;
        std::list<No>LNo;



};

#endif // GRAFO_H
