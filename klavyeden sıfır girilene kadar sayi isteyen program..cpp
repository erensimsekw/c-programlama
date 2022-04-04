/* klavyeden sýfýr girilene kadar toplayan program!*/
#include<stdio.h>

int main(){
	int say;
	int top=0;
	int sayi;
	
		
		do{
			printf("sayi giriniz: ");scanf("%d",&sayi);
			top+=sayi;
			say=say+1;
		}while(sayi!=0);
		printf("girilen %d sayi toplami %d",say-1,top);
	
}
