/* Implementação TDA para grafo */

typedef int bool;
typedef int TIPOPESO;

typedef struct adjacencia{
	int vertice;
	TIPOPESO peso;
	struct adjacencia *prox;
} ADJACENCIA;

typedef struct vertice {
	/* Dados são armazenados nessa estrutura */
	ADJACENCIA *cab;
} VERTICE;

typedef struct grafo {
	int vertices;
	int arestas;
	VERTICE *adj;
} GRAFO;


GRAFO *criaGrafo(int v);

ADJACENCIA *criaAdjacencia(int v, int peso);

bool criaAresta(GRAFO *gr, int vi, int vf, TIPOPESO peso);

void imprime(GRAFO *gr);

