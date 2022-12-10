#include<stdio.h>
#include <locale.h>
#include<stdlib.h>
#include<string.h>

enum sehirler{
	istanbul,ankara,eskisehir,adiyaman,bolu,bursa,ordu
};
main(){
	setlocale(LC_ALL,"Turkish");
	
	
	enum sehirler sehir;
	sehir=bolu;
	printf("%d",sehir+1);
}
