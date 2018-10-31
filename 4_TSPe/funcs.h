#ifndef FUNCS_H
#define FUNCS_H
#include <iostream>
#include <climits>
#include <fstream>
#include <string>

#define TRUE 1
#define FALSE 0
#define NUM_ALTO 999999

using namespace std;

struct matriz{
    int numero_elementos;
    int** elementos;
};

struct lista{
    int custo;
    int numV;
};

void imprimir_matriz(struct matriz x);
void imprimir_percurso(int n, int* percurso);
void vizinho(struct matriz x, int* percurso, int vInit);
int custo(struct matriz x, int* percurso);
void inverteArray(matriz x, int *solucao, int limInferior, int limSuperior);
void opt_2(struct matriz x, int* solucao);
void copia_percurso(struct matriz x, int* origem, int* destino);
void swap(struct matriz x, int* solucao);
int melhorVInicial(struct matriz x, int* solucao);
void VND(struct matriz x, int* solucao);
int remove_elemento(int numero, int* caminho, int local);
void ordena_solucao(struct matriz x, int* solucaoInicial);
void construcaoLCR(struct matriz x, int* solucao, float alfa);
void GRASP(struct matriz x, int* solucaoInicial, int max, int* solucaoFinal);

#endif