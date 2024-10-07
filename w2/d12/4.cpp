// 소인수분해
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            answer.push_back(i);

            // 해당 소인수로 더 분해된다면, 최대한 나눈다
            while (n % i == 0)n /= i;
        }
    }
    return answer;
}