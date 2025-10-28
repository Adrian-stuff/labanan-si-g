#include <stdio.h>

int main(void){
    int number ;
    printf("Enter number: \n");
    scanf("%d", &number);
    int total = 0;
    for(int i = 1; i <= number; i++) total *= (++i) 
    return 0;
}