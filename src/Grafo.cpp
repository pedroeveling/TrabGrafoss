#include "Grafo.h"
#include <list>
#include "Aresta.h"
#include "No.h"

Grafo::Grafo()
{

}

Grafo::~Grafo()
{
    //dtor
}

void Grafo::AddAresta(No*a,No*b)
{
    Aresta A(a,b);
    Laresta.push_back(A);
}
void Grafo::AddNo(No a)
{
    LNo.push_back(a);
}
std::list<Aresta> Grafo::getListaAresta()
{
     return Laresta;
}
std::list<No>  Grafo::getListaNo()
{
    return LNo;
}
void Grafo::removeAresta(Aresta a)
{

}
