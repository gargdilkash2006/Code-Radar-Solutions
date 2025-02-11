#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%i %i",&a,&b);
    scanf(" %c",&c);
    switch(c)
    case '+':
    printf("%d", a+b);
    case '-':
    printf("%d", a-b);
    case '*':
    printf("%d", a*b);
    case '/':
    if (b==0){
        printf("error");
    }
    else{
        printf("%d", a/b);
    }
    return 0;
}