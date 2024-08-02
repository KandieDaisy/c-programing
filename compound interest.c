
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compound_interest;

    //  prompt the user to input principal amount, rate of interest, and time
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);
    printf("Enter the time period in years: ");
    scanf("%f", &time);

    // Convert rate to decimal form
    rate = rate / 100;

    // Calculate compound interest
    compound_interest = principal * (pow(1 + rate, time) - 1);

    // Display the compound interest
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}