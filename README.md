# Learning C

## Basic structure
return 0 tells that the program has completed successfully
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
