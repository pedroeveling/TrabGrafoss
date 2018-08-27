#ifndef NO_H
#define NO_H


class No
{
    public:
        No();
        No(int i) {id=i;};
        virtual ~No();
        void setId(int id) { this->id = id; };
        void setGrau(int grau) { this->grau = grau; };
        void setProx(No* prox) { this->prox = prox; };
        void setAnt(No* ant) { this->ant = ant; };
//       void setInc(Aresta* inc) { this->inc = inc; };
        int getId() { return id; };
        int getGrau() { return grau; };
        No* getProx() { return prox; };
        No* getAnt() { return ant; };

    protected:

    private:
        int grau,id;
        No* prox,*ant;
//        Aresta* inc;
};

#endif // NO_H
