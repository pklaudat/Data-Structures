
#include "grafo.h"

/* Algoritmo de Dijkstra
 Calcula o caminho mais curto em termo do peso total das arestas,
 entre um nó inicial e todos os demais nós do grafo.
 Para cada vértice v do grafo, é mantido um atributo d[v]
 chamado de limite superior para o peso do caminho mais curto
 ao nó inicial s a v.
 Assim d[v] é uma estimativa do caminho mais curto, inicialmente
 feito como infinito (para isso foi utilizada a biblioteca limits.h)
 Armazenamos o vértice que precede v (p[v]) no caminho mais curto 
 de s a v.

Etapas:
1 - Estima-se a distancia de s a qualquer vertice ser infinita, exceto
a distancia de s a s que é 0. (d[s] = 0 e d[v] = infinito v != s)
2 - Fazer os precedentes dos nós serem um valor qualquer, para 
a abordagem aqui foi utilizado -1, já que não temos índices negativos
na estrutura do grafo.
3 - Todos vértices são marcados como abertos, então escolhe-se o vértice 
aberto u cuja estimativa seja menor dentre os demais abertos.
4 - Fecha-se u e para todo nó aberto v na adjacencia de u, soma-se d[u]
ao peso da aresta (u,v) caso a soma seja menor que d[v], atualiza-se d[v]
e faz p[v] = u (procedimento de relaxamento da aresta u,v)
*/

/* Executa Algoritmo de dijkstra e retorna conjunto s
que compõe menor caminho */
int *dijkstra(GRAFO *, int s);

/* Imprime o menor caminho encontrado pelo algoritmo */
void imprimeMenorCaminho(GRAFO *,int *);