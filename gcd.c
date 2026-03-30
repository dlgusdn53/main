#include <stdio.h>

// 유클리드 호제법
int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int a = 48, b = 18;
    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
    return 0;
}
