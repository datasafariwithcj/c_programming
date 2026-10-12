#include<stdio.h>

int main(){
    
    float length, width;
    printf("What is the length of the rectangle? \n");
    scanf("%f", &length);
    printf("What is the width of the rectangle? \n");
    scanf("%f", &width);
    printf("The perimeter of the rectangle is : %f", 2*(length + width));
    return 0;
}