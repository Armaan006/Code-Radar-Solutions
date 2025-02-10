#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int bit=1<<a;
    printf("%d", bit);
    return 0;
}