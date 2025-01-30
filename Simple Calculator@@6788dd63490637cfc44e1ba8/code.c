#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%i%i%c",&a,&b,&c);
    int x=a*b;
    int y = a/b;
    int z = a+b;
    int r = a-b;
    if (c=='*'){
        printf("%i",x);
    }
    else if(c =='/'){
        printf("%i",y);
    }
    else if(c=='+'){
        printf("%i",z);
    }
    else{
        printf("%i",r);
    }
    return 0;
}