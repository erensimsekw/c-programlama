/*sesli veya sessiz harf denetleyen program!*/
#include<stdio.h>
main(){
	char harf;
	printf("Harf giriniz: ");scanf("%c",&harf);
	if(harf== 'A' || harf=='E'|| harf=='I'|| harf=='O'|| harf=='U'|| harf=='a'|| harf=='e'|| harf=='i'|| harf=='o'|| harf=='u')
{
		printf("girilen sesli harftir...");
		
	}
	else{
		printf("Girilen harf sessiz harftir.");
	}
	
}
