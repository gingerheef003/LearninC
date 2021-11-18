#include <stdio.h>

int main(){
    int g[2][5];
    float avg;
    int i;
    int j;

    g[0][0] = 80;
    g[0][1] = 70;
    g[0][2] = 65;
    g[0][3] = 89;
    g[0][4] = 90;

    g[1][0] = 85;
    g[1][1] = 80;
    g[1][2] = 80;
    g[1][3] = 82;
    g[1][4] = 87;
    for (i = 0; i < 2; i++){
        avg = 0;
        for (j = 0; j < 5; j++){
            avg = g[i][j];
        }
        avg = avg / 5;
        printf("The average in subject %d is %.2f\r\n", i,avg);
    }

    return 0;
}