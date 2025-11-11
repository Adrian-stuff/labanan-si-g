#include <stdio.h>

int isPerfectNumber(int num) {
    if (num <= 1) {
        return 0;
    }

    int sum = 1;

    int i = 2;
    for (int i = 2; i * i <= num; i++) {

    //}
    //while (i * i <= num) {
        if (num % i == 0) {
            sum += i;
        
            int pair = num;
            if (pair != i) {
                sum += pair;
            }
        }
        i++;
    }
    return sum;
}

int main(void) {
    int number;
    printf("Enter a number: ");
    if (scanf("%d", &number) != 1 || number < 0) {
        printf("Error\n");
        while (getchar() != '\n');
        return 0;
    }
    int isPerfect = isPerfectNumber(number);
    if (isPerfect) {
        printf("%d is a Perfect Number", number);
    }
    else {
        printf("%d is a not Perfect Number", number);
    }

	return 0;
}