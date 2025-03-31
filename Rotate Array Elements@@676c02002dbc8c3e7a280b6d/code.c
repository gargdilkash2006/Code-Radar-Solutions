#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], i;
    for(i=0;i<n;i++) 
        scanf("%d", &arr[i]);
    int k;
    scanf("%d", &k);

    int count = 0, new_arr[n];
    for(i=n-k;i<n;i++)
        new_arr[count++] = arr[i];
    for(i=0;i<=k;i++)
        new_arr[count++] = arr[i];

    for(i=0;i<n;i++)
        printf("%d\n", new_arr[i]);

}