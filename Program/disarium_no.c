// disarium number: 175 = 1^1 + 7^2 + 5^3 = 175

#include<stdio.h>
#include<math.h>

    int main(){
    int a,temp,b=0,di,ten,count=1;
    scanf("%d",&a);
    temp=a;
    di=log10(a);
    ten=pow(10,di);
    while(a!=0){
        b+=pow((a/ten),count);
        count++;
        a%=ten;
        ten/=10;
    }
    if (b==temp){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}