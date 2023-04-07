#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student {
    int id;
    char name[50];
    float marks;
    float fees_paid;
};

int main() {
    int num_students, i;
    struct student *ptr;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    ptr = (struct student*) malloc(num_students * sizeof(struct student));

    for(i = 0; i < num_students; i++) {
        printf("\nEnter details of student %d:\n", i+1);
        printf("Enter ID: ");
        scanf("%d", &ptr[i].id);
        printf("Enter name: ");
        scanf("%s", ptr[i].name);
        printf("Enter marks: ");
        scanf("%f", &ptr[i].marks);
        printf("Enter fees paid: ");
        scanf("%f", &ptr[i].fees_paid);
    }

    printf("\n\n-----------------------\n");
    printf("ID\tName\tMarks\tFees Paid\n");
    printf("-----------------------\n");

    for(i = 0; i < num_students; i++) {
        printf("%d\t%s\t%.2f\t%.2f\n", ptr[i].id, ptr[i].name, ptr[i].marks, ptr[i].fees_paid);
    }

    free(ptr);
    return 0;
}
