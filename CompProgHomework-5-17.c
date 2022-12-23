#include <stdio.h>

int a, b, i, lcm, gcd;

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
    lcm = b * (a / gcd);
    printf("LCM: %d", lcm);
    printf("\n");system("PAUSE");return 0;
}
