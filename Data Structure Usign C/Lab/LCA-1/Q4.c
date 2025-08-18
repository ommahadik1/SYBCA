// WAP to dynamically allocate memory for an array of stuctures, input and display their details, then free the memory.

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
};

int main() {
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee *arr = malloc(n * sizeof(struct Employee));

    for(i = 0; i < n; i++) {
        printf("Enter ID: ");
        scanf("%d", &arr[i].id);
        printf("Enter Name: ");
        scanf("%s", arr[i].name);
    }

    printf("\nEmployee List:\n");
    for(i = 0; i < n; i++) {
        printf("%d %s\n", arr[i].id, arr[i].name);
    }

   
    return 0;
}
