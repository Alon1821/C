#include <stdio.h>
#include <string.h>

// Simple "encryption" using XOR (bit manipulation)
// This is how real encryption works at the lowest level!
void encryptFile(const char *filename, char key) {
    FILE *file = fopen(filename, "rb+");
    if (!file) return;
    
    unsigned char byte;
    while (fread(&byte, 1, 1, file) == 1) {
        byte = byte ^ key;  // XOR encryption (pure bit manipulation!)
        fseek(file, -1, SEEK_CUR);
        fwrite(&byte, 1, 1, file);
    }
    
    fclose(file);
    printf("🔒 File encrypted with key: %d\n", key);
}

int main() {
    printf("=== CRYPTOGRAPHY PREVIEW ===\n\n");
    printf("This XOR encryption uses BIT MANIPULATION\n");
    printf("(You'll learn this soon!)\n\n");
    
    // Create a test file
    FILE *test = fopen("secret.txt", "w");
    fprintf(test, "This is a secret message!");
    fclose(test);
    
    printf("Original file created: 'secret.txt'\n");
    printf("Open it - you can read it!\n\n");
    
    encryptFile("secret.txt", 0xAA); // Encrypt with key 170
    
    printf("\nNow open 'secret.txt' - it's GIBBERISH!\n");
    printf("This is how ransomware works (but more complex)!\n");
    
    return 0;
}