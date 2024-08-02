// variables and data types in c
#include <stdio.h> //scanf(), print()

int main() {
    int mangoes =30; //%d
    float deposit =5000.20; //%f
    double total_cost =100000.01; //%lf
    char h= 'c'; //%c
    
    printf("the value of mangoes is %d \n", mangoes);
    scanf("%d", &mangoes);
    
    printf("the value of deposit is %F \n", deposit);
    scanf("%f", &deposit);
    
    printf("the value of total_cost is %lf \n", total_cost);
    scanf("%lf", &total_cost);
    
    printf("the value of h is%c \n",h);
    scanf("%c", &h);

return 0;

}