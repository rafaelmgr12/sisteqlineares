/*
 * ponteiros.c
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

int main(int argc, char **argv) {
  int j, k;
  int *ptr;
  j = 1;
  k = 2;
  ptr = &k;

  printf("\n");
  printf("  j vale %d e esta em  %p\n", j, (void *)&j);
  printf("  k vale %d e esta em  %p\n", k, (void *)&k);
  printf("ptr vale %p e esta em  %p\n", ptr, (void *)&ptr);
  printf("o valor do inteiro apontado por  ptr e %d\n", *ptr);
  return 0;
}	

