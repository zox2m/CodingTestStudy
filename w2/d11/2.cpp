// 합성수의 개수
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    // 1부터 n까지 포함하여 탐색 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                answer++;
                break;
            }
        }
    }
    return answer;
}