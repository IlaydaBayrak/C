#include <stdio.h>

int puan;

int main()
{
	puan = 73;
	printf("%5d",puan - 2);					//d'nin yan�na yazd���m�z say� kadar bo�luk b�rak�yor.
	printf("%5d",puan * 2);
	printf("%5d",puan / 2);
	printf("%5d",puan % 2);
	printf("%5d",123 + 456);
	printf("%5d \n", 12 * 2 + 2 - 8 / 4);
	printf("%4d%4d \n\n\n",10,20);					//yan yana yazmak da bir �eyi de�i�tirmiyor.
	
	
	printf("%d \n", puan);		//ilk de�erimiz 73't�.
	puan = puan + 5;			//be� ekledik.
	printf("%d \n\n\n", puan);		//�imdi ise puan yeni bir de�ere sahip oldu.
	
	
	int a, b;
	printf("a sayisini giriniz: ");
	scanf("%d",&a);
	
	printf("b sayisini giriniz:");
	scanf("%d",&b);
	
	printf("Toplam = %d\n",a+b);
	printf("Fark = %d\n", a-b);
	printf("Carpim = %d\n", a*b);
	printf("Bolum = %d\n", a/b);	//b�lmede sadece tam say� k�sm�n� al�yor.
	printf("Kalan = %d\n", a%b);
	printf("Artim = %d\n", ++a);
	printf("Eksilme = %d\n", --b);	
	
	puan = ++puan;
	printf("%d\n",puan);  //��kt� 79
	
	
	
	return 0;
}
