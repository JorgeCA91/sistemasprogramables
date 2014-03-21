/*
 * var1.c
 * 
 * Copyright 2014 Jorge Carreño Arellanes <jorge@jFed>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 */


#include <stdio.h>

int main() {
	int iter,i,j;
	printf("Cuantos niveles?\n");
	scanf("%d",&iter);
	for (i=0; i<iter; i++) {
		int esp = iter - (i+1);
		int ast = iter - esp;
		for (j=0; j<esp; j++) {
			printf(" ");
		}
		for (j=0; j<ast; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
