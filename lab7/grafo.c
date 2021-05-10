#include <stdio.h>
#include <stdlib.h>
#include <grafo.h>

#define true 1
#define false 0



/* Implementação de Grafo utilizando lista de adjacências */

GRAFO *criaGrafo(int v) {
	GRAFO *g = (GRAFO*)malloc(sizeof(GRAFO));
	g->vertices = v;
	g->arestas = 0;
	g->adj = (VERTICE *)malloc(v*sizeof(VERTICE));
	int i;

	for (i=0; i<v; i++) {
		g->adj[i].cab = NULL;
	}

	return(g);
}

ADJACENCIA *criaAdjacencia(int v, int peso) {
	ADJACENCIA *temp = (ADJACENCIA *)malloc(sizeof(ADJACENCIA));
	temp->vertice = v;
	temp->peso = peso;
	temp->prox = NULL;

	return(temp);
}

bool criaAresta(GRAFO *gr, int vi, int vf, TIPOPESO peso) {
	if (!gr) return (false);
	if ((vf<0) || (vf >= gr->vertices)) return (false);
	if ((vi<0)||(vi >= gr->vertices)) return (false);
	ADJACENCIA *novo = criaAdj(vf,p);
	novo->prox = gr->adj[vi].cab;
	gr->adj[vi].cab = novo;
	gr->arestas++;
	return (true);
}

void imprime(GRAFO *gr) {
	printf("Vértices: %d | Arestas: %d \n",gr->vertices,gr->arestas);
	int i;
	for (i=0; i<gr->vertices; i++) {
		printf("v%d",i);
		ADJACENCIA *ad = gr->adj[i].cab;
		while(ad) {
			printf("v%d(%d)",ad->vertice,ad->peso);
			ad = ad->prox;
		}
		printf("\n");
	}	
}
