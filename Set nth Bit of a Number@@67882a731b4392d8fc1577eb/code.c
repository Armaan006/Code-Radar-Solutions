#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int bit=1<<b;
    printf("%d", bit);
    return 0;
}