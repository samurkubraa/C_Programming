#include<stdio.h>
#include <locale.h>
#include<stdlib.h>
#include<string.h>

main(){
		
	setlocale(LC_ALL,"Turkish");
    
	/* STRCPY KULLANIMI	*/
	char nereden[100]="Ankaradan geldik";
	char nereye[100]="";
	strcpy(nereye,nereden);
	printf("%s\n",nereye);

	
		/* STRNCPY KULLANIMI */
	char ne[100]="Programlamada hata oldu";
	char neden[100]="";
	strncpy(neden,ne,15);
	printf("%s",neden);
	

}
