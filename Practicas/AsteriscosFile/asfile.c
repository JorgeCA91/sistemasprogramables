/*
 * Ejercicio de los Astericos leyendo el numero de
 * niveles desde un archivo
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
#include <stdlib.h>

int main() {
	int n, s=0, num_lineas;
	FILE *fp;
	if( (fp = fopen("levels.txt", "r+")) ) {
		while(fscanf(fp,"%d",&n) == 1)
			num_lineas++;
		fclose(fp);
	}
	if( num_lineas == 1 ) {
		fp = fopen("levels.txt", "r+");
		while( s <= 5) {
			s++; selector(s,n);
		}
	} else if ( num_lineas == 4 ) {
		fp = fopen("levels.txt", "r+");
		while(fscanf(fp,"%d",&n) == 1) {
			s++; selector(s,n);
		}
	} else { exit(1); }
	return 0;
}
int fun01 (int n) {
	int i,j;
	for (i=0; i<n; i++) {
		for (j=0; j<(i+1); j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
int fun02 (int n) {
	int i,j;
	for (i=n; i>0; i--) {
		for (j=i; j>0; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
int fun03 (int n) {
	int i,j;
	for (i=0; i<n; i++) {
		int esp = n - (i+1);
		int ast = n - esp;
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
int fun04 (int n) {
	int i,j,e;
	int esp = 0;
	for (i=n; i>0; i--) {
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
int selector (int f, int n) {
	if(f==1)
		fun01(n);
	if(f==2)
		fun02(n);
	if(f==3)
		fun03(n);
	if(f==4)
		fun04(n);
	return 0;
}
