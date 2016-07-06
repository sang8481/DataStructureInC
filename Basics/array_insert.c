#include <stdio.h>
int main(void){
    int array[7];
    int item = 999, k = 3, n = 5;
    int i = 0, j = n;

    for(i = 0; i<n; i++){
        array[i] = i*i;
    }

    printf("The original array elements are :\n");
    for(i = 0; i<n; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }

    n = n + 1;

    while(j >= k){
        array[j+1] = array[j];
        j--;
    }

    array[k] = item;

    printf("The array elements after insertion : \n");
    for(i = 0; i<n; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    return 0;
}
