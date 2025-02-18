#include <stdio.h>
int main () {
    int s;
    scanf("%d",&s);
    if(s==1 || s==3 || s==5 || s==7 || s==9 || s==12) {
        printf("31");
    }
    else if(s==2) {
        printf("28");
    }
    else {
        printf("Invalid month");
    }
    }
}