//Kar���kl�k yapt��� i�in pek kullan�lmaz ama bilinmeli.
#include<stdio.h>

int main() {

	int x, kare;
	
	gir:	//gir adl� bir etiket 
	
	printf("sayi:");
	scanf("%d",&x);
	
	if (x<0)
	goto gir;	//if i�erisindeki ko�ul sa�land��� takdirde goto komutu �al���r ve etiketin oldu�u yere d�ner.
	
	kare = x*x;
	printf("Girilen sayinin karesi = %d",kare);

	return 0;
}
	
