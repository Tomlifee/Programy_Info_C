#include <stdio.h>

int main(){

    int n;
    int m;
    int l;

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &l);

    printf("\n Srednia tych 3 liczb to [%.2f]", ((float)n + m + l)/3);

    return 0;    
}