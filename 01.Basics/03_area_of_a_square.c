#include<stdio.h>

int main(){
    printf("Let's calculate the area of a square!!\nPlease enter the length or bredth of square:");
    float _length;
    scanf("%f", &_length);
    printf("The area is: %f", _length * _length);
    return 0;
}