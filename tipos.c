/*
 * tipos.c
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
	 printf("size of a char is %d\n", (int) sizeof(char));
	 printf("size of a short is %d\n", (int) sizeof(short));
	 printf("size of a int is %d\n", (int) sizeof(int));
	 printf("size of a long is %d\n", (int) sizeof(long));
	 printf("size of a long long is %d\n", (int) sizeof(long long));
	 printf("size of a unsigned is %d\n", (int) sizeof(unsigned));
	 printf("size of a unsigned long is %d\n", (int) sizeof(unsigned long));
	 printf("size of a float is %d\n", (int) sizeof(float));
	 printf("size of a double is %d\n", (int) sizeof(double));
	 printf("size of a long double is %d\n", (int) sizeof(long double));
     return 0;
}

