
//Reverse array using pointer
#include <stdio.h>
   int main() {
  int arr[5]= {1,2,3,4,5};\
  int *ptr = arr;
  printf("Original array: ");
    for(int i=0; i<5; i++){
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\nReversed array: ");
    ptr = arr + 4; // Point to the last element
    for(int i=0; i<5; i++){
        printf("%d ", *ptr);
        ptr--; // Move backwards through the array
    }
    return 0;
 
    // pointer arthimetic
    #include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;
    int **p = &ptr;
    
    printf("a = %d\n", a);                    // 10
    printf("&a = %p\n", &a);                 // 0x100
    printf("ptr = %p\n", ptr);               // 0x100
    printf("&ptr = %p\n", &ptr);             // 0x200
    printf("p = %p\n", p);                   // 0x200
    printf("*p = %p\n", *p);                 // 0x100 (value at p)
    printf("**p = %d\n", **p);               // 10 (value at *p)
    
    // Can you predict these?
    printf("&**p = %p\n", &**p);             // 0x100 (address of a)
    printf("*&p = %p\n", *&p);               // 0x200 (p's value)
    
    return 0;
}
    
    