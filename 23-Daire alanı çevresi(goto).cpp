//dairenin yar��ap�n�n negatif veya s�f�r olup olmamas� kontrol edilip
//pozitif olan de�erlerin i�leme sokuldu�u kod
#include<stdio.h>
#define pi 3.14
int main() {

	double r, a, c;
	
	yaricap:	//etiket
	
	printf("dairenin yaricapini giriniz:");
	scanf("%lf",&r);
	
	printf("\n");
	
	if (r<=0)
	{
		printf("Hata!!! Lutfen uygun bir sayi girin.\n\n");
		goto yaricap;
	}
	
	a = pi * r * r;
	c =  2 * pi * r;
	
	printf("Dairenin alani = %f\nDairenin cevresi = %f",a,c);
	
	return 0;
}
