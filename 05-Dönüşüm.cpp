#include <stdio.h>

int main()
{
	int a = 7, b = 3;
	int integerdiv, modulus;
	float floatdiv;
	
	integerdiv = a / b; 		//tam say� b�lme
	modulus = a % b; 	  		//kalan
	floatdiv = (float) a / b;	//float'a d�n���m, virg�ll� olarak yazacakt�r.
	
	printf("a / b = %d\n", integerdiv);
	printf("a % b = %d\n", modulus);
	
	printf("(float) a / b = %f\n", floatdiv);
	
	return 0;
}
