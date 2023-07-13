#include <stdio.h>
void main()
{

    char a = 'a';
    int b = 3;
    float c = 3.143;
    printf("%zu\n", sizeof(char));
    int d = '9';
    printf("%d\n", sizeof(d));
    printf("%zu\n", sizeof("ab"));
    printf("%zu\n", sizeof("ruchi"));
    printf("%zu\n", sizeof(printf("ruchi")));
    int e=5;
   int x=++e;
    printf("%d %d\n",e,x);
    int f=8;
    printf("%d %d\n",f++,f++);
    printf("%d %d\n",++f,++f);
    printf("%d %d\n",f++,++f);
    
}