#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funcoes.h"
#define LIN 1025
#define COL 1025

int **cria_matriz(int num_linhas, int num_colunas, char url[]);

int main(){
	char url[]="DataSet/asphalt/asphalt_05.txt";
	int **matriz;

	matriz = cria_matriz(LIN, COL, url);

	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}


  return 0;
}
