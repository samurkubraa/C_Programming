#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

typedef int d1;
main(){
	setlocale(LC_ALL,"Turkish");
	
	d1 d2;
	d1 d3;
	d1 toplam;
	
	d2=20;
	d3=30;
	toplam=d2+d3;
	
	printf("Sonuç = %d",toplam);

}
