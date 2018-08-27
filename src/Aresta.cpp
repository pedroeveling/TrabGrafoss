#include "Aresta.h"
#include "No.h"
Aresta::Aresta()
{

}
Aresta::Aresta(No*a,No*b)
{
    A=a;
    B=b;
//    setId(ids);
 //       ids ++;

}

Aresta::~Aresta()
{
    //dtor
}

No* Aresta::getNoA()
{
    return A;
}
No* Aresta::getNoB()
{
    return B;
}

