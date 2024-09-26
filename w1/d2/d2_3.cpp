#include <stdio.h>
#include <stdlib.h>

// GCD 계산 함수
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int* solution(int numer1, int denom1, int numer2, int denom2) {
    // 분자와 분모 계산
    int numerator = numer1 * denom2 + numer2 * denom1;
    int denominator = denom1 * denom2;

    // GCD로 분자와 분모 간단히 하기
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;

    // 결과 배열 동적 할당
    int* answer = (int*)malloc(2 * sizeof(int));
    if (answer == NULL) {
        return NULL; // 메모리 할당 실패 시
    }

    answer[0] = numerator;  // 간단히 한 분자
    answer[1] = denominator; // 간단히 한 분모

    return answer;
}
