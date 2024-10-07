// 문자열 정렬하기 
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for (const auto v : my_string)
    {
        // 숫자 아스키 48~ 57이 0~9
        if (47 < v && v < 58)
        {
            answer.push_back(v - 48);
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}