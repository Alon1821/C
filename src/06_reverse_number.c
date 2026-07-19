
// program to reverse array
 

#include <stdio.h>
   int main() {
    int arr[5];
    int n = 5;
    int rev[i];
     printf("enter 5 elements:\n");
        for(i = 0; i < 5; i++) {
      scanf("%d", &arr[i]);
        }
        for(i = 0; i < 5; i++) {
      rev[i] = arr[n - i -1];
        }
        printf("Reversed array:\");

        for(i = 0; i < 5; i++) {
        printf("%d ", rev[i]);
        }
        return 0;
        }

        #include <stdio.h>
          int main() {
          int arr[5];
          int count;
          int found = 0;
              printf("enter 5 integers:\n");
                for(i = 0; i < 5; i++) {
                scanf("%d", arr[i]);
        }
                printf("enter the number to search:\n");
                scanf("%d", &count);
                for(i = 0; i < 5; i++) {
                if(arr[i] == count) {
                printf("%d found at %d\n", count, i);
                found = 1;
                break;
        }
         else if(found == count) {
            printf("number not found");
        }
            return 0;
        }
            #include <stdio.h>
             int main() {
             }