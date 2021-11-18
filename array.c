#include <stdio.h>

int main(){
    int g[3];
    int avg;

    g[0] = 80;
    g[1] = 85;
    g[2] = 90;

    avg = (g[0] + g[1] + g[2]) / 3;

    printf("The average grade is %d", avg);
    return 0;
}