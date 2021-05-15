#ifndef _GRAFO_H_
#define _GRAFO_H_

/* Implementação TDA para grafo */
typedef int bool;
typedef int TIPOPESO;

#define true 1
#define false 0


/* Implementação de Grafo por lista de adjacências */
typedef struct adjacencia{
	int vertice;
	TIPOPESO peso;
	struct adjacencia *prox;
} ADJACENCIA;

typedef struct vertice {
	ADJACENCIA *partida;
} VERTICE;

typedef struct grafo {
	int vertices;
	int arestas;
	VERTICE *adj;
} GRAFO;

/* Cria Grafo com número de vértices definidos
@ input: v - número de vértices do gŕafico
*/
GRAFO *criaGrafo (int v);

/* Cria aresta para o Grafo 
@inputs: gr - Grafo
		 vi - vertice inicial
		 vf - vertice final
		 peso - peso                                    */
bool criaAresta (GRAFO *gr, int vi, int vf, TIPOPESO peso);

/* Imprime o Grafo em formato de matriz de adjacências 
@input: gr - Grafo                                      */
void imprimeGrafo (GRAFO *gr);
void imprimeNumVertices (GRAFO *pGrafo);
void imprimeNumArestas (GRAFO *pGrafo);

#endif /* _GRAFO_H_ */