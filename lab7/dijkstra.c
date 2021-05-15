
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* Dependencias */
#include "dijkstra.h"

static void inicializaD(GRAFO *g, int *d, int *p, int s)
{
	int v;
	for (v=0;v<g->vertices;v++) {
		d[v] = INT_MAX/2;
		p[v] = -1;
	}
	d[s] = 0;
} 

static void relaxa(GRAFO *g, int *d, int *p, int u, int v) 
{
	ADJACENCIA *ad = g->adj[u].partida;
	while (ad && ad->vertice != v) {
		ad = ad->prox;
	}
	if (ad) {
		if (d[v] > d[u] + ad->peso) {
			d[v] = d[u] + ad->peso;
			p[v] = u;
		}
	}
}

static bool existeAberto(GRAFO *g, int *aberto)
{
	int i;
	for (i=0;i<g->vertices;i++)
		if (aberto[i]) return true;
	return false;
	
}
static int menorDist(GRAFO *g, int *aberto, int *d)
{
	int i;
	for (i=0;i<g->vertices;i++)
		if (aberto[i]) break;
	if (i==g->vertices) return (-1);
	int menor = i;
	for (i=menor+1; i<g->vertices; i++)
		if (aberto[i] && (d[menor]>d[i]))
			menor = i;
	return (menor);
}

int *dijkstra(GRAFO *g, int s) 
{
	int *d = (int*)malloc(g->vertices*sizeof(int));
	int p[g->vertices];
	bool aberto[g->vertices];

	inicializaD(g,d,p,s);

	int i;

	for (i=0;i<g->vertices;i++) {
		aberto[i] = true;
	}

	while(existeAberto(g,aberto)) {
		int u = menorDist(g,aberto,d);
		aberto[u] = false;
		ADJACENCIA *ad = g->adj[u].partida;
		while(ad) {
			relaxa(g,d,p,u,ad->vertice);
			ad = ad->prox;
		}
	}
	return (d);
}

void imprimeMenorCaminho (GRAFO *pGrafo, int *s)
{
	int i;
	for (i=0;i<pGrafo->vertices;i++) {
		printf("D(v0 -> v%d = %d\n",i,s[i]);
	}

}
