#include <stdio.h>

int main(void){
    int number;
    printf("Enter number to create table: \n");
    scanf("%d", &number);

    for(int i = 0; i < 10; i++){
        printf("%d * %d = %d \n", i,number, i * number);
    }
    return 0;
}