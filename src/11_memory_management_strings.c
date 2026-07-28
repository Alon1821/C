#include <stdio.h>
  struct abc {
      int a;
      char b;
      char c;
  } ;
  int main() {
    struct abc variable;
            printf("%d", sizeof(variable));
        return 0;
  }
  int main() {
    
  }

  *// program to find size using union*
  #include <stdio.h>
   union abc {
      int a;
      char b;
      double c;
      char d;
   } ;
   int main() {
    union abc variable;
        *// in union size of the memory is decided by the largest data type*
            printf("%d", sizeof(variable));
        return 0;
   }
   *// output will be 8 because double is the largest data type and it takes 8 bytes of memory*

   #include<stdio.h>
     struct company {
        char c
     }
    }
  