#include <stdio.h>

int main() {
    char name[30];
    int age;
    float height;

    char subject;
    float grade;
    char description[20];

    printf("Enter your name, age and height: ");
    scanf("%s %d %f", name, &age, &height);

    printf("Enter subject, grade, and grade description: ");
    scanf(" %c %f %s", &subject, &grade, description);

    printf("%s is %d years old and %.1f centimeters tall.\n", name, age, height);
    printf("In subject %c, %s got %.2f which is described as \"%s\".\n", subject, name, grade, description);

    return 0;
}
