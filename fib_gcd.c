#include <stdio.h>
#include <time.h>

long long fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    FILE *fp = fopen("result.txt", "w");  // 파일 생성
    clock_t start, end;

    for (int n = 5; n <= 40; n++) {
        start = clock();

        long long fn = fib(n);
        long long fn1 = fib(n-1);
        gcd(fn, fn1);

        end = clock();

        double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

        fprintf(fp, "%d %f\n", n, time_spent);  // 파일에 저장
    }

    fclose(fp);
    return 0;
}
