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

    for (int i = 1; i <= limit; i++) {
        sum += 1.0 / i;
    }
    printf("Sum (S): %.6f\n", sum);
}

// ii. P= (1*2) + (2 *3) + (3* 4)+......(9 *10)
void calculateSeries_ii() {
    double sum = 0.0;
    int limit = 9;
    printf("Series: P = (1*2) + (2*3) + ... + (9*10)\n");

    for (int i = 1; i <= limit; i++) {
        sum += (double)(i * (i + 1));
    }
    printf("Sum (P): %.0f\n", sum);
}

// iii. Q= 1/2 + 3/4 +5/6 +....13/14
void calculateSeries_iii() {
    double sum = 0.0;
    printf("Series: Q = 1/2 + 3/4 + 5/6 + ... + 13/14\n");

    for (int num = 1; num <= 13; num += 2) {
        sum += (double)num / (num + 1);
    }
    printf("Sum (Q): %.6f\n", sum);
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

    double sum = 0.0;
    for (int k = 1; k <= n; k++) {
        // Numerator: 3k - 1 (2, 5, 8...)
        // Denominator: 4k + 1 (5, 9, 13...)
        double numerator = (3.0 * k) - 1.0;
        double denominator = (4.0 * k) + 1.0;
        sum += numerator / denominator;
    }
    printf("Sum (S): %.6f\n", sum);
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

    for (int k = 1; k <= limit; k++) {
        sum += power(x, k);
    }
    printf("Sum (S): %.6f\n", sum);
}

// vi. P= x + x3/3 + x5/5 + x7/7……………n terms
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

    for (int k = 1; k <= n; k++) {
        int exponent = (2 * k) - 1;
        sum += power(x, exponent) / (double)exponent;
    }
    printf("Sum (P): %.6f\n", sum);
}

// vii. S= (13 *1) + (12 * 2)……(1 *13)
void calculateSeries_vii() {
    double sum = 0.0;
    int limit = 13;
    printf("Series: S = (13*1) + (12*2) + ... + (1*13)\n");

    for (int k = 1; k <= limit; k++) {
        // First factor: 13, 12, 11... (13 - k + 1)
        // Second factor: 1, 2, 3... (k)
        int term_value = (limit - k + 1) * k;
        sum += (double)term_value;
    }
    printf("Sum (S): %.0f\n", sum);
}

// viii. S = 1 + 1/(2^2) + 1/ (3^3) + 1/(4^4) + 1/(5^5) (Assuming k^k pattern)
void calculateSeries_viii() {
    double sum = 0.0;
    int limit = 5;
    printf("Series: S = 1/1^1 + 1/2^2 + 1/3^3 + ... + 1/5^5\n");

    for (int k = 1; k <= limit; k++) {
        sum += 1.0 / power(k, k);
    }
    printf("Sum (S): %.8f\n", sum);
}

