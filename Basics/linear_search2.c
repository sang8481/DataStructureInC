#include <stdio.h>
int main(int argc, char const *argv[]) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int count = 8, item_to_delete = 7;
    int i, j;

    printf("Initial list status :\n");
    for(i = 0; i<count; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    for(j = 0; j<count; j++){
        if(arr[j] == item_to_delete) break;
    }
    printf("after deletion : index %d deleted.", j);


    return 0;
}
