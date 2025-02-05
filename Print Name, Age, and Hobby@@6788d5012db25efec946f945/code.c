#include <stdio.h>

int main() {
    char name [10];
    int age;
    char hobby [20];
    scanf("%c %d %c", &name, &age, &hobby);
    printf("Name: %c\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %c", hobby);
    return 0;
}