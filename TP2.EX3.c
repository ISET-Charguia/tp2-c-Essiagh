/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b;
	double x;
	printf("donner un entier");
	scanf("%d",&a);
	printf("donne un 2eme entier");
	scanf("%d",&b);
	x=-b/a;
	printf("%ld",x);
	return 0;
}
