

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct company {
    char name[50];
    int members;
    int agelimit;
    float salary;
};

// Function to clear input buffer
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Function to validate integer input
int getValidInteger(const char *prompt) {
    int value;
    int result;
    
    while (1) {
        printf("%s", prompt);
        result = scanf("%d", &value);
        
        if (result == 1) {
            clearInputBuffer();  // Clear any extra characters
            if (value > 0) {
                return value;
            } else {
                printf("Error: Please enter a positive number!\n");
            }
        } else {
            printf("Error: Invalid input! Please enter a valid number.\n");
            clearInputBuffer();
        }
    }
}

// Function to validate float input
float getValidFloat(const char *prompt) {
    float value;
    int result;
    
    while (1) {
        printf("%s", prompt);
        result = scanf("%f", &value);
        
        if (result == 1) {
            clearInputBuffer();
            if (value >= 0) {
                return value;
            } else {
                printf("Error: Please enter a non-negative number!\n");
            }
        } else {
            printf("Error: Invalid input! Please enter a valid number.\n");
            clearInputBuffer();
        }
    }
}

// Function to validate string input
void getValidString(const char *prompt, char *buffer, int maxLength) {
    while (1) {
        printf("%s", prompt);
        
        // Use fgets for safe string input
        if (fgets(buffer, maxLength, stdin) != NULL) {
            // Remove trailing newline if present
            size_t len = strlen(buffer);
            if (len > 0 && buffer[len - 1] == '\n') {
                buffer[len - 1] = '\0';
            }
            
            // Check if string is empty
            if (strlen(buffer) > 0) {
                return;
            } else {
                printf("Error: Company name cannot be empty!\n");
            }
        } else {
            printf("Error: Failed to read input!\n");
            clearInputBuffer();
        }
    }
}

int main() {
    struct company num[3];
    
    // Input phase
    for (int i = 0; i < 3; i++) {
        printf("\n========== Enter details of Company %d ==========\n", i + 1);
        
        getValidString("Enter the name of company: ", num[i].name, sizeof(num[i].name));
        num[i].members = getValidInteger("Enter number of members: ");
        num[i].agelimit = getValidInteger("Enter age limit: ");
        num[i].salary = getValidFloat("Enter salary ($): ");
    }
    
    // Display phase
    printf("\n\n========== Company Details ==========\n");
    
    for (int i = 0; i < 3; i++) {
        printf("\n--- Company %d ---\n", i + 1);
        printf("Name: %s\n", num[i].name);
        printf("Members: %d\n", num[i].members);
        printf("Age Limit: %d years\n", num[i].agelimit);
        printf("Salary: $%.2f\n", num[i].salary);
    }
    
    return 0;
}
