#include<stdio.h>

int main(){

    int result;

    printf("Let's test your BODMAS skills. \nPlease solve this equation: 2 + 3 * 4 - 6 /2 \n");
    
    scanf("%d", &result);

    switch (result){
        case 11: 
            printf("You're correct!!");
            break;
        default: 
            printf("That's incorrrect.\nThe correct answer is %d", 2 + 3 * 4 - 6 /2);
    }

    return 0;
}