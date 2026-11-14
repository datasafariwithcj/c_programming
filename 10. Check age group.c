#include<stdio.h>

int main(){

    float age;
    printf("Please enter your age: \n");
    scanf("%f", &age);

    if (age >= 18){
        printf("You are an adult \n");
    }
    else if (age >=13){
        printf("You are a teenager \n");
    }
    else {
        printf("You are a child \n");
    };
    
    printf("Your age is %f", age);

    return 0;
}