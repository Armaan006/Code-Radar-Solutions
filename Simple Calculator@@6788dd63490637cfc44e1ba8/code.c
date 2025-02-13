#include <stdio.h>

int main() {
    int a,b;
    char o;
    scanf("%d %d %c", &a, &b, &o);

    switch(o) {
        case '+':
        printf("%d", a+b);
        break;

        case '-':
        printf("%d", a-b);
        break;

        case '*':
        printf("%d", a*b);
        break;
        
        case '/':
        if(b!=0)
        printf("%d", a/b);
        else
        print("error");
        break;

        default:
        printf("error");
    }
    return 0;
}