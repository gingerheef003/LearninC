#include <stdio.h>

void is7(int n){
    if (n < 7){
        printf("Number is less than 7\n");
    } else if (n > 7){
        printf("Number is greater thatn 7\n");
    } else {
        printf("Correct! It is 7\n");
    }
}

int main(){
    is7(5);
    is7(7);
    is7(9);

    return 0;
}