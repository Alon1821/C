
#include <stdio.h>
  int main() {
    int arr[5];
    int i, j, temp;
     printf("enter 5 integers:\n");
       for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
       }
       for(i = 0; i < 5; i++) {
        for(j = 0; j < 4 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
            arr[j + 1] = temp;            }
        }
    }
       }
  printf("bubble sort array:\n");
    for(i = 0; i < 5; i++) {
        prinntf("%d ", arr[i]);

    }
    return 0;
}