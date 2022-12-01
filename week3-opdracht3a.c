#include <stdio.h>

void maxArrays(float*, float*, float*);

int main()
{
	float ar1[5]={0.7, 3.3, 0.5, 10.3};
    float ar2[5]={4.1, 1.5, 0.5, 2.3};
    float ar3[5]={4.1, 3.3, 0.5, 10.3};
    maxArrays(&ar1[0], &ar2[0], &ar3[0]);
    printf("Dit zijn de uitkomsten:\n");
    printf("-----------------------\n"); 
    for (int x=0; x<5; ++x){
        
        printf("%i: %.1f \n", x, ar3[x]);
    }
	return(0);
}

void maxArrays(float* ar1pointer, float* ar2pointer, float* ar3pointer){
    for (int i=0; i<5; ++i)
        {
            float ar1t = ar1pointer[i];
            float ar2t = ar2pointer[i];
            if (ar1t == ar2t){
                ar3pointer[i] = ar1t;
            } else if (ar1t > ar2t){
                ar3pointer[i] = ar1t;
            } else {
                ar3pointer[i] = ar2t;
            }
        }
}