#include <stdio.h>

int main() {
    int num, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("\nBreakdown of calculation:\n");
    
    while (num >= 10) {
        sum = 0;
        int temp = num;
        int first_digit = 1;
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit;
            if (first_digit) {
                printf("%d", digit);
                first_digit = 0;
            } else {
                printf(" + %d", digit);
            }
            temp /= 10;
        }
        printf(" = %d\n", sum);
        num = sum;
    }
    printf("\nGeneric root: %d\n", num);
    return 0;
}
