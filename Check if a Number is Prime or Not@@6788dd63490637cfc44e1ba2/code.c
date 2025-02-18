#include <stdio.h>
int main () {
    int x;
    scanf("%d",&x);
    int n = 0;
    
    for(int i>=1;i<=n;i++)
    {
        if(x%i==0){
            n = n + 1;
        }
    }
    if (n==2)
    {
        pritf("prime number ");
    }
}