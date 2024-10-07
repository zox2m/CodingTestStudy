#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for (const auto v : my_string)
    {
        // 숫자 아스키 48~ 57이 0~9
        if (47 < v && v < 58) answer += v - 48;
    }
    return answer;
}