#include <stdio.h>

int main(){

    int a = 7, b = 42, c = 1234;
    float x = 3.14159, y = 12.0, z = 1234.567;

    printf("| INT |");
        printf("|  FLOAT |\n");
    printf("|%5d|", a);
        printf("|%8.2f|\n", x);
    printf("|%5d|", b);
        printf("|%8.2f|\n", y);
    printf("|%5d|", c);
        printf("|%8.2f|\n", z);
    return 0;
}