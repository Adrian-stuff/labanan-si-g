#include <stdio.h>

int main(void){
    int number;
    printf("Enter number to create table: \n");
    if (scanf("%d", &number) != 1 || number < 0) {
        printf("Error\n");
        while (getchar() != '\n');
        return 0;
    }
    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d \n", i,number, i * number);
    }
    return 0;
}