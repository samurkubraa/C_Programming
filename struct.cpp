#include<stdio.h>
#include <locale.h>
#include<stdlib.h>
#include<string.h>

struct kitapbilgi{
	char kitap_adi[50];
	float kitap_fiyati;
	float puan;
};
struct kitapbilgi kb;
main(){
	
	setlocale(LC_ALL,"Turkish");
	
	/*
	struct kitapbilgi kb={"1984",89,7.5};
    printf("Kitap Adý : %s\n",kb.kitap_adi);
    printf("Kitap Fiyatý : %.2f\n",kb.kitap_fiyati);
    printf("Kitap Puaný : %.2f\n",kb.puan);
    */
    
    printf("Kitap Adý : ");
    scanf("%s",&kb.kitap_adi);
    printf("\n");
    printf("Kitap Fiyatý : ");
    scanf("%f",&kb.kitap_fiyati);
    printf("\n");
    printf("Kitap Puaný : ");
    scanf("%f",&kb.puan);
    
    printf("Kitap Adý : %s \n",kb.kitap_adi);
	printf("Kitap Fiyatý : %f \n",kb.kitap_fiyati);
	printf("Kitap Puaný : %f",kb.puan);
}
