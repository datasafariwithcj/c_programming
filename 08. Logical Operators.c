#include<stdio.h>

int main(){

    printf("%d \n", 4>3 && 3>4);
    printf("%d \n", 3>2 || 2>3);
    printf("%d \n", !(4>3 && 3>4));
    printf("%d \n", !(3>2 || 2>3));
    return 0;
}