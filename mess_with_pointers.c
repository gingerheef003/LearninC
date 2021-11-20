#include <stdio.h>

int main(){
    int a = 1;
    int * pointer_to_a = &a;

    printf("Value of a: %d\n", a);
    printf("Pointer to a: %p\n", pointer_to_a);
    printf("Value from pointer: %d\n", *pointer_to_a);
}