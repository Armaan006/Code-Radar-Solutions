#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("Average: %.2f", float(x+y+z)/3);
    return 0;
}