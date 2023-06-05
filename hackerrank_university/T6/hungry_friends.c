#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 4 == 0) {
        printf("PLAY\n");
    } else {
        printf("NOT PLAY\n");
    }
    return 0;
}