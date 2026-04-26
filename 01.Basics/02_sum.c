#include<stdio.h>

int main(){

    int _a,_b;

    printf("Input the value of a\n");
    scanf("%d",&_a);

    printf("Input the value of b\n");
    scanf("%d",&_b);

    int _sum = _a + _b;
    printf("The sum of a and b is: %d", _sum);

    return 0;
}