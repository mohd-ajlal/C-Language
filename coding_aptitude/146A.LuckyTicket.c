#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char nums[n];
    scanf("%s",nums);
    int cnt=0,fsum=0,ssum=0;
    for(int i=0;i<n;i++){
        if(nums[i]=='4' || nums[i]=='7'){
            cnt++;
        }
        if(i < n/2){
            fsum += nums[i]-'0';
        }    
    }
    for(int i=n/2;i<n;i++){
        ssum += nums[i]-'0';
    }
    if(cnt==n && fsum==ssum){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}