#include <stdio.h>

int main() {
    int arr[100];
    int size, i, j;
    int isUnique;

    printf("enter size of array:");
    scanf("%d", &size);

    printf("enter elements in array:");
    for(i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("unique elements in array:");
    for(i=0; i<size; i++) {
        isUnique = 1;
        for(j=0; j<size; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if(isUnique) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
