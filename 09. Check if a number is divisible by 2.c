#include<stdio.h>

int main(){

    int a;
    printf("Let's check if a number is divisible by 2 or not. \nPlease enter an integer: \n");
    scanf("%d", &a);
    int result;
    result = a%2;
    if 
        (result == 0)
            {
                printf("%d is divisible by 2.", a);
            }
    else
            {    
                printf("%d is not divisible by 2.", a);
            }
    return 0;
}