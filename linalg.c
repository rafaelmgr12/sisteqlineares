#include <stdio.h>
#include <stdlib.h>

extern double **ler(char *arquivo, int m, int n);
extern void imprime(double **M, int m, int n) ;

int main(int argc, char **argv)
{
    double **M; 
    int m,n;

    m=atoi(argv[2]);n=atoi(argv[3]); 
    M=ler(argv[1],m,n);
    imprime(M,m,n);
    return 0;
}
