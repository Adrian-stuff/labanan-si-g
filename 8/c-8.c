#include <stdio.h>

int main(void){
    int number = 10;
    printf("Enter number to create table: \n");
    

    for(int i = 0; i <= 10; i++){
        for(int j = 0; j <= number; j++){
            if(i==0) printf(" %d |", j);
            else if(j==0) printf("| %d |", i);
            else printf(" %d |", i * j);
        }
        
        printf("\n");
    }
    return 0;
}