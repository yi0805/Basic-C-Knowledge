#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

void print_student(struct Student *s) {
    printf("Name:  %s\n", s->name);
    printf("Age:   %d\n", s->age);
    printf("Grade: %.1f\n", s->grade);
}

int main(void) {
    struct Student students[3];

    strcpy(students[0].name, "Alice");
    students[0].age = 20;
    students[0].grade = 88.5;

    strcpy(students[1].name, "Bob");
    students[1].age = 22;
    students[1].grade = 75.0;

    strcpy(students[2].name, "Carol");
    students[2].age = 21;
    students[2].grade = 92.3;

    for (int i = 0; i < 3; i++) {
        printf("--- Student %d ---\n", i + 1);
        print_student(&students[i]);
    }

    return 0;
}
