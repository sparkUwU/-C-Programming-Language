#include <stdio.h>

int main() {

    int age = 0;
    float gpa = 0.0;
    char grade = '\0';
    char name[30] = "";

    printf("enter your age: ");
    scanf("%d", &age);
    printf("Age: %d\n", age);

    printf("enter your GPA: ");
    scanf("%f", &gpa);
    printf("GPA: %.2f\n", gpa);

    printf("enter your grade: ");
    scanf(" %c", &grade);
    printf("Grade: %c\n", grade);

    getchar(); // to consume the newline character left by previous scanf
    printf("enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Name: %s\n", name);


    return 0;
}