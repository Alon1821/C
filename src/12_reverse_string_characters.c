


#include <stdio.h>
#include <string.h>
    struct student {
        int roll;
        int marks;
        char name[30];
    };
     int main() {
        struct student class[3];
        for(int i = 0; i < 5; i++) {
            printf("enter the details of student %d:\n", i+1);
            printf("roll");
        scanf("%d", &class[i].roll);
    printf("marks");
     scanf("%d", &class[i].marks);
    printf("name");
     scanf("%s", class[i].name);
        }
    printf("\n details of strudent \n");
     for( int i =0; i < 3; i++) {
        printf("roll: %d\n", class[i].roll);
        printf("name: %s\n", class[i].name);
        printf("marks: %d\n", class[i].marks);
     }
        return 0;
     }
     
 #include <stdio.h> 
 #include <string.h>
 struct students {
     char name[50];
     int roll;
     int age;
     char grade;
    };
     int main() {
        struct students details[3];
        for(int i = 0; i < 3; i++) {
            printf("enter the name:\n");
            scanf("%s", details[i].name);
            printf("enter the roll:\n");
           scanf("%d", details[i].roll);
            printf("enter the age:\n");
            scanf("%d", &details[i].age);
       printf("enter the grade:\n");
            scanf(" %c", &details[i].grade);
        }
            printf("\n......***details***.....\n");
            for(int i = 0; i < 3; i++) {
            printf("\n--- student%d ---\n", i+1);}
            printf("name: %s\n", details[i].name);
            printf("roll: %d\n", details[i].roll);
            printf("age: %d\n", details[i].age);
            printf("grade : %c\n",details[i].grade);
     }
            return 0;
            }


    
            #include <stdio.h>
              