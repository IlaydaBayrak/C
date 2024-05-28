#include<stdio.h>

//global de�i�kenlerimiz
static int s1, s2, toplam=0, fark =0;

int hesapla() {
	fark = s2 - s1;
	printf("fark = %d", fark);
}

int main() {
	
	/*NOT B�L�M�
	� de�i�kenler kullan�lmadan �nce tan�mlanmal�d�r.
	� ilk karekter harf (alfa numerik) olmal�d�r. rakam olmas� hataya sebebiyet verir.
	� bo�luk olmamal�. '_' kullan�labilir. 
	� t�rk�e karakterler kullan�lmamal�. �rn: �, �, � vb.
	� komutlar de�i�ken ad� olamaz.*/
	
	/*NOT B�L�M� 2
	main() fonksiyonun i�erisine tan�mlanan de�erler sadece o blokta kullan�l�r, di�er blo�a ge�ildi�inde bellekten silinir. yerel de�i�ken
	ama main() fonksiyonu d���na yaz�ld���nda program bitene kadar bellekte kal�r. bittikten sonra silinir. global de�i�ken.
	de�er tan�mlamak gerekli de�il isim verip blok i�erisinde de tan�mlayabilirsin.*/
	
	//global de�i�kenlerin ald��� de�erleri saklamas�n� istiyorsak static olarak tan�mlamal�y�z. �rnek yukar�da.
	
	s1 = 10;
	s2 = 20;
	toplam = s1 + s2;
	
	printf("toplam = %d\n",toplam);
	
	//hesapla fonksiyonunun �al��mas�n� sa�lar.
	//bu fonksiyon main() fonksiyonundan �nce gelmeli �teki t�rl� okunmuyor.
	hesapla();
	
	return 0;
}

