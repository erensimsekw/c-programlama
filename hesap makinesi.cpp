/* toplama == t
cikarma == c
bolme == b
carpma ==carp */

#include<stdio.h>
int main(){
	float sayi1,sayi2,sonuc;
	int secim;
	printf("1.toplama\n");
	printf("2.cikarma\n");
	printf("3.bolme\n");
	printf("4.bolme\n");
	printf("Tercihinizi sayisal olarak giriniz(1-4): ");scanf("%d",&secim);
	if(secim>0 && secim<5){
		if(secim==1){
			printf("\ntoplama islemine girecek iki sayi giriniz: ");scanf("%f %f", &sayi1, &sayi2);
			sonuc=sayi1+sayi2;
			printf("\ntoplama islemine giren sayilarin sonucu %f",sonuc);
		}
		else if(secim==2){
			printf("\ncikarma islemine girecek iki sayi giriniz: ");scanf("%f %f", &sayi1, &sayi2);
			if(sayi1<sayi2)
			printf("\ncikarma islemine giren sayilarin sonucu %f",sonuc);
		}
		else if(secim==3){
			printf("\ntoplama islemine girecek iki sayi giriniz: ");scanf("%f %f", &sayi1, &sayi2);
			sonuc=sayi1+sayi2;
			printf("\ntoplama islemine giren sayilarin sonucu %f",sonuc);
		}
		
		else{
			printf("\ntoplama islemine girecek iki sayi giriniz: ");scanf("%f %f", &sayi1, &sayi2);
			sonuc=sayi1+sayi2;
			printf("\ntoplama islemine giren sayilarin sonucu %f",sonuc);
		}
	}
	else{
		printf("yanlis islem degeri girdiniz.");
	}

}
