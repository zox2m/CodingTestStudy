// 6���� ����. n���� �ֹ��� ���ڸ� ������ �ʰ� ��� ���� ���� ���� ������ �Ծ�� �Ѵٸ� �ּ� �� ���� ���Ѿ� �ϴ���
#include <string>
#include <vector>

using namespace std;

// GCD ��� �Լ�
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
