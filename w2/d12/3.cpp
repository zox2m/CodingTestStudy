#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for (const auto v : my_string)
    {
        // ���� �ƽ�Ű 48~ 57�� 0~9
        if (47 < v && v < 58) answer += v - 48;
    }
    return answer;
}