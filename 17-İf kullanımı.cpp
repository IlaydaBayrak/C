#include<stdio.h>

int main() {
	
	char n;			//int de olur.
	
	printf("not giriniz: ",n);
	scanf("%d",&n);
	
	if (n<50)						//tek sat�r yaz�lacaksa s�sl� paranteze gerek yok.
	printf("Sinifta kaldiniz.");	//ayr�ca NOKTALI V�RG�L kullan�lmas�na gerek yoktur.
	
	if(n>=50) {						//iki veya daha fazla sat�r yaz�lacak ise s�sl� parantez kullan�lmal�.
	printf("Tebrikler!\n");
	printf("Sinifi gectiniz.");
	}
									//ayn� �eyler else komutu i�in de ge�erlidir.
	return 0;
}
