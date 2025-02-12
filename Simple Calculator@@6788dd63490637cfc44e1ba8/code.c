#include<stdio.h>
int main () {
    int x , y ;
    char op;
    int a , b , c;
    float d;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%c",&op);
    a = x+y;
    b = x-y;
    c = x*y;
    d = x/y;
    if(op == 'a') {
        printf("%d",a);
    }
    else if(op == 'b') {
        printf("%d",b);
    }
    else if(op == 'c') {
        printf("%d",c);
    }
    else {
        printf("%f",d);
    }
    return 0;
}