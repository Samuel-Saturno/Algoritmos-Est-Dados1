/*  Definição de novo tipo: Aluno   */
typedef struct aluno Aluno;

/*  Fução aloca memória para struct aluno, recebe dados via teclado e retorna um ponteiro para Aluno    */
Aluno* recebe_dados(void);
void Show(Aluno* ponteiro);
void Limpar(Aluno* ponteiro);
