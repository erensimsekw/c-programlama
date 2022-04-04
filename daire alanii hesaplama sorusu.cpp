/*Yariçapi girilen dairenin alanýný hesaplayan program. pi*r*r */
#include<stdio.h>
int main(){
	float yaricap,daireAlani;
	const float pi = 3.14;
	printf("Yaricap giriniz: ");scanf("%f",&yaricap);
	daireAlani=pi*yaricap*yaricap;
	printf("Yaricapi girilen dairenin alani %f",daireAlani);
}
