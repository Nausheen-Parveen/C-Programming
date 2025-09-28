#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    while (n > 0) {
        sum += n % 10;  // take last digit
        n /= 10;        // remove last digit
    }

    printf("%d", sum);
    return 0;
}
