// WAP to print employee directory using array of pointers to sturctures

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee *arr[n];

   
    for(i = 0; i < n; i++) {
        arr[i] = (struct Employee *)malloc(sizeof(struct Employee));
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &arr[i]->id);
        printf("Name: ");
        scanf("%s", arr[i]->name);
        printf("Salary: ");
        scanf("%f", &arr[i]->salary);
    }

    // Printing employee directory
    printf("\nEmployee Directory:\n");
    printf("ID\n Name \n Salary \n");
    for(i = 0; i < n; i++) {
        printf("%d %s %.2f\n", arr[i]->id, arr[i]->name, arr[i]->salary);
    }



    return 0;
}
