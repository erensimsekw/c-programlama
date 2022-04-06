#include<stdio.h>
int main(){
	int top=0,sayi,i=0;
	do{
		printf("sayi giriniz: ");scanf("%d",&sayi);
		top+=sayi;
		i++;

	}while(top=100);
	printf("%d adet sayi toplami 100'dur",i);
}
