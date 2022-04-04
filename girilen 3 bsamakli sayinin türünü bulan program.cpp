/* girilen üç basamaklý sayýnýn türünü veren program(girilen sayi üc basamakli olmak zorunda).
112,116,229 formatinda iste mukemmel sayidir.
121,151,565 formatinda ise harika sayidir.
122,166,899 formatinda iste süper sayidir.
diger sayilar iste normal sayidir.
*/
#include<stdio.h>
main(){
	int sayi,y,on,b;
	printf("Sayi giriniz(uc basamakli olmali): ");scanf("%d",&sayi);
	if(sayi>99 && sayi<1000){
		y=sayi/100;
		on=(sayi/10)%10;
		b=sayi%10;
		if(y==on && y!=b){
			printf("girilen sayi mukemmel sayidir..");
		}
		else if(y==b && y!=on){
			printf("girilen sayi harika sayidir..");
		}
		else if(y!=on && on==b){
			printf("girilen sayi super sayidir..");
		}
		else{
			printf("girilen sayi normal sayidir..");
		}
		
	}
	else{
		printf("yanlis sayi girdiniz.");
	}
}
