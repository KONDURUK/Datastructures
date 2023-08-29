#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", a);

        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    printf("\n");

    return 0;
}

