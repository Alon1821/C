

#include <stdio.h>  
   int main() {
    FILE *ptr;
    ptr = fopen("file.txt", "w");
    if(ptr == NULL) {
        printf("invalid file");
        return 1;
    }
    fprintf(ptr, "COMPAN NAME: \n");
    fprintf(ptr, "Shrestha interprises");
        fclose(ptr);
        printf("BIRHMINGHAM");
        return 0;
    }


    #include <stdio.h>
    #include  <math.h>
      int main() 
      {
        double a, b, c;
        double  sumofroots, product;
      };

      