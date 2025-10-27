#include <stdio.h>

float PI = 3.14;
void calculateCubeVolume();
void calculateCuboidVolume();
void calculateCylinderVolume();
void calculateSphereVolume();

int main() {
    int choice;

    do {
        printf("\n--- Volume Calculator ---\n");
        printf("1. Volume of a Cube\n");
        printf("2. Volume of a Cuboid\n");
        printf("3. Volume of a Cylinder\n");
        printf("4. Volume of a Sphere\n");
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
                calculateCubeVolume();
                break;
            case 2:
                calculateCuboidVolume();
                break;
            case 3:
                calculateCylinderVolume();
                break;
            case 4:
                calculateSphereVolume();
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

void calculateCubeVolume() {
    float side, volume;
    printf("Enter side length: ");
    if (scanf("%f", &side) != 1 || side < 0) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }

    volume = side * side * side;
    printf("Volume: %.4f\n", volume);
}


void calculateCuboidVolume() {
    float length, width, height, volume;
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

    printf("Enter height: ");
    if (scanf("%f", &height) != 1 || height < 0) {
        printf("Error\n");
        while (getchar() != '\n');
        return;
    }

    volume = length * width * height;
    printf("Volume: %.4f\n", volume);
}

void calculateCylinderVolume() {
    float radius, height, volume;
    printf("Enter radius: ");
    if (scanf("%f", &radius) != 1 || radius < 0) {
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

    volume = PI * radius * radius * height;
    printf("Volume: %.4f\n", volume);
}


void calculateSphereVolume() {
    float radius, volume;
    printf("Enter radius: ");
    if (scanf("%f", &radius) != 1 || radius < 0) {
        printf("Error\n");
        
        while (getchar() != '\n');
        return;
    }

    volume = (4.0f / 3.0f) * PI * radius * radius * radius;
    printf("Volume: %.4f\n", volume);
}
