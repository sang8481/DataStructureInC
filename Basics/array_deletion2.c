#include <stdio.h>
int main(int argc, char const *argv[]) {
    int arr[6];
    int count = 5, place_to_delete = 3;
    int i, j;

    printf("Initial list : \n");
    for(i = 0; i<count; i++){
        arr[i] = i*i;
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    for(j = place_to_delete; j<count; j++){
        arr[j] = arr[j+1];
    }
    count--;

    printf("after deletion\n");
    for(i = 0; i<count; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }


    return 0;
}
