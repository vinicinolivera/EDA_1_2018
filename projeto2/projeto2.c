#include <stdio.h>
#include "funcoes.h"

int main()
{
	char url[]="DataSet/asphalt/asphalt_01.txt";
	char ch;
	int num_linhas=0;
	FILE *arq;
	
	arq = fopen(url, "r");
	if(arq == NULL)
			printf("Erro, nao foi possivel abrir o arquivo\n");
	else


  return 0;
}
