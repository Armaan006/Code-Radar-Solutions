#include <stdio.h>

int main() {
    double a,b;
    char o;
    scanf("%lf %lf %c", &a, &b, &o);
    switch(o) {
        case '+':
        printf("%.2f", a+b);
        break;
        case '-':
        printf("%.2f", a-b);
        break;
        case '*':
        printf("%.2f", a*b);
        break;
        case '/':
        printf("%.2f", a/b);
        break;
        default:
        printf("error");
    }
    return 0;
}