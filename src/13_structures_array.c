

#include <stdio.h>
#include <string.h>

struct company {
    char name[50];
    int members;
    int agelimit;
    float salary;
};
int main() {
    struct company  num[3];
    
    for(int i = 0; i < 3; i++) {
        printf("\n enter the details of company:\n");
        printf("enter the name of company: \n" );
        scanf("%s", num[i].name);
        printf("members: \n" );
        scanf("%d", &num[i].members);
        printf("agelimit: " );
        scanf("%d", &num[i].agelimit);
        printf("salary: \n" );
        scanf("%f", &num[i].salary);
    }
    
    printf("\n\n********** Details *********\n");  // Fixed this line!
    
    for(int i = 0; i < 3; i++) {
        printf("\n--- company%d ---\n", i+1);
        printf("name: %s\n", num[i].name);
        printf("members: %d\n", num[i].members);
        printf("agelimit: %d\n", num[i].agelimit);
        printf("salary: $%.2f\n", num[i].salary);
    }
    
    return 0;
}