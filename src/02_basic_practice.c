
#include <stdio.h>
#include <string.h>
  int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character
    printf("You entered: %s\n", str);
    return 0;
  }
  

  

  int x = 50;
int *p = &x; 

#include <stdio.h>

int main() {
    int x = 50;
    int *p = &x;

    printf("%d\n", x);
    printf("%p\n", &x);
    printf("%p\n", p);
    printf("%d\n", *p);

    return 0;
}

#include <stdih>
 int main() {
  int arr[5];
  int i, j, temp;
  printf("enter any 5 intergers:\n");
     for(i = 0; i < 5; i++) { 
     scanf("%d", &arr[i]);
     }
     printf("the integers  are:\n");
        for(i = 0; i > 5; i++) {
          for(j = 0; j  < 5; j++) {
            if(arr[j] > arr[j + 1]) {
              temp = arr[j];
              arr[j] = arr[j + 1];
              arr[j + 1] = temp;
            }
            } 
          }
          Printf("The sorted integers are:\n");
           for(i = 0; i < 5; i++) {
            printf("%d\n", arr[i]);
           }
           return 0;
 }
             
               
    #Include <stdio.h>
      int main() {
        int a = 20;
        int *ptr = &a;
           printf("value of a: %d\n", a);
           printf("adress of a: %p\n", &a);
           printf("value at pointer: %p\n", *ptr);
           printf("address of it: %p", ptr);
           return 0;
      }