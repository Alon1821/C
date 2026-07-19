
// Shopping cart program
#include <stdio.h>
  int main() {
      char item[50];
      int quantity;
      float price;
      float total;
      char currency = '$';
      
      printf("enter the item to buy: ");
        fgets(item, sizeof(item), stdin);
      printf("enter the quantity: "); 
         scanf("%d", &quantity);
     printf("enter the price: ");
         scanf("%f", &price);
        
        total = quantity * price;
        printf("total is: %c %f", currency, total);
        return 0;
  }
     
// Clothing store program
#include <stdio.h>
   int main() {
    char cloth[50];
    int quantity;
    char cloth_2[50];
    int quantity_2;
    char cloth_3[50];
    int quantity_3;
    float total;
    char currency = '$';

      printf("=== Welcome to the Clothing Store ===\n");
     printf("enter the first clothing item: ");
        fgets(cloth, sizeof(cloth), stdin);
        printf("enter the quantity: ");
        scanf("%d", &quantity);
        printf("enter the second clothing item: ");
        fgets(cloth_2, sizeof(cloth_2), stdin);
        printf("enter the quantity: ");
        scanf("%d", &quantity_2);
        printf("enter the third clothing item: ");
        fgets(cloth_3, sizeof(cloth_3), stdin);
        printf("enter the quantity: ");
        scanf("%d", &quantity_3);
          total = (quantity * 20.0) + (quantity_2 * 30.0) + (quantity_3 * 40.0);
          printf("total is: %c %.2f", currency, total);
          return 0;
   }


   // clothing store program.
   #include <stdio.h>
   int main() {
    char cloth[50];
    int quantity;
    char cloth_2[50];
    int quantity_2;
    char cloth_3[50];
    int quantity_3;
    float total;
    char currency = '$';

      printf("=== Welcome to the Clothing Store ===\n");
     printf("enter the first clothing item: ");
        fgets(cloth, sizeof(cloth), stdin);
        printf("enter the quantity: ");
        scanf("%d", &quantity);
        printf("enter the second clothing item: ");
        fgets(cloth_2, sizeof(cloth_2), stdin);
        printf("enter the quantity: ");
        scanf("%d", &quantity_2);
        printf("enter the third clothing item: ");
        fgets(cloth_3, sizeof(cloth_3), stdin);
        printf("enter the quantity: ");
        scanf("%d", &quantity_3);
          total = (quantity * 20.0) + (quantity_2 * 30.0) + (quantity_3 * 40.0);
          printf("total is: %c %.2f", currency, total);
          return 0;
   }


   #include <stdio.h>
     int main() {
        int arr[5];
        int max, min, i;
        printf("enter any 5 integers:\n");
           for(i = 0; i < 5; i++) {
            scanf("%d", &arr[i]);
            max = min = arr[0];
            if(arr[i] > max) {
                max = arr[i];
            }
            else if(arr[i] < min) {
                min = arr[i];
            }
        }
        printf("maximum number is: %d\n", max);
        printf("minimum number is: %d\n", min);
        return 0;
    }
  

// Total bill calculator program
#include <stdio.h>
    int main() {
     float price[3];
      float total;
      float vat;
      float vat_amount;
        char currency = '$';
     float final_total;

        printf("=== Welcome to the Hotel.Newland ===\n");
        printf("enter the price of the first item: ");
          scanf("%f", &price[0]);
        printf("enter the price of the second item: ");
          scanf("%f", &price[1]);
        printf("enter the price of the third item: ");
          scanf("%f", &price[2]);
          total = price[0] + price[1] + price[2];
          printf("the total is: %c %.2f\n", currency, total);
            printf("enter the vat percentage:\n ");
            scanf("%f", &vat);
            vat_amount = total * (vat / 100.0);
            printf("Vat amount is: %c %.2f\n", currency, vat_amount);
            final_total = vat_amount + total;
            printf("the final total is: %c %.2f", currency, final_total);
            return 0;
    }
            
