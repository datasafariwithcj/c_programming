#include<stdio.h>
#include<math.h>

int main(){
    float base, exponent;

    printf("Type the number for the base: \n");
    scanf("%f",&base);
    
    printf("Type the number for the exponent: \n");
    scanf("%f",&exponent);
    
    float power = pow(base, exponent);
    
    printf("%f raised to the power of %f is %f: \n", base, exponent, power);
    
    return 0;
}