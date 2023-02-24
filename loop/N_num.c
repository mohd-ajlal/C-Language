#include<stdio.h>
int main(){
    void  N_num(int n){
        if(n<=0){
            return;
        
        }
        else {
            
            printf("%d\n",n);
            N_num(n-1);
        }
    }
    N_num(5);
    return 0;
}
