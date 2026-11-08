#include<stdio.h>

int main(){

    int numerator, denominator, modulo;

    printf("Enter the numerator: \n");
    scanf("%d",&numerator);
    
    printf("Enter the denominator:\n");
    scanf("%d",&denominator);
    
    modulo = numerator % denominator;
    printf("The modulo is %d \n", modulo);

    return 0;
}