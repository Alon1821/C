// Dynamic Array: Add, Remove & Search
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
     int *ptr;
     int num;
     printf("enter any num: ");
       scanf("%d", &num);
       
       ptr = malloc(num * sizeof(int));
       
       if(ptr == NULL) {
           printf("Error occur");
           return 1;
       }
           for(int i = 0; i < num; i++) {
               printf("Index %d is: ", i + 1);
               scanf("%d", &ptr[i]);
           }
           printf("Display: \n ");
               for(int i = 0; i < num; i++) {
                   printf("Index %d is: %d\n", i, ptr[i]);
               }
               
        int new;
        printf("enter any num to add: ");
          scanf("%d", &new);
          
          int a = num + new;
          
          int *temp = realloc(ptr, a * sizeof(int));
          
          if(temp == NULL) {
              printf("INvalid occur");
              free(ptr);
              return 1;
          }
          else {
              ptr = temp;
              
          }
          for(int i = num; i < a; i++) {
              printf("Added %d is: ", i + 1);
              scanf("%d", &ptr[i]);
          }
          printf("Added item is:\n ");
             for(int i = 0; i < a; i++) {
                 printf("Added %d is: %d\n", i, ptr[i]);
             }
             
         int r;
        printf("enter a number to remove: ");
           scanf("%d", &r);
           
          if(r < 0 || r >= a) {
              printf("Invalid occur");
              free(ptr);
              return 1;
          }
          
          for(int i = r; i < a - 1; i++) {
              ptr[i] = ptr[i + 1];
          }
          
          int n = a - 1;
          
          int *t = realloc(ptr, n * sizeof(int));
          
          if(t == NULL) {
              printf("Execution failed");
              free(ptr);
              return 1;
          }
          else {
              ptr = t;
          }
         printf("Removing Element\n");
            for(int i = 0; i < n; i++) {
                printf("After removing %d: %d\n", i, ptr[i]);
            }
            int b;
            int found = 0;
            printf("enter the value to search: ");
             scanf("%d", &b);
               for(int i = 0; i < n; i++) {
             if(b == ptr[i]) {
                 printf("Index %d value: %d\n", i, ptr[i]);
               found = 1;
             } 
               }
             if(found == 0) {
                 printf("invalid occur");
             }

           free(ptr);
          
            ptr = NULL;
            return 0;
          }
            
