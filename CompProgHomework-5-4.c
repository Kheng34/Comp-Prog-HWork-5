#include <stdio.h>

int a, i, tot;

int main() {
    printf("Please enter the number: ");
    scanf("%d", &a);
    for(i = 1; i <= a; i++) {
        printf("%d ", i);
        tot += i;
    }
    printf("\nTotal: %d", tot);
    printf("\n");system("PAUSE");return 0;
}
