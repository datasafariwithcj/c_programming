#include<stdio.h>

int main(){
    float _pi = 3.14;
    printf("Please enter the radius of a circle:\n");
    float _radius;
    scanf("%f",&_radius);
    printf("The area of circle is: %f", _pi * _radius * _radius);
    return 0;
}