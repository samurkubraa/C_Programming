#include<stdio.h>
#include <locale.h>
#include<stdlib.h>
#include<string.h>

main(){
	setlocale(LC_ALL,"Turkish");
	
	char a[400];
	printf("Bilgiyi girin : ");
	gets(a); /*Bilgiyi kullan�c�dan al�r*/
	puts(a);/*Bilgiyi ekrana yazar*/
}
