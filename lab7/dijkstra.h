
/**
 * Arvore de Caminhos Minimos.
 * Armazena a origem, um vetor de distancias e um de antecessores.
 * origem e' o codigo inteiro do vertice de origem (raiz da arvore)
 * distancias[i] indica a distancia da origem ate' o vertice i
 * antecessor[i] indica o antecessor do vertice i na rota de menor
caminho
 * Observe que a arvore de caminhos minimos nao e’ um TAD, pois
estamos expondo os atributos do tipo para o usuario acessar
diretamente
 */
typedef struct arvore_cm {
	int origem;
	float* distancia;
 	int* antecessor;
} arvore_cm;
/**
* Executa o algoritmo de Dijkstra no grafo recebido,
* retornando a arvore de caminhos minimos com raiz na origem
*/
arvore_cm* dijkstra(t_grafo *g, int origem);
/** 
* Mostra na tela o menor caminho ate' o destino,
 * usando a arvore de menores caminhos recebida
 */
void print_menor_caminho(arvore_cm* a, int destino);
/**
 * Retorna a lista de vertices na rota de menor caminho
 * entre a origem da arvore e o destino
 */
t_lista* menor_caminho(arvore_cm* a, int destino); 