#include<stdio.h>
#include <locale.h>
#include<stdlib.h>
#include<string.h>

main(){
	setlocale(LC_ALL,"Turkish");
	
	int a[100][100];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){

	    for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}	
	
}
