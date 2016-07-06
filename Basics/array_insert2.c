#include <stdio.h>
int main(int argc, char const *argv[]) {
    int arr[7];
    int item = 88, count = 5, place_to_input = 3;
    int i, j;

    printf("initial array list :\n");
    for(i = 0; i<count; i++){
        arr[i] = i*i;
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    count++;

    for(j = count; j >= place_to_input; j--){
        arr[j+1] = arr[j];
    }
    arr[place_to_input] = item;

    printf("input result : \n");
    for(i = 0; i<count; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
