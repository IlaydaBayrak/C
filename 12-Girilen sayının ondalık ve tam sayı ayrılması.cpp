#include <stdio.h>

int main()
{
	double d;									//say� girme ekran� a��ld���nda int de�erine ondal�kl� say� girersen otomatik olarak double de�erine atama
	int i;										//yapacakt�r ve de�er girmeni istemeyecektir.
	
	printf("tamsayi giriniz:");
	scanf("%d",&i);
	
	printf("ondalikli sayi giriniz:");
	scanf("%lf",&d);
	
	
	printf("\n");
	
	printf("d = %lf \ni = %d",d,i);

	return 0;
}
