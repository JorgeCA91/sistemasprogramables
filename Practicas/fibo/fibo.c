/*
 * Serie de Fibonacci.c
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
	int n, tmp=0, aux, fibo=1,i;
	printf("¿Cuantos valores de la seria quieres?___");
	scanf("%d",&n);
	while (n<1) {
		printf("¿Cuantos valores de la seria quieres?___");
		scanf("%d",&n);
	}
	for(i = 0; i< n;i++) {
		printf("|%d|-",fibo);
		aux = fibo;
		fibo = tmp + fibo;
		tmp = aux;
	}
	printf("\n");
	return 0;
}
