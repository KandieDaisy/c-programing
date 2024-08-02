// calculation of simple intrest
#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    // prompt the user to input value
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    
    printf("Enter the time period (in years): ");
    scanf("%f", &time);


    simple_interest = (principal * rate * time) / 100;

    //output
    printf("Simple Interest = %.2f\n", simple_interest);

    return 0;
}
