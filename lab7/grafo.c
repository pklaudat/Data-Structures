#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"

#define true 1
#define false 0



/* Implementação de Grafo utilizando lista de adjacências */

GRAFO *criaGrafo(int numVertices) 
{
	int i;
	GRAFO *gr = (GRAFO*)malloc(sizeof(GRAFO));
	
	gr->arestas = 0; // grafo inicial não possui arestas
	gr->vertices = numVertices; // estrutura grafo recebe o número de vertices
	gr->adj = (VERTICE *)malloc(numVertices*sizeof(VERTICE)); // aloca quantidade de vertices para formar as adjacencias

	for (i=0; i<numVertices; i++) {
		gr->adj[i].partida = NULL;
	}

	return(gr);
}


/* Cria elemento da lista de adjacência com seu respectivo peso e coordenada
@ input: v - vértice final peso - valor atribuído à adjacência (peso)
*/
static ADJACENCIA *criaAdjacencia(int v, int peso) 
{
	ADJACENCIA *aux = (ADJACENCIA *)malloc(sizeof(ADJACENCIA));
	aux->vertice = v;
	aux->peso = peso;
	aux->prox = NULL;

	return(aux);
}

bool criaAresta(GRAFO *pGrafo, int vi, int vf, TIPOPESO peso) 
{
	if (!pGrafo) return (false);
	if ((vf<0) || (vf >= pGrafo->vertices)) return (false);
	if ((vi<0)||(vi >= pGrafo->vertices)) return (false);
	ADJACENCIA *novo = criaAdjacencia(vf,peso);
	novo->prox = pGrafo->adj[vi].partida;
	pGrafo->adj[vi].partida = novo;
	pGrafo->arestas++;
	return (true);
}

void imprimeNumVertices (GRAFO *pGrafo)
{
	printf("Numero de Vertices: %d |\n", pGrafo->vertices);
}

void imprimeNumArestas (GRAFO *pGrafo)
{
	printf("Numero de Arestas:  %d |\n", pGrafo->arestas);
}


void imprimeGrafo(GRAFO *pGrafo) 
{
	int i;
	
	for (i=0; i<pGrafo->vertices; i++) {
		printf("v%d: ",i);
		
		ADJACENCIA *adjc = pGrafo->adj[i].partida;
		
		while(adjc) {
			printf("v%d(%d) ",adjc->vertice,adjc->peso);
			adjc = adjc->prox;
		}
		printf("\n");
	}	
}
