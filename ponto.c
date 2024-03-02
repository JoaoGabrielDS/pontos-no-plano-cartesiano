#include <stdio.h>
#include <math.h>
#include "ponto.h"

void criarPonto(Ponto* p) {
    p->coordenadax = 0;
    p->coordenaday = 0;
}

void acessarPonto(Ponto* p) {
    printf("Coordenada X: %.1f\n", p->coordenadax);
    printf("Coordenada Y: %.1f\n", p->coordenaday);
}

void atribuirValores(Ponto* p) {
    printf("Digite o valor de x: ");
    scanf("%f", &p->coordenadax);
    printf("Digite o valor de y: ");
    scanf("%f", &p->coordenaday);
}

void distanciaentrepontos(Ponto* p1, Ponto* p2){
    float pontox = p2->coordenadax - p1->coordenadax;
    float pontoy = p2->coordenaday - p1->coordenaday;
    float distancia = sqrt(pontox * pontox + pontoy * pontoy);
    printf("Distância entre os dois pontos: %.2f\n", distancia);
}

