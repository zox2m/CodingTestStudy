#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    // 1���� n������ �� �� n�� ����� ã�� �������� ���ϴ�.
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            answer++;  // i�� n�� ����̸� ������ (i, n/i) ����
        }
    }

    return answer;
}
