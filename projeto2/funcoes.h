#ifndef funcoes_h
#define funcoes_h


int **cria_matriz(int num_linhas, int num_colunas, char url[]){
	char *token;
	int **matriz;
	FILE *arq;
	char c;

	arq = fopen(url, "r");
	if(arq == NULL){
		printf("Erro, nao foi possivel abrir o arquivo\n");
	}

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

	for(int i = 0; i < num_linhas; i++){
		for(int j = 0; j < num_colunas; j++){
			fscanf(arq,"%i%c",&matriz[i][j],&c);
		}
	}

	return (matriz);

}

//Pegando valores de num_linhas e num_colunas
// else{
// 	while( (ch=fgetc(arq))!= EOF ){
// 		if(ch == '\n'){
// 			num_linhas++;
// 		}
// 		else{
// 			if(num_linhas == 9){
// 				if(ch == ';'){
// 					num_colunas++;
// 				}
// 			}
// 		}
// 	}
// }
// num_linhas+=1;
// num_colunas+=2;

#endif
