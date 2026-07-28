     //Program to reverse anarray//
#include <stdio.h>
   int main() {
    int arr[5];
    int i, temp;
    printf("enter any 5 numberrs\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5 / 2; i++) {
        temp = arr[i];
        arr[i] = arr[5 - i - 1];
        arr[5 - i - 1] = temp;
    }
    printf("the reverse of the array is\n");
    for (i = 0; i < 5; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}




