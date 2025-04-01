#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[n];
    for(int i=0 ; i<N ;i++){
        scanf("%d",arr[i]);
    }
    for(int i=0 ; i<N ; i++){
         for(int j=0 ; j<i-n+1 ; j++){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            printf("Sorted");
        }
    }
}