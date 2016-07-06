#include <stdio.h>
int main(int argc, char const *argv[]) {
    int arr[] = {1, 22, 33, 444, 55, 6, 7777, 88};
    int item = 444, count = 8;
    int i, j = 0;

    printf("The original array elements are : \n");
    for(i = 0; i<count; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    while(j<count){
        if(arr[j] == item) break;
        j++;
    }
    printf("Found element %d at index %d\n", item, j);
    return 0;
}
