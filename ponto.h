#ifndef PONTO_H
#define PONTO_H

struct ponto {
    float coordenadax;
    float coordenaday;
};

typedef struct ponto Ponto;

void criarPonto(Ponto* p);
void acessarPonto(Ponto* p);
void atribuirValores(Ponto* p);
void distanciaentrepontos(Ponto* p1, Ponto* p2);

#endif

