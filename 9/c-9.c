#include <stdio.h>

int main(void){
    int number ;
    printf("Enter number: ");
    scanf("%d", &number);
    if(number <= 1){
        printf("number must not be less than or equal to 1");
        return 1;
    }
    int total = 1;
    for(int i = 1; i <= number; i++){
        total *= i;
    }
    printf("%d", total);
    return 0;
}