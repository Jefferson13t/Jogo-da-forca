#include <iostream>
#include <cstdlib>

#ifndef FORCA_H
#define FORCA_H

using namespace std;

class Forca {

    public:

      std::string forca[9] = { 
        "|--------________-|", 
        "|--------|-----||-|", 
        "|--------O-----||-|", 
        "|-------/|-----||-|",
        "|-------/|\\----||-|",
        "|-------/------||-|",
        "|-------/-\\----||-|",
        "|--------------||-|",
        "|--------@-----||-|"};
        int pontuacao = 0;
        int getPontuacao();
        void setPontuacao(int pt);
        Forca();
        void setState(int _state);
        int getState();
        void draw(int _state);
        
    private:
        int state;
};

Forca::Forca() {
    setState(0);
}
void Forca::setState(int _state){
    state = _state;
}
int Forca::getState(){
    return state;
}

void Forca::draw(int _state){
    
    system("CLS");

    switch (_state)
    {
    case 0:
        std::cout << forca[0] << "  Pontuacao atual: " << getPontuacao() << "\n";
        for(int i=1; i < 6; i++){
            std::cout << forca[7] << "\n";
        }
        break;
    case 1:
        std::cout << forca[0] << "  Pontuacao atual: " << getPontuacao() <<"\n";
        std::cout << forca[1] << "\n";
        std::cout << forca[2] << "\n";
        for(int i=3; i < 6; i++){
            std::cout << forca[7] << "\n";
        }
        break;
    case 2:
        std::cout << forca[0] << "  Pontuacao atual: " << getPontuacao() <<"\n";
        std::cout << forca[1] << "\n";
        std::cout << forca[2] << "\n";
        std::cout << forca[3] << "\n";
        for(int i=4; i < 6; i++){
            std::cout << forca[7] << "\n";
        }
        break;
    case 3:
        std::cout << forca[0] << "  Pontuacao atual: " << getPontuacao() <<"\n";
        std::cout << forca[1] << "\n";
        std::cout << forca[2] << "\n";
        std::cout << forca[4] << "\n";
        for(int i=4; i < 6; i++){
            std::cout << forca[7] << "\n";
        }
        break;
    case 4:
        std::cout << forca[0] << "  Pontuacao atual: " << getPontuacao() <<"\n";
        std::cout << forca[1] << "\n";
        std::cout << forca[2] << "\n";
        std::cout << forca[4] << "\n";
        std::cout << forca[5] << "\n";
        for(int i=5; i < 6; i++){
            std::cout << forca[7] << "\n";
        }
        break;
    case 5:
        std::cout << forca[0] << "  Pontuacao atual: " << getPontuacao() <<"\n";
        std::cout << forca[1] << "\n";
        std::cout << forca[8] << "\n";
        std::cout << forca[4] << "\n";
        std::cout << forca[6] << "\n";
        for(int i=5; i < 6; i++){
            std::cout << forca[7] << "\n";
        }
        break;
    default:
    draw(this->getState());
        break;
    }
}

void Forca::setPontuacao(int pt){
    pontuacao += (pt * 10);   
}

int Forca::getPontuacao(){
    return pontuacao;
}

#endif