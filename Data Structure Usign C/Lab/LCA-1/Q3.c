// Create Structure and display the members in it;

#include <stdio.h>
    struct student {
        int rollno;
        char name[50];

    };
    
    int main() {
       struct student s1 = {5, "Om"};
        
        printf("Roll No: %d\n",s1.rollno);
        printf("Name: %s\n",s1.name);
        return 0;
    }
