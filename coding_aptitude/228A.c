#include<stdio.h>
int main(){
    int nums[4];
    for(int i=0;i<4;i++){
        scanf("%d",&nums[i]);
    }
    int cnt=0;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(nums[i]==nums[j]){
                cnt++;
            }
        }
    }
    if(cnt ==3){
        printf("%d\n",2);
    }
    else if(cnt >3){
        printf("%d\n",3);
    }
    else{
        printf("%d\n",cnt);
    }
    return 0;
}
