#include <stdio.h>

int main()
{
	int x;
	x =5;
	
	printf("x = %d\n", x);
	printf("++x = %d\n", ++x);
	printf("x = %d\n\n\n", x);      //atr�k x'in de�eri de�i�ti�i i�in alt� olarak ��kt� veriyor.
	
	x = 5;							//x'in de�erini tekrardan 5 yapt�k.
	printf("x++ = %d\n", x++);   	//�nce x'i okudu.
	printf("x = %d\n", x);			//sonras�nda x'i buraya yazarken artt�rd� ��nk� art� i�areti x'den sonra.
	
	printf("\n\n\n");
	
	
	int a = 35;			//�ZER�NDE �ALI�ILACAK!!!!!
	float b = 12.7;
		printf("a = %d iken --a = %d ve a = %d olur.\n",a, --a, a);
		printf("a = %d iken ++a = %d ve a = %d olur.\n",a, ++a, a);
		printf("a = %d iken a-- = %d ve a = %d olur.\n",a, a--, a);
		printf("a = %d iken a++ = %d ve a = %d olur.\n",a, a++, a);
	
	printf("\n\n");
	
		printf("b = %f iken --b = %f ve b = %f olur.\n",b, --b, b);
		printf("b = %f iken ++b = %f ve b = %f olur.\n",b, ++b, b);
		printf("b = %f iken b-- = %f ve b = %f olur.\n",b, b--, b);
		printf("b = %f iken b++ = %f ve b = %f olur.\n",b, b++, b);
		
		printf("\n\n\n");
		
		int z = 7, y = 3;			//i�lemleri b�yle de yapabiliriz.
		printf("z + y = %d\n",z+=y); 
		printf("z - y = %d\n",z-=y);
		printf("z * y = %d\n",z*=y);
		printf("z / y = %d\n",z/=y);
		printf("z % y = %d\n",z%=y);	
		
	return 0;
}
