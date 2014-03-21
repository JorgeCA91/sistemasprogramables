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
	int iter,i,j,e;
	printf("Cuantos niveles?\n");
	scanf("%d",&iter);
	int esp = 0;
	for (i=iter; i>0; i--) {
		for (e=0; e<esp; e++) {
			printf(" ");
		}
		for (j=i; j>0; j--) {
			printf("*");
		}
		printf("\n");
		esp++;
	}
	return 0;
}
