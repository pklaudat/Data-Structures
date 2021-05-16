/* 
* Universidade Federal do Rio Grande do 
* Aluno: Paulo Ricardo Klaudat Neto
* Matrícula: 00275760
*/

/* Questão 1 */

/* Fila de Banco */

// Dados
struct cliente 
{
    char nome[100];
    bool preferencia;
    int ordem;
};

typedef struct cliente clienteDoBanco;

// Operações
void adicionarFila(ClienteDoBanco* cl);
void removeFila(ClienteDoBanco* cl);

/* Times de Futebol */
// Dados
struct integrante
{
	char nome[100];
	char cargo[100];
	char nomeTime[100];
};

typedef struct integrante integranteTime;
// Operações
void cadastraIntegrante(integrante);

/* Campanha de vacinação */
// Dados
struct carteira
{
	char nome[100];
	bool vacinado;
	bool preferencia;
};
typedef struct carteira CarteiraDeVacinacao;

// Operação
bool VerificaCarteira(bool vacinado); // verifica se foi vacinado
void preencheCarteiravacinacao(CarteiraDeVacinacao* a); // preenche o cadastro na vacinação

