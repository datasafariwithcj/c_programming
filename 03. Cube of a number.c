#include<stdio.h>
int main(){

    float number;
    printf("Type the number for which you want to find the cube: \n");
    scanf("%f",&number);
    printf("The cube of number %f is %f", number, number*number*number);

    return 0;
}