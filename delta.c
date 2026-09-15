#include <stdio.h>
#include <math.h>


int main(){
	float a, b, c;
	float delta, x1, x2;
	
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	
	delta  = (b * b) - (4* a *c);
	
	x1 = (-b+ sqrt(delta)) / (2*a);
	x2 = (-b - sqrt(deslta)) / (2 * a);
	
	printf("x1 = %2.f\n", n1);
	printf("x2 = %2.f\n", n2);
	
	return 0;
}
