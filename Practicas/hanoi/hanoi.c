/*
 * Torres de Hanio.c
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
	int n;
	printf("Escriba el numero de discos en la torre de hanoi: ");
	scanf("%d",&n);
	while(n<0){
		printf("Error, reescriba el numero de discos en la torre: ");
		scanf("%d",&n);
    }
	algoritmoHanoi(n,"Primera Torre","Segunda Torre","Tercera Torre");
	
	return 0;
}

int algoritmoHanoi(n, origen, aux, fin) {
	if (n == 0) return;
		algoritmoHanoi(n-1, origen, fin , aux);
		//printf("Mover disco %s de %s a %s \n",n,origen,fin);
		printf("Mover disco %d de %s a %s\n",n,origen,fin);
		algoritmoHanoi(n-1, aux, origen, fin);
	//System.out.println(n);
	return 0;
}
