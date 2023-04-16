#include <iostream>
#include <cstdlib>

#ifndef PALAVRA_H
#define PALAVRA_H

using namespace std;

class Palavra {

    public:
        std::string palavraAtual;
        std::string placeholder;
        Palavra();
        void setPalavra();
        string getPalavra();
        void draw();
    private:
        std::string lista[34] = {"derivada","integral","coseno","trigonometria","instrumental","empatia",
       "prolixo","inferir","sucinto","cultura","trivial","sucesso","respeito","genocida","pandemia",
       "alienado","abstrato","devaneio","sucumbir","paradoxo","sanidade","perspicaz","deliberar","cognitivo",
       "ludibriar","liberdade","maturidade","disruptivo","equivocado","democracia","sintetizar",
       "reverberar","estupefato","etimologia"};
};

Palavra::Palavra() {
    setPalavra();    
}

void Palavra::setPalavra() {
    palavraAtual = lista[rand() % 34];
    placeholder = palavraAtual;
    
    for(int i =0; i < palavraAtual.length(); i++){
        placeholder[i] = '_';
    }
}

string Palavra::getPalavra() {
    return this->palavraAtual;
}

void Palavra::draw() {
    int aleatorio;

    do{
        aleatorio = rand() % (palavraAtual.length() + 1);
    }while(placeholder[aleatorio] != '_');

    placeholder[aleatorio] = palavraAtual[aleatorio];

    cout << placeholder <<"\n";

}

#endif


