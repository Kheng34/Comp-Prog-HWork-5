#include <stdio.h>

int a, i, k, tot;

int main() {
    printf("Please enter the number: ");
    scanf("%d", &a);
    printf("First %d odd numbers: ", a);
    for(i = 1, k = 1; i <= a; i++, k += 2) {
        printf("%d ", k);
        tot += k;
	}
    printf("\nTotal of the first %d odd numbers: %d", a, tot);
    printf("\n");system("PAUSE");return 0;
}
