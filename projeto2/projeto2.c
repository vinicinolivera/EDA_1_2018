#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funcoes.h"

int **aloca_memoria_arquivo(int num_linhas, int num_colunas);
int main()
{
	char url[]="DataSet/asphalt/asphalt_05.txt";
	char ch;
	int num_linhas=0, num_colunas=0;
	char *token;
	int **matriz;
	FILE *arq;

	arq = fopen(url, "r");
	if(arq == NULL){
		printf("Erro, nao foi possivel abrir o arquivo\n");
	}

	else{
		while( (ch=fgetc(arq))!= EOF ){
			if(ch == '\n'){
				num_linhas++;
			}
			else{
				if(num_linhas == 9){
					if(ch == ';'){
						num_colunas++;
					}
				}
			}
		}
	}

	printf("Existem %d linhas no arquivo\n", num_linhas);
	printf("Existem %d colunas no arquivo\n", num_colunas);

	matriz = aloca_memoria_arquivo(num_linhas, num_colunas);


  return 0;
}
