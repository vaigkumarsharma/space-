#include<stdio.h>
int main(){
    int days;
    float year, month,daysr;
    printf("enter number of days ");
    scanf("%d",&days);
    year=days/360;
    month=days%360/30;
    daysr=days%360-month*30;
    printf("no of year: %f\n no of month: %f\n no of days: %f",year ,month,daysr);
    return 0;
     
    // 10 bajne wale hai 
    
}
