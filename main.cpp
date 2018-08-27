#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <sstream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <utility>
#include "Grafo.h"
#include "No.h"

using namespace std;

std::vector<std::string> explode(std::string const & s, char delim) // FUNCAO PARA DAR SPLIT NA STRING
{
    std::vector<std::string> result;
    std::istringstream iss(s);

    for (std::string token; std::getline(iss, token, delim); )
    {
        result.push_back(std::move(token));
    }

    return result;
}

int main()

{
    int numero=-1;
    stringstream num,sp;
    string nome;
    ifstream arquivo;   // MANIPULAÇÂO DE ARQUIVO ATRAVES DE IFSTREAM


    numero=-1;
    while(numero<=0||numero>8)
    {
        cout<< " Digite o numero do arquivo a ser aberto de 1 a 8" << endl;   // INTERFACE PARA ESCOLHER O ARQUIVO A SER ABERTO
        cin>>numero;
    }
    num<<numero;
    nome = "grafos/grafo_1000_"+num.str()+".txt";

    arquivo.open(nome, ios::in);

    if (! arquivo)
    {
        cout << "Arquivo "<<nome<<" nao pode ser aberto" << endl;  // TESTE ABERTURA DO ARQUIVO
        abort();
    }
    string getC;

    system("pause");
    getline(arquivo,getC);                           // OBTEM PRIMEIRA LINHA PARA TER O TAMANHO DO ARQUIVO

    int tam=atoi(getC.c_str());
    cout<< tam << " TAMANHO DO ARQUIVO" <<endl;
     getline(arquivo,getC);

    string valores[1];
    int i=0;

Grafo grafo;
    system("pause");
    while(!arquivo.eof())
    {
        getline(arquivo,getC);
        auto v=explode(getC,' ');  //FAZ LEITURA DO ARQUIVO E SEPARA AS LINHAS PARA CONSTRUIR OS NOS
         for (auto n:v)
        {
        valores[i]=n;
        i++;
        }
        No a(atoi(valores[0].c_str())) , b(atoi(valores[1].c_str())); //CONSTROI OS NOS

        grafo.AddAresta(&a,&b);                         // CRIA AS ARESTAS
        cout<< valores[0]<<endl;                        // TESTE DE COMPILAÇÃO
        i=0;
    }
    arquivo.close();   // FECHA ARQUIVO
    return 0;
}
