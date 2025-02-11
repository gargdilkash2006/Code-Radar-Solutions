#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%i %i",&a,&b);
    scanf(" %c",&c);
    int x = a+b;
    int y = a-b;
    int z = a*b;
    int m = a/b;
    switch(c){
    case '+':
    printf("%d",x);
    case '-':
    printf("%d", y);
    case '*':
    printf("%d", z);
    case '/':
    if (b==0){
        printf("error\n");
    }
    else{
        printf("%d", m);
    }
    break;
    default:
        printf("error\n");
    }
    return 0;
}