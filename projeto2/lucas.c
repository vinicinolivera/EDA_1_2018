// lucas
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LIN 1026
#define COL 1026

int main(){
	FILE *fp;
  char url[]="DataSet/asphalt/asphalt_05.txt";
  int ** imagem;
  int tamanho = LIN*COL;
  imagem = (int *) calloc(tamanho, sizeof(int *));
  char c;
	fp =fopen(url,"r");

	for(int i =0 ; i <COL*LIN;i++){
		if(i%1025==0){
			imagem[i] = 0;
			continue;

		}
    fscanf(fp,"%i%c",&imagem[i],&c);
  }

for(int i = 0; i < LIN; i++){
  for(int j = 0; j < COL; j++)A{

  }
}
  	for(int i =0 ; i <COL*LIN;i++){
  		if(i%1026==0){
  			imagem[i] = 0;
  			continue;
          printf("\n");
  		}
      printf("%i\t",imagem[i]);
  }
  return 0;
}
