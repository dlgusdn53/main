#include <stdio.h>
#include <time.h>

// 피보나치 (재귀)
long long fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

// GCD
int gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    clock_t start, end;

    for (int n = 5; n <= 40; n++) {
        start = clock();

        long long fn = fib(n);
        long long fn1 = fib(n-1);
        int result = gcd(fn, fn1);

        end = clock();

        double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

        printf("n=%d, gcd=%d, time=%f sec\n", n, result, time_spent);
    }

    return 0;
}
