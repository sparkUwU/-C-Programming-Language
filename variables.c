#include <stdio.h>
#include <stdbool.h>

// this is a simple C program

/*pdsmg
ldkg;ma
podsakgp
*/

int main(){

    int age = 10;
    int year = 2025;
    int quantity = 100;
    printf("age is %d years old\n", age);
    printf("year is %d\n", year);
    printf("quantity is %d x items\n", quantity);

    float price = 9.99;
    float gpa = 2.5;
    printf("price is $ %.2f\n", price);
    printf("gpa is %.1f\n", gpa);

    double pi = 3.141592653589793;
    printf("pi is %.15lf\n", pi);

    char grade = 'A';
    printf("grade is %c\n", grade);

    char name[] = "sparkU";
    printf("name is %s\n", name);


    bool is_sunny = true;
    printf("is it sunny? %s\n", is_sunny ? "yes" : "no");
    if (is_sunny) {
        printf("It's a sunny day!\n");
    }
    else {
        printf("it's not a sunny day\n");
    }

    printf("hello world\n");
    return 0;
}