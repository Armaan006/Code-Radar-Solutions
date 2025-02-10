#include <stdio.h>

int main() {
    int a,b ;
    scanf("%d", &a);
    int LSB=a>>b;
    if(LSB&1) {
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}