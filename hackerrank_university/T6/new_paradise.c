#include <stdio.h>

int main() {
    int n, max_routes = 0, count = 0;
    scanf("%d", &n);
    int routes[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &routes[i]);
        if (routes[i] > max_routes) {
            max_routes = routes[i];
            count = 1;
        } else if (routes[i] == max_routes) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}