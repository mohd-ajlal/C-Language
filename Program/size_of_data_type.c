#include<stdio.h>
int main() {
    int inttype;
    float floattype;
    double doubletype;
    char chartype;

    // sizeof(variable_name) returns the size of the variable
    printf("Size of int: %d bytes\n", sizeof(inttype));
    printf("Size of float: %d bytes\n", sizeof(floattype));
    printf("Size of double: %d bytes\n", sizeof(doubletype));
    printf("Size of char: %d byte\n", sizeof(chartype));
    
    return 0;
}