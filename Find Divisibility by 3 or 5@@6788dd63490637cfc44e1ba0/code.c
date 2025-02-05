#include <stdio.h>
int main() {
    int s;
    scanf("%d",&s);
    if(s%3==0 && s%5!=0) {
        printf("Divisible by 3");
    }
    else if(s%5==0 && s%3!=0) {
        printf("Divisible by 5");
    }
    else if(s%3==0 && s%5==0) {
        printf("Divisible by Both");
    }
    else {
        printf("Not Divisible");
    }
    return 0;

}