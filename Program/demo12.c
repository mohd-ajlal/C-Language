#include <stdio.h>

long long int findMaxChocolates(long long int N) {
    long long int maxChocolates = 1;
    
    for (long long int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            maxChocolates = N / i;
            break;
        }
    }
    
    return maxChocolates;
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        long long int N;
        scanf("%lld", &N);
        if(N==1){
            printf("2\n");
            continue;
        }
        else{
        long long int result = findMaxChocolates(N);
        printf("%lld\n", result);
        }
        

    }
    
    return 0;
}
