#include <stdio.h>
int main() {
    float t,f;
    printf("enter temperature in celsius:");
    scanf("%f", &t);
        f=(t*9/5)+32;
        printf("temperature in farenheit is %f", f);
        return 0;
}