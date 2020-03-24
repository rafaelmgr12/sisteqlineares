#include <stdio.h>
#include <stdlib.h>

double **ler(char *nome,int m, int n) {
    double **M;
    int i,j;
    FILE *data;
    
    M=malloc(m*n*sizeof(double *));
    for(i=0;i<m;i++) M[i]=malloc(n*sizeof(double));
    data=fopen(nome,"r");
    for (i=0; i<m; i++) 
        for (j=0; j<n; j++) 
            fscanf(data,"%lf",&M[i][j]);
    fclose(data);
    return M;     
}    

void imprime(double **M, int m, int n) {
    int i,j;
     for (i=0; i<m; i++) {
        for (j=0; j<n; j++) 
            printf("%g ",M[i][j]);
        puts("");
     }   
}
