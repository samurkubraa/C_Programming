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
    printf("Kitap Ad� : %s\n",kb.kitap_adi);
    printf("Kitap Fiyat� : %.2f\n",kb.kitap_fiyati);
    printf("Kitap Puan� : %.2f\n",kb.puan);
    */
    
    printf("Kitap Ad� : ");
    scanf("%s",&kb.kitap_adi);
    printf("\n");
    printf("Kitap Fiyat� : ");
    scanf("%f",&kb.kitap_fiyati);
    printf("\n");
    printf("Kitap Puan� : ");
    scanf("%f",&kb.puan);
    
    printf("Kitap Ad� : %s \n",kb.kitap_adi);
	printf("Kitap Fiyat� : %f \n",kb.kitap_fiyati);
	printf("Kitap Puan� : %f",kb.puan);
}
