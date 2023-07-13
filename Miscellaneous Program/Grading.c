#include<stdio.h>
#include<math.h>
int main()
{
   int a=99,b=97,c=65,d=85,e=67;
   int f=a+b+c+d+e,g;
   g=(f/500)*100;
   printf("%d",g);
   if(g>=90){
   printf("o");
   }
   else if(90>g&&80<=g){
   printf("a");
   }
else if (80>g&&70<=g){
    printf("B");
}
else if (70>g&&60<=g){
    printf("c");
    }
else if (60>g&&50<=g){
    printf("D");
    }
else if (50>g){
    printf("F");
    }
    
}