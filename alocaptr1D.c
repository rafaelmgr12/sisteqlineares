/*
 * aloca.c
 * 
 * Copyright 2018 Thadeu Penna <tjpp@entrhopia>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h> 

void Quadrado(int *M, int dim) {
    int i,j;
    
    for (i=0;i<dim;i++)
        M[i]=M[i] * M[i];
        
}


int main(int argc, char **argv)
{
	int *M;
	int i,j,a,dim;
	FILE *leitura;
    
    leitura = fopen("matriz.dat", "r");
	i = fscanf(leitura,"%d",&dim);
	
	M = malloc( dim*dim*sizeof(int *));
	i = 0;
	
    
	while ( fscanf(leitura,"%d",&a) != EOF) {
		M[i] = a;
		i++;
	}		
	
	Quadrado(M,dim*dim);
	for(i=0;i<dim*dim;i++) {
        printf("%3d ",M[i]);
        if ((i+1)%dim==0) puts("");
	}		
	
	free(M);
	return 0;
}

