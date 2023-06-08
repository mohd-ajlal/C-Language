#include <stdio.h>

int main() {
    int n, salary, E1 = 0, E2 = 0;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &salary);
        if (salary > E1) {
            E2 = E1;
            E1 = salary;
        } else if (salary > E2 && salary != E1) {
            E2 = salary;
        }
    }

    printf("%d %d", E1, E2);
    return 0;
}