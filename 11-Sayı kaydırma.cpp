#include <stdio.h>

int main()

{
	int a = 5;
	int b = 61616;
	float c = 54321.9876;
	

	printf("%d \n",a);	//normal
	printf("%5d \n",a);	//arada yaz�lan say� kadar bo�luk b�rak�r.
	printf("%-5d \n",a);//yaz�lan say� kadar sola do�ru gider.
	
	printf("\n\n");
	
	printf("%d \n",b);	//normal
	printf("%3d \n",b);	//hi� bir i�e yaramaz ��nk� alan 3 (yaz�lan say� kadar) ama yazan b'ye atanan daha b�y�k basamakl� say�d�r.

	printf("\n\n");
	
	printf("%7.2f \n\n",c);	//yedi basamak g�sterilecek iki tanesi noktadan sonras� olacak.
						//yuvarlama yapar son haneye g�re.
		
	double r = 3.1418;
					
	printf("|%f|\n",r);		//noktadan sonra 6 basamak g�sterir
	printf("|%10.2f|\n",r);	//10 karakter alan 3.14 (sa�a yasla)
	printf("|%-10.2f|\n",r);//10 karakter alan 3.14 (sola yasla)
	
	printf("\n\n");
	
	double s = 0.031418;
	
	printf("%e \n",s);		//ondal�k 6 karakter
	printf("%10.2e \n",s);	//toplam 10 karakter, ondal�k i�in iki karakter
	printf("%-10.2e \n",s);	//" + sola yasla
	
	
	return 0;
}
























































