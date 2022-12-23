#include <stdio.h>

int a, b, i, gcd;

int main() {
    printf("Please enter first number: ");
    scanf("%d", &a);
    printf("Please enter second number: ");
    scanf("%d", &b);
    for(i = 1; i <= a && i <= b; i++) {
        if(!(a % i) && !(b % i)) {
            gcd = i;
        }
    }
    printf("GCD: %d", gcd);
    printf("\n");system("PAUSE");return 0;
}
