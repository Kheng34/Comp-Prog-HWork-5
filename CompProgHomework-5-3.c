#include <stdio.h>

int i, tot;

int main() {
    for(i = 100; i < 200; i++) {
        if(!(i % 9)) {
            printf("%d\n", i);
            tot += i;
        }
    }
    printf("Total: %d", tot);
    printf("\n");system("PAUSE");return 0;
}
