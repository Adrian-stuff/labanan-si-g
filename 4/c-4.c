#include <stdio.h>

float PI = 3.14;


void calculateCircleArea();
void calculateTriangleArea();
void calculateSquareArea();
void calculateRectangleArea();

int main() {
    int choice;

    do {
        printf("Area Calculator\n");
        printf("1. Circle\n");
        printf("2. Triangle\n");
        printf("3. Square\n");
        printf("4. Rectangle\n");
        printf("5. Exit\n");
        printf("Enter choice (1-5): ");

        if (scanf("%d", &choice) != 1) {
            printf("Error\n");
            while (getchar() != '\n');
            choice = 0; 
            continue;
        }

        switch (choice) {
            case 1:
                calculateCircleArea();
                break;
            case 2:
                calculateTriangleArea();
                break;
            case 3:
                calculateSquareArea();
                break;
            case 4:
                calculateRectangleArea();
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Error\n");
                break;
        }
    } while (choice != 5);

    return 0;
}


void calculateCircleArea() {
    float radius, area;
    printf("Enter radius: ");
    if (scanf("%f", &radius) != 1 || radius < 0) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }

    area = PI * radius * radius;
    printf("Area: %.4f\n", area);
}

void calculateTriangleArea() {
    float base, height, area;
    printf("Enter base length: ");
    if (scanf("%f", &base) != 1 || base < 0) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }

    printf("Enter height: ");
    if (scanf("%f", &height) != 1 || height < 0) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }

    area = 0.5f * base * height;
    printf("Area: %.4f\n", area);
}

void calculateSquareArea() {
    float side, area;
    printf("Enter side length: ");
    if (scanf("%f", &side) != 1 || side < 0) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }

    area = side * side;
    printf("Area: %.4f\n", area);
}

void calculateRectangleArea() {
    float length, width, area;
    printf("Enter length: ");
    if (scanf("%f", &length) != 1 || length < 0) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }

    printf("Enter width: ");
    if (scanf("%f", &width) != 1 || width < 0) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }

    area = length * width;
    printf("Area: %.4f\n", area);
}
