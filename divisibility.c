//divisibility test-5
#include <stdio.h>// scanf(),printf()

int main() {
    int num;
 printf("please enter a number:");
 scanf("%d",&num);
 if(num%5 ==0){
     printf("the number is divisible by 5");
 }
     else{
         printf("the number is not divisible by 5");
     }
 
    return 0;
}