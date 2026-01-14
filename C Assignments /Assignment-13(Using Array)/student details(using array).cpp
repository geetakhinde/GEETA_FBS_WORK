#include <stdio.h>

struct admin {
    int ID;
    char name[20];
    int salary;
    int allowance;
};

struct admin storeAdmin();
void displayAdmin(struct admin );

int main() {
    struct admin admins[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter detail for admin %d:\n", i + 1);
        admins[i] = storeAdmin();
    }
    
    printf("\nAdmin details:\n");
    for (i = 0; i < 5; i++) {
        displayAdmin(admins[i]);
    }

    return 0;
}

struct admin storeAdmin() {
    struct admin a;
    scanf("%d %s %d %d", &a.ID, a.name, &a.salary, &a.allowance);
    return a;
}

void displayAdmin(struct admin a) {
    printf("ID = %d, Name = %s, Salary = %d, Allowance = %d\n", a.ID, a.name, a.salary, a.allowance);
}
