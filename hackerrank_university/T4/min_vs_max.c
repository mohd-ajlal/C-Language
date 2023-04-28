#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int N;
        scanf("%d", &N);
        int min = 1e9, max = -1e9;
        for(int i=0; i<N; i++) {
            int x;
            scanf("%d", &x);
            if(x < min) min = x;
            if(x > max) max = x;
        }
        printf("Min=%d Max=%d\n", min, max);
    }
    return 0;
}