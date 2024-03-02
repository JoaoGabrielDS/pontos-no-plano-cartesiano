#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main() {
    Ponto pontoNoPlano;
    criarPonto(&pontoNoPlano);
    atribuirValores(&pontoNoPlano);
    acessarPonto(&pontoNoPlano);
    
    Ponto pontoNoPlano2;
    criarPonto(&pontoNoPlano2);
    atribuirValores(&pontoNoPlano2);
    acessarPonto(&pontoNoPlano2);
    
    distanciaentrepontos(&pontoNoPlano, &pontoNoPlano2);

    return 0;
}

