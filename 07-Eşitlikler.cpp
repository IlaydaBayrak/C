#include <stdio.h>

int main()
{
		
	int x = 10;			// 1 = do�ru
	int y = 4;			// 0 = yanl��
	int sonuc;
	
	sonuc = (x>y);					//b�y�k
	printf("x>y = %d \n", sonuc);
	
	sonuc = (x<y);					//k���k
	printf("x<y = %d \n", sonuc);
	
	sonuc = (x<=y);					//k���k e�it
	printf("x<=y = %d \n", sonuc);
	
	sonuc = (x>=y);					//b�y�k e�it
	printf("x>=y = %d \n", sonuc);
	
	sonuc = (x==y);					//e�it mi
	printf("x==y = %d \n", sonuc);
	
	sonuc = (x!=y);					//e�it de�il mi
	printf("x!=y = %d \n", sonuc);
	
	printf("\n\n\n");


	return 0;
}
