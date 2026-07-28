#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float grade;
};

void saveToBinaryFile() {
    FILE *file;
    struct Student s;
    
    printf("\n--- SAVE STUDENT TO BINARY FILE ---\n");
    
    printf("Enter Student ID: ");
    scanf("%d", &s.id);
    
    printf("Enter Student Name: ");
    getchar();
    fgets(s.name, 50, stdin);
    s.name[strcspn(s.name, "\n")] = 0;
    
    printf("Enter Student Grade: ");
    scanf("%f", &s.grade);
    
    // Open binary file for writing
    // "wb" = write binary
    file = fopen("students.bin", "ab"); // append binary
    
    if (file == NULL) {
        printf("❌ Error opening file!\n");
        return;
    }
    
    // Write structure directly to file (binary mode)
    fwrite(&s, sizeof(struct Student), 1, file);
    
    fclose(file);
    
    printf("✅ Student saved to binary file!\n");
    printf("   (Data is stored in binary format - not human readable)\n");
}

void readFromBinaryFile() {
    FILE *file;
    struct Student s;
    int count = 0;
    
    printf("\n--- READ STUDENTS FROM BINARY FILE ---\n");
    
    file = fopen("students.bin", "rb"); // read binary
    
    if (file == NULL) {
        printf("❌ No binary file found!\n");
        return;
    }
    
    printf("\n%-10s %-25s %-10s\n", "ID", "NAME", "GRADE");
    printf("----------------------------------------\n");
    
    // Read each student structure from binary file
    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("%-10d %-25s %-10.2f\n", s.id, s.name, s.grade);
        count++;
    }
    
    fclose(file);
    
    printf("----------------------------------------\n");
    printf("Total Students: %d\n", count);
    printf("\n💡 Note: Binary files aren't human readable!\n");
    printf("   Try opening 'students.bin' in a text editor!\n");
}

int main() {
    int choice;
    
    printf("================================\n");
    printf("   BINARY FILE HANDLING DEMO\n");
    printf("================================\n\n");
    
    do {
        printf("\n1. Save Student to Binary File\n");
        printf("2. Read Students from Binary File\n");
        printf("3. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                saveToBinaryFile();
                break;
            case 2:
                readFromBinaryFile();
                break;
            case 3:
                printf("\n👋 Goodbye!\n");
                break;
            default:
                printf("❌ Invalid choice!\n");
        }
    } while(choice != 3);
    
    return 0;
}