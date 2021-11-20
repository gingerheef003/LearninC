# Learning C

## Basic structure
*return 0* tells that the program has completed successfully
```
#include <stdio.h>

int main(){
    """Code Here"""
    return 0;
}
```

## Printing
```
printf("Text to print here!")
```

## Data types
int, float, double, char\
To print number from variable
```
printf("The numbers are %d, %f, %.2f", int_num, float_num, float_num_with_precision_2);
```

## Arrays
```
int g[3];

g[0] = 80;
g[1] = 85;
g[2] = 90;
```

## Multidimensional Array
```
int h[a][b][c]...;
```

## Strings
```
char * name = "John Smith"; //readable only strings

char name[] = "John Smith"; //automatically allocates size
char name[11] = "John Smith"; //give size for extra 0 when explicitly allocating to determine end of string
```
%s is used in printf to get value of string variable
```
strlen(name); //returns integer output of length of string
strncmp(name,"John",4) //gives out 0 if strings are equal otherwise another integer
strncat(dest,src,n) //appends first n characters of src with dest (dest should be declared with enough space)
```
## Loops
```
int i;
for (i = 0; i < 10; i++){
    printf("%d\n", i);
}
```
```
int i = 0;
while (i < 10){
    printf("%d\n");
}
```
break and continue are used inside loops just as you think they would :grinning:

## Functions
```
int foo(int bar);

int main(){
    printf("The value of foo is %d", foo(1));
}

int foo(int bar){
    return bar + 1;
}
```
functions that don't return a value are declared using *void*

## Static
Declaring variable as static makes it stay in memory even after the function stops executing
```
int abc(){
    static int c = 0;
    c++;
    return c;
}
```

## Pointer
```
int a = 1;
int * pointer_to_a = &a;

printf("Value of a: %d\n", a);
printf("Pointer to a: %p\n", pointer_to_a); //memory address of value in a
printf("Value from pointer: %d\n", *pointer_to_a);
```
### To pass function arguments by refernce
```
void addone(int *n){ //instead of (int n)
    (*n)++; //instead of n++;
}

int n;
addone(&n); //instead of addone(n);
// will add one to the original variable itself
```

## Structures
```
struct point {
    int x;
    int y;
}

struct point p;

p.x = 10;
p.y = 5;

//if draw is a function which takes two integers as arguments
draw(p); // will be the same as draw(p.x,p.y);
```
Using typedefs, we won't need to use struct everytime we create a point, eg:
```
typedef struct {
    int x;
    int y;
} point

point p; // will define a point p in the same way as above
```
```
//To move actual point using function
void move(point * p){
    (*p).x++; //or p->x++;
    (*p).y++; //or p->y++;
}
```