#include <stdio.h>
#include <math.h>


long long factorial(int n) {
    if (n < 0) return 0;
    if (n == 0 || n == 1) return 1;
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

double power(double base, int exp) {
    return pow(base, (double)exp);
}

// i. S = 1 + 1/2 + 1/3 ........ 1/10
void calculateSeries_i() {
    double sum = 0.0;
    int limit = 10;
    printf("Series: S = 1 + 1/2 + 1/3 + ... + 1/%d\n", limit);
    printf("\nBreakdown of calculation:\n");

    for (int i = 1; i <= limit; i++) {
        double term = 1.0 / i;
        sum += term;
        printf("Term %d: 1/%d = %.6f\n", i, i, term);
        if (i < limit) {
            printf("  Current sum: %.6f\n", sum);
        }
    }
    printf("\nFinal Sum (S): %.6f\n", sum);
}

// ii. P= (1*2) + (2 *3) + (3* 4)+......(9 *10)
void calculateSeries_ii() {
    double sum = 0.0;
    int limit = 9;
    printf("Series: P = (1*2) + (2*3) + ... + (9*10)\n");
    printf("\nBreakdown of calculation:\n");

    for (int i = 1; i <= limit; i++) {
        int term_value = i * (i + 1);
        sum += (double)term_value;
        printf("Term %d: (%d*%d) = %d\n", i, i, i + 1, term_value);
        if (i < limit) {
            printf("  Current sum: %.0f\n", sum);
        }
    }
    printf("\nFinal Sum (P): %.0f\n", sum);
}

// iii. Q= 1/2 + 3/4 +5/6 +....13/14
void calculateSeries_iii() {
    double sum = 0.0;
    printf("Series: Q = 1/2 + 3/4 + 5/6 + ... + 13/14\n");
    printf("\nBreakdown of calculation:\n");

    int term_num = 1;
    for (int num = 1; num <= 13; num += 2) {
        double term = (double)num / (num + 1);
        sum += term;
        printf("Term %d: %d/%d = %.6f\n", term_num, num, num + 1, term);
        if (num < 13) {
            printf("  Current sum: %.6f\n", sum);
        }
        term_num++;
    }
    printf("\nFinal Sum (Q): %.6f\n", sum);
}

// iv. S = 2/5 + 5/9 + 8/13....n
void calculateSeries_iv() {
    int n;
    printf("Series: S = 2/5 + 5/9 + 8/13 + ... + n terms\n");
    printf("Enter number of terms (n): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }

    printf("\nBreakdown of calculation:\n");
    double sum = 0.0;
    for (int k = 1; k <= n; k++) {
        // Numerator: 3k - 1 (2, 5, 8...)
        // Denominator: 4k + 1 (5, 9, 13...)
        double numerator = (3.0 * k) - 1.0;
        double denominator = (4.0 * k) + 1.0;
        double term = numerator / denominator;
        sum += term;
        printf("Term %d: %.0f/%.0f = %.6f\n", k, numerator, denominator, term);
        if (k < n) {
            printf("  Current sum: %.6f\n", sum);
        }
    }
    printf("\nFinal Sum (S): %.6f\n", sum);
}

// v. S = x + x2 + x3 + x4......+ x9 + x10
void calculateSeries_v() {
    double x, sum = 0.0;
    int limit = 10;
    printf("Series: S = x + x^2 + x^3 + ... + x^%d\n", limit);
    printf("Enter value of x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }

    printf("\nBreakdown of calculation:\n");
    for (int k = 1; k <= limit; k++) {
        double term = power(x, k);
        sum += term;
        printf("Term %d: %.6f^%d = %.6f\n", k, x, k, term);
        if (k < limit) {
            printf("  Current sum: %.6f\n", sum);
        }
    }
    printf("\nFinal Sum (S): %.6f\n", sum);
}

// vi. P= x + x3/3 + x5/5 + x7/7�����n terms
void calculateSeries_vi() {
    double x, sum = 0.0;
    int n;
    printf("Series: P = x/1 + x^3/3 + x^5/5 + ... + n terms\n");
    printf("Enter value of x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }
    printf("Enter number of terms (n): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }

    printf("\nBreakdown of calculation:\n");
    for (int k = 1; k <= n; k++) {
        int exponent = (2 * k) - 1;
        double numerator = power(x, exponent);
        double denominator = (double)exponent;
        double term = numerator / denominator;
        sum += term;
        
        printf("Term %d: %.6f/%d = %.6f\n", k, numerator, exponent, term);
        if (k < n) {
            printf("  Current sum: %.6f\n", sum);
        }
    }
    printf("\nFinal Sum (P): %.6f\n", sum);
}

// vii. S= (13 *1) + (12 * 2)��(1 *13)
void calculateSeries_vii() {
    double sum = 0.0;
    int limit = 13;
    printf("Series: S = (13*1) + (12*2) + ... + (1*13)\n");
    printf("\nBreakdown of calculation:\n");

    for (int k = 1; k <= limit; k++) {
        // First factor: 13, 12, 11... (13 - k + 1)
        // Second factor: 1, 2, 3... (k)
        int first_factor = limit - k + 1;
        int second_factor = k;
        int term_value = first_factor * second_factor;
        sum += (double)term_value;
        printf("Term %d: (%d*%d) = %d\n", k, first_factor, second_factor, term_value);
        if (k < limit) {
            printf("  Current sum: %.0f\n", sum);
        }
    }
    printf("\nFinal Sum (S): %.0f\n", sum);
}

// viii. S = 1 + 1/(2^2) + 1/ (3^3) + 1/(4^4) + 1/(5^5) (Assuming k^k pattern)
void calculateSeries_viii() {
    double sum = 0.0;
    int limit = 5;
    printf("Series: S = 1/1^1 + 1/2^2 + 1/3^3 + ... + 1/5^5\n");
    printf("\nBreakdown of calculation:\n");

    for (int k = 1; k <= limit; k++) {
        double denominator = power(k, k);
        double term = 1.0 / denominator;
        sum += term;
        printf("Term %d: 1/%d^%d = 1/%.6f = %.8f\n", k, k, k, denominator, term);
        if (k < limit) {
            printf("  Current sum: %.8f\n", sum);
        }
    }
    printf("\nFinal Sum (S): %.8f\n", sum);
}

// ix. S = 1/1! + 1/2! + 1/3! �����+1/n!
void calculateSeries_ix() {
    int n;
    printf("Series: S = 1/1! + 1/2! + 1/3! + ... + 1/n!\n");
    printf("Enter number of terms (n, max 20): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 20) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }

    printf("\nBreakdown of calculation:\n");
    double sum = 0.0;
    for (int k = 1; k <= n; k++) {
        long long fact = factorial(k);
        double term = 1.0 / fact;
        sum += term;
        printf("Term %d: 1/%d! = 1/%lld = %.10f\n", k, k, fact, term);
        if (k < n) {
            printf("  Current sum: %.10f\n", sum);
        }
    }
    printf("\nFinal Sum (S): %.10f\n", sum);
}

// x. S = 1 + 1/3! + 1/5!+��..n terms
void calculateSeries_x() {
    int n;
    printf("Series: S = 1/1! + 1/3! + 1/5! + ... + n terms\n");
    printf("Enter number of terms (n, max 10): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }

    printf("\nBreakdown of calculation:\n");
    double sum = 0.0;
    for (int k = 1; k <= n; k++) {
        int denominator_fact = (2 * k) - 1; // 1, 3, 5, ...
        long long fact = factorial(denominator_fact);
        double term = 1.0 / fact;
        sum += term;
        printf("Term %d: 1/%d! = 1/%lld = %.10f\n", k, denominator_fact, fact, term);
        if (k < n) {
            printf("  Current sum: %.10f\n", sum);
        }
    }
    printf("\nFinal Sum (S): %.10f\n", sum);
}

// xi. S = 1 + (1+2) +(1+2+3) + ... +(1+2+3+...20)
void calculateSeries_xi() {
    double sum = 0.0;
    int limit = 20;
    printf("Series: S = 1 + (1+2) + (1+2+3) + ... + (1+2+...+%d)\n", limit);
    printf("\nBreakdown of calculation:\n");

    for (int k = 1; k <= limit; k++) {
        // The k-th term is the sum of integers from 1 to k: k*(k+1)/2 (Triangular number)
        double k_th_term = (double)(k * (k + 1)) / 2.0;
        sum += k_th_term;
        printf("Term %d: (1+2+...+%d) = %d*%d/2 = %.0f\n", k, k, k, k + 1, k_th_term);
        if (k < limit) {
            printf("  Current sum: %.0f\n", sum);
        }
    }
    printf("\nFinal Sum (S): %.0f\n", sum);
}

// xii. S= x + x2/2! + x3/3! + x4/4!.....+x10/10!
void calculateSeries_xii() {
    double x, sum = 0.0;
    int limit = 10;
    printf("Series: S = x/1! + x^2/2! + ... + x^%d/%d!\n", limit, limit);
    printf("Enter value of x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }

    printf("\nBreakdown of calculation:\n");
    for (int k = 1; k <= limit; k++) {
        double numerator = power(x, k);
        long long fact = factorial(k);
        double term = numerator / fact;
        sum += term;
        printf("Term %d: %.6f^%d/%d! = %.6f/%lld = %.8f\n", k, x, k, k, numerator, fact, term);
        if (k < limit) {
            printf("  Current sum: %.8f\n", sum);
        }
    }
    printf("\nFinal Sum (S): %.8f\n", sum);
}

// xiii. P = x/2! + x2/3! +��.x9/10!
void calculateSeries_xiii() {
    double x, sum = 0.0;
    int limit = 9;
    printf("Series: P = x/2! + x^2/3! + ... + x^%d/%d!\n", limit, limit + 1);
    printf("Enter value of x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }

    printf("\nBreakdown of calculation:\n");
    for (int k = 1; k <= limit; k++) {
        double numerator = power(x, k);
        int fact_num = k + 1;
        long long fact = factorial(fact_num);
        double term = numerator / fact;
        sum += term;
        printf("Term %d: %.6f^%d/%d! = %.6f/%lld = %.8f\n", k, x, k, fact_num, numerator, fact, term);
        if (k < limit) {
            printf("  Current sum: %.8f\n", sum);
        }
    }
    printf("\nFinal Sum (P): %.8f\n", sum);
}

// xiv. S = 1 � 2 + 3 - 4���. + 9 � 10
void calculateSeries_xiv() {
    int sum = 0;
    int limit = 10;
    printf("Series: S = 1 - 2 + 3 - 4 + ... + 9 - 10\n");
    printf("\nBreakdown of calculation:\n");

    for (int k = 1; k <= limit; k++) {
        if (k % 2 != 0) {
            sum += k;
            printf("Term %d: +%d\n", k, k);
        } else {
            sum -= k;
            printf("Term %d: -%d\n", k, k);
        }
        printf("  Current sum: %d\n", sum);
    }
    printf("\nFinal Sum (S): %d\n", sum);
}

// xv. S = 1^2 - 2^2 + 3^2 - 4^2���. +9^2 - 10^2
void calculateSeries_xv() {
    int sum = 0;
    int limit = 10;
    printf("Series: S = 1^2 - 2^2 + 3^2 - 4^2 + ... + 9^2 - 10^2\n");
    printf("\nBreakdown of calculation:\n");

    for (int k = 1; k <= limit; k++) {
        int term = k * k;
        if (k % 2 != 0) {
            sum += term;
            printf("Term %d: +%d^2 = +%d\n", k, k, term);
        } else {
            sum -= term;
            printf("Term %d: -%d^2 = -%d\n", k, k, term);
        }
        printf("  Current sum: %d\n", sum);
    }
    printf("\nFinal Sum (S): %d\n", sum);
}

// xvi. S = 1/(1 + 2) + 3/(3 + 5)��15/(15 + 16)
void calculateSeries_xvi() {
    double sum = 0.0;
    int max_numerator = 15;
    printf("Series: S = 1/(1+2) + 3/(3+5) + ... + 15/(15+16)\n");
    printf("\nBreakdown of calculation:\n");

    int term_num = 1;
    for (int num = 1; num <= max_numerator; num += 2) {
        double numerator = (double)num;
        int denom_part2 = num + 1;
        double denominator = (double)num + (num + 1.0);
        double term = numerator / denominator;
        sum += term;
        printf("Term %d: %d/(%d+%d) = %d/%.0f = %.6f\n", term_num, num, num, denom_part2, num, denominator, term);
        if (num < max_numerator) {
            printf("  Current sum: %.6f\n", sum);
        }
        term_num++;
    }
    printf("\nFinal Sum (S): %.6f\n", sum);
}

// xvii. S = 1 +x2/2! � x4/4! + x6/6!....n terms
void calculateSeries_xvii() {
    double x, sum = 1.0; 
    int n;
    printf("Series: S = 1 + x^2/2! - x^4/4! + x^6/6! - ... + n terms\n");
    printf("Enter value of x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }
    printf("Enter number of terms (n, max 10): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }
    printf("\nBreakdown of calculation:\n");
    printf("Term 0: 1\n");
    printf("  Current sum: %.8f\n", sum);
    
    if (n == 1) {
        printf("\nFinal Sum (S): %.8f\n", sum);
        return;
    }

    for (int k = 1; k < n; k++) {
        int exponent_fact = 2 * k; 
        double numerator = power(x, exponent_fact);
        long long fact = factorial(exponent_fact);
        double term = numerator / fact;

        if (k % 2 != 0) {
            sum += term;
            printf("Term %d: +%.6f^%d/%d! = +%.6f/%lld = +%.8f\n", k, x, exponent_fact, exponent_fact, numerator, fact, term);
        } else {
            sum -= term;
            printf("Term %d: -%.6f^%d/%d! = -%.6f/%lld = -%.8f\n", k, x, exponent_fact, exponent_fact, numerator, fact, term);
        }
        printf("  Current sum: %.8f\n", sum);
    }
    printf("\nFinal Sum (S): %.8f\n", sum);
}

// xviii. S = 1 + ( 1 + 2) + (1+2+3)��..(1+2+3+4�..20)
void calculateSeries_xviii() {
    double sum = 0.0;
    int limit = 20;
    printf("Series: S = 1 + (1+2) + (1+2+3) + ... + (1+2+...+%d)\n", limit);
    printf("\nBreakdown of calculation:\n");

    for (int k = 1; k <= limit; k++) {
        double k_th_term = (double)(k * (k + 1)) / 2.0;
        sum += k_th_term;
        printf("Term %d: (1+2+...+%d) = %d*%d/2 = %.0f\n", k, k, k, k + 1, k_th_term);
        if (k < limit) {
            printf("  Current sum: %.0f\n", sum);
        }
    }
    printf("\nFinal Sum (S): %.0f\n", sum);
}

// xix. S = 1 + x + x2/2 + x3/3��.+xn/n
void calculateSeries_xix() {
    double x, sum = 1.0; 
    int n;
    printf("Series: S = 1 + x/1 + x^2/2 + x^3/3 + ... + x^n/n\n");
    printf("Enter value of x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }
    printf("Enter number of terms (n): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }
    printf("\nBreakdown of calculation:\n");
    printf("Term 0: 1\n");
    printf("  Current sum: %.8f\n", sum);
    
    if (n == 0) {
        printf("\nFinal Sum (S): %.8f\n", sum);
        return;
    }

    for (int k = 1; k <= n; k++) {
        double numerator = power(x, k);
        double denominator = (double)k;
        double term = numerator / denominator;
        sum += term;
        printf("Term %d: %.6f^%d/%d = %.6f/%.0f = %.8f\n", k, x, k, k, numerator, denominator, term);
        if (k < n) {
            printf("  Current sum: %.8f\n", sum);
        }
    }
    printf("\nFinal Sum (S): %.8f\n", sum);
}

// xx. S = 1*3/(2*4*5) + 2*4/(3*5*6) + ... + n*(n+2)/((n+1)*(n+3)*(n+4))
void calculateSeries_xx() {
    int n;
    printf("Series: S = 1*3/(2*4*5) + 2*4/(3*5*6) + ... + n terms\n");
    printf("Enter number of terms (n): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }

    printf("\nBreakdown of calculation:\n");
    double sum = 0.0;
    for (int k = 1; k <= n; k++) {
        // Numerator: k * (k+2)
        // Denominator: (k+1) * (k+3) * (k+4)
        int num1 = k;
        int num2 = k + 2;
        int den1 = k + 1;
        int den2 = k + 3;
        int den3 = k + 4;
        double numerator = (double)num1 * num2;
        double denominator = (double)den1 * den2 * den3;
        double term = numerator / denominator;
        sum += term;
        printf("Term %d: %d*%d/(%d*%d*%d) = %.0f/%.0f = %.8f\n", k, num1, num2, den1, den2, den3, numerator, denominator, term);
        if (k < n) {
            printf("  Current sum: %.8f\n", sum);
        }
    }
    printf("\nFinal Sum (S): %.8f\n", sum);
}

// --- Main Menu ---

int main() {
    int choice;

    printf("\n1.   S = 1 + 1/2 + 1/3 ........ 1/10\n");
    printf("2.   P = (1*2) + (2*3) + ... + (9*10)\n");
    printf("3.   Q = 1/2 + 3/4 + 5/6 + .... 13/14\n");
    printf("4.   S = 2/5 + 5/9 + 8/13....n\n");
    printf("5.   S = x + x^2 + x^3 + ... + x^10\n");
    printf("6.   P = x + x^3/3 + x^5/5 + ... + n terms\n");
    printf("7.   S = (13*1) + (12*2) + ... + (1*13)\n");
    printf("8.   S = 1 + 1/2^2 + 1/3^3 + 1/4^4 + 1/5^5\n");
    printf("9.   S = 1/1! + 1/2! + 1/3! + ... + 1/n!\n");
    printf("10.  S = 1/1! + 1/3! + 1/5! + ... + n terms\n");
    printf("11.  S = 1 + (1+2) + (1+2+3) + ... + (1+...+20) (Triangular Sums)\n");
    printf("12.  S = x + x^2/2! + x^3/3! + ... + x^10/10!\n");
    printf("13.  P = x/2! + x^2/3! + ... + x^9/10!\n");
    printf("14.  S = 1 - 2 + 3 - 4 + ... + 9 - 10\n");
    printf("15.  S = 1^2 - 2^2 + 3^2 - 4^2 + ... + 9^2 - 10^2\n");
    printf("16.  S = 1/(1+2) + 3/(3+5) + ... + 15/(15+16)\n");
    printf("17.  S = 1 + x^2/2! - x^4/4! + x^6/6! + ... + n terms\n");
    printf("18.  S = 1 + (1+2) + (1+2+3) + ... + (1+...+20) (Same as 11)\n");
    printf("19.  S = 1 + x + x^2/2 + x^3/3 + ... + x^n/n\n");
    printf("20.  S = 1*3/(2*4*5) + 2*4/(3*5*6) + ... + n terms\n");
    printf("21. Exit\n");

    do {
        printf("> ");

        if (scanf("%d", &choice) != 1) {
            printf("Error\n");
            while (getchar() != '\n');
            choice = 0;
            continue;
        }

        switch (choice) {
            case 1: calculateSeries_i(); break;
            case 2: calculateSeries_ii(); break;
            case 3: calculateSeries_iii(); break;
            case 4: calculateSeries_iv(); break;
            case 5: calculateSeries_v(); break;
            case 6: calculateSeries_vi(); break;
            case 7: calculateSeries_vii(); break;
            case 8: calculateSeries_viii(); break;
            case 9: calculateSeries_ix(); break;
            case 10: calculateSeries_x(); break;
            case 11: calculateSeries_xi(); break;
            case 12: calculateSeries_xii(); break;
            case 13: calculateSeries_xiii(); break;
            case 14: calculateSeries_xiv(); break;
            case 15: calculateSeries_xv(); break;
            case 16: calculateSeries_xvi(); break;
            case 17: calculateSeries_xvii(); break;
            case 18: calculateSeries_xviii(); break;
            case 19: calculateSeries_xix(); break;
            case 20: calculateSeries_xx(); break;
            case 21: printf("Exiting program.\n"); break;
            default: printf("Error\n"); break;
        }
    } while (choice != 21);

    return 0;
}
