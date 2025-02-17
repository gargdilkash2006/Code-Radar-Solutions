#include <stdio.h>
int main () {
    int leap;
    scanf("%d",&leap);
    if(leap%400==0 || (leap%4==0 && leap%100!=0)){
        printf("leap year");
    }
    else {
        printf("not a leap year");
    }
    }