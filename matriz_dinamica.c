#include <stdlib.h>
#include <stdio.h>

void main(){
int m=3,n=3;

int **M; 
int i,j,num=0;
M = malloc (m * sizeof (int *));
for (i = 0; i < m; ++i)
M[i] = malloc (n * sizeof (int));

	for (i=0; i<m; i++){
		for (j=0; j<n; j++){
		M[i][j] = num;
		num++;}
	}

for (i = 0; i < m; ++i){
	for (j=0; j<n; j++){
	printf("%i ",M[i][j]);
	}
	printf("\n");}
}




