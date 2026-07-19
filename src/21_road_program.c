
//
#include <stdio.h>
#include <stdlib.h>  // malloc को लागि
int main() {
    // Stack मा भएको सामान्य array
    int stackArray[5]; 
    
    // Heap मा भएको dynamic array (हैकरको मनपर्ने!)
    int *heapArray = (int*)malloc(sizeof(int) * 5); 
    
    // हेर्नुहोस्, हामीले Heap मा ठाउँ माग्यौं!
    heapArray[0] = 100;
    printf("Heap मा पहिलो मान: %d\n", heapArray[0]);
    
    // हैकरहरूले यो heapArray लाई आफ्नो malicious code हाल्न प्रयोग गर्छन्।
    // किनभने उनीहरूले यसको ठेगाना पत्ता लगाउन सक्छन् (`&heapArray`) र कन्ट्रोल गर्न सक्छन्।
    
    free(heapArray);  // जग्गा खाली गर्नुस् (नत्र मेमोरी लिक हुन्छ!)
    return 0;
}


//buffer overflow
#include <stdio.h>
#include <string.h>

int main() {
    char password[4]; 
    int access_granted = 0; 

    printf("Password (4 chars max): ");
    scanf("%s", password); // Bounds check? No! Overflow here.

    if (access_granted == 0) {
        printf("\n❌ ACCESS DENIED! (Still locked)\n");
    } else {
        printf("\n🔥🔥🔥 HACKED! ACCESS GRANTED! 🔥🔥🔥\n");
    }
    return 0;
}
