#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int max_count = 0, count = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            count++;
            if (count > max_count) {
                max_count = count;
            }
        } else {
            count = 0;
        }
        n /= 2;
    }

    printf("%d", max_count);

    return 0;
}