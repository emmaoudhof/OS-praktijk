#include<stdio.h>
void area(float *r,float *a)
{
	*a=(1*22*(*r))/(7);
}
 
int main()
{
	
	float c=1,r;
	printf("Diameter: ");
	scanf("%f",&r);
        area(&r,&c); 
	printf("Omtrek: %.0f\n",c);
	return 0;
}


