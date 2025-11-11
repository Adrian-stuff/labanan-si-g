#include <stdio.h>

float TIER_DURATIONS[] = {10.0f, 6.0f, 4.0f};
float TIER_RATES[] = {60.0f, 15.0f, 18.0f, 25.0f};

int numberOfTiers = 3;

float calculateWage(float hours) {
    float totalWage = 0.0f;
    float remainingHours = hours;

    for (int i = 0; i < numberOfTiers; ++i) {
        if (remainingHours <= 0) {
            break;
        }

        float tierMaxDuration = TIER_DURATIONS[i];
        
        float workedHours = remainingHours < tierMaxDuration ? remainingHours : tierMaxDuration;
        printf("remaining hours: %f, %f + (%f * %f) = %f \n", remainingHours, totalWage, workedHours, TIER_RATES[i], workedHours * TIER_RATES[i]);
        totalWage += workedHours * TIER_RATES[i];
        
        remainingHours -= workedHours;
    }

    // above 20hrs
    if (remainingHours > 0) {
        printf("remaining hours: %f, %f + (%f * %f) = %f \n", remainingHours, totalWage,remainingHours, TIER_RATES[numberOfTiers], remainingHours * TIER_RATES[numberOfTiers]);

        totalWage += remainingHours * TIER_RATES[numberOfTiers];
    }

    return totalWage;
}

int main() {
    float hoursWorked = 0.0f;
    float calculatedWage = 0.0f;
    float cumulativeHours = 0.0f; 

    printf("Enter the total hours worked: ");
    scanf("%f", &hoursWorked);
    calculatedWage = calculateWage(hoursWorked);

    printf("Total Hours Worked: %.2f hours\n", hoursWorked);
    printf("Total Wage: Rs %.2f\n", calculatedWage);

    return 0;
}
