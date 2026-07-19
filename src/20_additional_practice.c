#include <stdio.h>   *// to use printf and scanf functions*
#include <string.h>  *// to find the length of the string*
    
int main() {
    char str[100];
    int i, len;
    printf("enter a string:\n");
      fgets(str, sizeof(str), stdin);  *// to read a string from the user*
      len = strlen(str); *// to find the length of the string*
       *// remove the newline character if it exists*
       if(str[len - 1] == '\n') {
        str[len - 1] = '\0';
       }
    printf("the revrse of string is:\n");
     for(i = len - 1; i > = 0; i--) {
        printf(|"%c", strl[i]);
    return 0;)
     }


     #include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "hello";
    
    printf("First character: %c\n", str[0]);   // prints 'h'
    printf("Last character: %c\n", str[4]);     // prints 'o'
    printf("Length: %d\n", strlen(str));        // prints 5
    
    return 0;
}




*// PROGRAM TO FIND THE TOTAL AMOUNT WITH QUANTITY AND PRICES USING STRUCTURE*
#include <stdio.h>
#include <string.h>

struct book {
    char name[50];
    int price;
    int quantity;
    int total;
};

int main() {
    struct book book1;
    
    // Input book name (string)
    printf("Enter the name of the book: ");
    fgets(book1.name, sizeof(book1.name), stdin);
    // Remove newline character
    book1.name[strcspn(book1.name, "\n")] = '\0';
    
    // Input price (integer)
    printf("Enter the price of the book: ");
    scanf("%d", &book1.price);
    
    // Input quantity (integer)
    printf("Enter the quantity of the book: ");
    scanf("%d", &book1.quantity);
    
    // Calculate total
    book1.total = book1.quantity * book1.price;
    
    // Display all details
    printf("\n========== BOOK DETAILS ==========\n");
    printf("Book Name: %s\n", book1.name);
    printf("Price: $%d\n", book1.price);
    printf("Quantity: %d\n", book1.quantity);
    printf("Total Amount: ₹%d\n", book1.total);
    printf("==================================\n");
    return 0;
}

#include <stdio.h>
#include <string.h>
struct company {
    char name [100];
    char location[20];
    char manager_name[50];
    int employee_vacancy;
    float salary;
    
} company;
    int main() {
         struct company details;
    printf("enter the name of the company:\n");
    fgets(details.name, sizeof(details.name), stdin);
    printf("enter the location of the company:\n");
    fgets(details.location, sizeof(details.location), stdin);
    printf("enter the name of the manager:\n");
    fgets(details.manager_name, sizeof(details.manager_name), stdin);
    printf("enter the employee vacancy:\n");
    scanf("%d", &details.employee_vacancy);
    printf("enter the salary:\n");
    scanf("%f", &details.salary);
    printf("\n========== COMPANY DETAILS ==========\n");
    printf("Company Name: %s\n", details.name);
    printf("Location: %s\n", details.location);
    printf("Manager Name: %s\n", details.manager_name);
    printf("Employee Vacancy: %d\n", details.employee_vacancy);
    printf("Salary: $%.2f\n", details.salary);
    printf("==================================\n");
    return 0;
    }



#include <stdio.h>
  struct 2026 {
    char name 1[90];
    char name 2[90];
    char name 3[90];
  }
  }
