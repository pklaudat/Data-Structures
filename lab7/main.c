/* default libraries */
#include <stdio.h>
#include <stdlib.h>

/* dependencies */
#include "grafo.h"
#include "dijkstra.h"

int main() {
	/* code */

	GRAFO *cidade = criaGrafo(5);
	criaAresta(cidade,0,1,100);
	criaAresta(cidade,0,4,1000);
	criaAresta(cidade,0,2,300);
	criaAresta(cidade,1,3,500);
	criaAresta(cidade,2,4,600);
	criaAresta(cidade,2,3,200);
	criaAresta(cidade,3,4,100);
	imprimeGrafo(cidade);
	imprimeNumVertices(cidade);
	imprimeNumArestas(cidade);

	int *s = dijkstra(cidade,0);

	imprimeMenorCaminho(cidade,s);





	return 0;
}