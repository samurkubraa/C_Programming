#include<stdio.h>
#include <locale.h>
#include<stdlib.h>
#include<string.h>

main(){
	setlocale(LC_ALL,"Turkish");
	

   char metin[100];
   printf("Metin = ");
   scanf("%s",&metin);
   printf("Metin =%s\n",metin);
   printf("Metnin uzunluðu = %d",strlen(metin));

}
