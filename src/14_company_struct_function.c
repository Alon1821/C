

#include <stdio.h>
#include <string.h>
struct company {
    char name[50];
    char location[50];
    int employees;
    int sales;
    int price;
    int revenue;
};
  void displayCompanyInfo(struct company comp) {
        printf("Company Name: %s\n", comp.name);
        printf("Location: %s\n", comp.location);
        printf("Number of Employees: %d\n", comp.employees);
        printf("Sales: %d\n", comp.sales);
        printf("Revenue: $%d\n", comp.revenue);
  }
  int main() {
        struct company myCompany;
        strcpy(myCompany.name, "Tech Innovators Inc.");
        strcpy(myCompany.location, "Silicon Valley");
        myCompany.employees = 200;
        myCompany.sales = 500;
        myCompany.price = 5000;
        myCompany.revenue = myCompany.sales * myCompany.price;

        displayCompanyInfo(myCompany);
        return 0;
  }

  