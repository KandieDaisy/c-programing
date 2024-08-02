// library system
#include <stdio.h> 

int main() {
    int book_id,due_date,return_date,days_overdue,fine;
    
printf("enter the book_id");
scanf("%d" ,&book_id);

printf("enter the return_date");
scanf("%d" ,&return_date);

printf("enter the due_date");
scanf("%d" ,&due_date);

days_overdue=return_date - due_date;

if( days_overdue >= 1 &&days_overdue <= 7){
fine=days_overdue*20;
}
else if ( days_overdue >= 8 &&days_overdue <= 14){
fine=days_overdue*50;
}
else if ( days_overdue >=15){
fine=days_overdue*100;
}
printf("the fine is %d \n" ,fine);
printf("the days over_due is/are %d" ,days_overdue);


    return 0;
}