// ix. S = 1/1! + 1/2! + 1/3! ……………+1/n!
void calculateSeries_ix() {
    int n;
    printf("Series: S = 1/1! + 1/2! + 1/3! + ... + 1/n!\n");
    printf("Enter number of terms (n, max 20): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 20) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }

    double sum = 0.0;
    for (int k = 1; k <= n; k++) {
        sum += 1.0 / factorial(k);
    }
    printf("Sum (S): %.10f\n", sum);
}

// x. S = 1 + 1/3! + 1/5!+……..n terms
void calculateSeries_x() {
    int n;
    printf("Series: S = 1/1! + 1/3! + 1/5! + ... + n terms\n");
    printf("Enter number of terms (n, max 10): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }

    double sum = 0.0;
    for (int k = 1; k <= n; k++) {
        int denominator_fact = (2 * k) - 1; // 1, 3, 5, ...
        sum += 1.0 / factorial(denominator_fact);
    }
    printf("Sum (S): %.10f\n", sum);
}

// xi. S = 1 + (1+2) +(1+2+3) + ... +(1+2+3+...20)
void calculateSeries_xi() {
    double sum = 0.0;
    int limit = 20;
    printf("Series: S = 1 + (1+2) + (1+2+3) + ... + (1+2+...+%d)\n", limit);

    for (int k = 1; k <= limit; k++) {
        // The k-th term is the sum of integers from 1 to k: k*(k+1)/2 (Triangular number)
        double k_th_term = (double)(k * (k + 1)) / 2.0;
        sum += k_th_term;
    }
    printf("Sum (S): %.0f\n", sum);
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

    for (int k = 1; k <= limit; k++) {
        sum += power(x, k) / factorial(k);
    }
    printf("Sum (S): %.8f\n", sum);
}

// xiii. P = x/2! + x2/3! +…….x9/10!
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

    for (int k = 1; k <= limit; k++) {
        sum += power(x, k) / factorial(k + 1);
    }
    printf("Sum (P): %.8f\n", sum);
}

// xiv. S = 1 – 2 + 3 - 4………. + 9 – 10
void calculateSeries_xiv() {
    int sum = 0;
    int limit = 10;
    printf("Series: S = 1 - 2 + 3 - 4 + ... + 9 - 10\n");

    for (int k = 1; k <= limit; k++) {
        if (k % 2 != 0) {
            sum += k; 
        } else {
            sum -= k; 
        }
    }
    printf("Sum (S): %d\n", sum);
}

// xv. S = 1^2 - 2^2 + 3^2 - 4^2………. +9^2 - 10^2
void calculateSeries_xv() {
    int sum = 0;
    int limit = 10;
    printf("Series: S = 1^2 - 2^2 + 3^2 - 4^2 + ... + 9^2 - 10^2\n");

    for (int k = 1; k <= limit; k++) {
        int term = k * k;
        if (k % 2 != 0) {
            sum += term; 
        } else {
            sum -= term; 
        }
    }
    printf("Sum (S): %d\n", sum);
}

// xvi. S = 1/(1 + 2) + 3/(3 + 5)……15/(15 + 16)
void calculateSeries_xvi() {
    double sum = 0.0;
    int max_numerator = 15;
    printf("Series: S = 1/(1+2) + 3/(3+5) + ... + 15/(15+16)\n");

    for (int num = 1; num <= max_numerator; num += 2) {
        double numerator = (double)num;
        double denominator = (double)num + (num + 1.0); 
        sum += numerator / denominator;
    }
    printf("Sum (S): %.6f\n", sum);
}

// xvii. S = 1 +x2/2! – x4/4! + x6/6!....n terms
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
    if (n == 1) {
        printf("Sum (S): %.8f\n", sum);
        return;
    }

    for (int k = 1; k < n; k++) {
        int exponent_fact = 2 * k; 
        double term = power(x, exponent_fact) / factorial(exponent_fact);

        if (k % 2 != 0) {
            sum += term; 
        } else {
            sum -= term; 
        }
    }
    printf("Sum (S): %.8f\n", sum);
}

// xviii. S = 1 + ( 1 + 2) + (1+2+3)……..(1+2+3+4…..20)
void calculateSeries_xviii() {
    double sum = 0.0;
    int limit = 20;
    printf("Series: S = 1 + (1+2) + (1+2+3) + ... + (1+2+...+%d)\n", limit);

    for (int k = 1; k <= limit; k++) {
        double k_th_term = (double)(k * (k + 1)) / 2.0;
        sum += k_th_term;
    }
    printf("Sum (S): %.0f\n", sum);
}

// xix. S = 1 + x + x2/2 + x3/3…….+xn/n
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
    if (n == 0) {
        printf("Sum (S): %.6f\n", 0.0);
        return;
    }

    for (int k = 1; k <= n; k++) {
        sum += power(x, k) / (double)k;
    }
    printf("Sum (S): %.8f\n", sum);
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

    double sum = 0.0;
    for (int k = 1; k <= n; k++) {
        // Numerator: k * (k+2)
        // Denominator: (k+1) * (k+3) * (k+4)
        double numerator = (double)k * (k + 2);
        double denominator = (double)(k + 1) * (k + 3) * (k + 4);
        sum += numerator / denominator;
    }
    printf("Sum (S): %.8f\n", sum);
}

// --- Main Menu ---

int main() {
    int choice;

    do {
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
        printf("Enter choice (1-21, use corresponding number): ");

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
