#include<stdio.h>
int main(){
    float a,b;
    char c;
    scanf("%f %f",&a,&b);
    scanf(" %c",&c);
    int x = a+b;
    int y = a-b;
    int z = a*b;
    int m = a/b;
    switch(c){
    case '+':
        printf("%d",x);
        break;
    case '-':
        printf("%d", y);
        break;
    case '*':
    printf("%d", z);
    break;
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