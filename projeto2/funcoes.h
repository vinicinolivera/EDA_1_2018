#ifndef funcoes_h
#define funcoes_h


int **aloca_memoria_arquivo(int num_linhas, int num_colunas){
	int **matriz;
	int i = 0;

	//alocando memoria para as linhas
	matriz = (int **) calloc(num_linhas, sizeof(int *));
	if(matriz == NULL){
		printf ("** Erro: Memoria Insuficiente **");
		return (NULL);
	}

	//alocando memoria para num_colunas
	for(i = 0; i < num_linhas; i++){
		matriz[i] = (int *) calloc(num_colunas, sizeof(int *));
		if(matriz[i] == NULL){
			printf ("** Erro: Memoria Insuficiente **");
			return (NULL);
		}
	}
	return (matriz);

}

#endif
