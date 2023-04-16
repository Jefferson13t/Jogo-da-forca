#include <iostream>
#include <ctime>
#include "forca.h"
#include "palavra.h"

using namespace std;

int main(){

    Forca *gm = new Forca();
    Palavra *p = new Palavra();
    int opc, pts = 0;
    string chutePalavra;


    cout << "Jogo da forca feito com c++. \n\n";

    cout << "Escolha [1] para jogar ou qualquer outro para encerrar. \n";
    cin >> opc;

    while(opc == 1) {
        p->setPalavra();
        gm->setPontuacao(pts);
        pts = 5;
        gm->setState(0);
        
        do{
            gm->draw(gm->getState());
            p->draw();
            cout << "Chute uma palavra: ";
            cin >> chutePalavra;

            pts--;
            if(chutePalavra == p->getPalavra()){
                cout << "Parabens. Voce acertou a palavra, ganhara " << pts * 10 << " pontos.\n";
            }
            gm->setState(gm->getState() + 1);

        }while(gm->getState() < 6 && chutePalavra != p->getPalavra());

        if(gm->getState() == 6){
            cout << "Voce nao adivinhou a palavra. Nao ganhara pontos.\n";
            pts = 0;
        }

    cout << "Escolha [1] para jogar ou qualquer outro para encerrar. \n";
    cin >> opc;
    }
        
    return 0;
}