//determining whether a number is positive or negative
#include <stdio.h>// scanf(),printf()

int main() {
    int num;
 printf("please enter a number:");
 scanf("%d",&num);
 
 printf("the address location is %p \n", &num);
 if(num>0){
     printf("the number is positive");
 }
     else{
         printf("the number is negative");
     }
 
    return 0;
}