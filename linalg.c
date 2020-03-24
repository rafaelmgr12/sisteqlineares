#include <stdio.h>
#include <stdlib.h>
#include "linalg.h"

int main(int argc, char **argv)
{
    double **M; 
    int m,n;

    
    if (argc<4) {
        puts("ERRO:  entre os argumentos na linha de comando. ");
        return 1;
    }    
    m=atoi(argv[2]);n=atoi(argv[3]); 
    M=ler(argv[1],m,n);
    imprime(M,m,n);
    return 0;
}
