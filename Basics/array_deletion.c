#include <stdio.h>
int main(int argc, char const *argv[]) {
    int arr[6];
    int k = 3, n = 5;
    int i, j;

    printf("The original array elements are : \n");

    for(i = 0; i<n; i++){
        arr[i] = i*i;
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    j = k;

    while(j<n){
        arr[j-1] = arr[j];
        j++;
    }
    n--;
    printf("The array elements after deletion : \n");

    for(i = 0; i<n; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
