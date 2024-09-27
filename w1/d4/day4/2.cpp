// 6조각 피자. n명이 주문한 피자를 남기지 않고 모두 같은 수의 피자 조각을 먹어야 한다면 최소 몇 판을 시켜야 하는지
#include <string>
#include <vector>

using namespace std;

// GCD 계산 함수
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int solution(int n) {
    int gcdNum = gcd(6, n);
    return n/gcdNum;
}
