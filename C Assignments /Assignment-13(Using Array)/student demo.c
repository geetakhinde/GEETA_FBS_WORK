#include <stdio.h>

struct student {
    int ID;
    char name[20];
    int marks;
};

int main() {
    struct student s[5];  
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d (ID Name Marks):\n", i + 1);
        scanf("%d %s %d", &s[i].ID, s[i].name, &s[i].marks);
    }

    printf("\nStudent Details:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d -> ID: %d, Name: %s, Marks: %d\n", i + 1, s[i].ID, s[i].name, s[i].marks);
    }

    return 0;
}
