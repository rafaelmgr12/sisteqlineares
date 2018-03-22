/*
 * matrix.c
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

int main(int argc, char **argv)
{
  int matrix[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int *p;

  p=matrix;
  printf ("O terceiro elemento do vetor e: %d\n",p[2]);
  p[2]=11;
  printf ("O terceiro elemento do vetor e: %d\n",matrix[2]);
  return 0;
}
