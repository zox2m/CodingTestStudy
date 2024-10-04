#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    // 1부터 n까지의 수 중 n의 약수를 찾아 순서쌍을 셉니다.
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            answer++;  // i가 n의 약수이면 순서쌍 (i, n/i) 존재
        }
    }

    return answer;
}
