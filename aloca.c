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

int main(int argc, char **argv)
{
	int **M;
	int i,j,a,dim;
	FILE *leitura;
    
    leitura = fopen("matriz.dat", "r");
	i = fscanf(leitura,"%d",&dim);
	
	M = malloc( dim*sizeof(double *));
	for( i = 0 ; i < dim ; i++ ) {
		M[i] = malloc((dim+1)*sizeof(double) );
	}    
	i = j = 0;
	
	while ( fscanf(leitura,"%d",&a) != EOF) {
		M[i][j] = a;
		j++;
		if (j == dim) {
			j = 0;
			i++;
		}
	}		
	
	for(i=0;i<dim;i++) {
		for(j=0;j<dim;j++) { 
			printf("%3d ",M[i][j]);
		}	  
		puts("");
	}		
	return 0;
}

