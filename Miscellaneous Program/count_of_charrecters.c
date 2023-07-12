#include<stdio.h>
#include<math.h>

int main()
{
    int c=0,f=0,d=0,k=0;
    char a[100];
    fgets(a,100,stdin);
    for(int i=0;a[i];i++){
        k++;
        if((a[i]<='z'&&a[i]>='a')||(a[i]<='Z'&&a[i]>='A'))
        c++;
        if(a[i]==' ')
        f++;
        if(a[i]<=9&&a[i]>=0)
        d++;
    }
    printf("char is %d\n",k);
    printf("alphabet are %d\n",c);
    printf("space are %d\n",f);
    printf("special character are %d\n",k-(c+f+d)-1);
    return 0;
}