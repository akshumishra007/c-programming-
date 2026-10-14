#include <stdio.h>
int main() {
    char n[100];
    int a;
    printf("enter your name");
    scanf("%99s", n);

    printf("enter your age ");
    scanf("%d", &a);

    printf("My name is %s and i am %d years old", n, a);
    return 0;
}