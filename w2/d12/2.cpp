// ���ڿ� �����ϱ� 
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for (const auto v : my_string)
    {
        // ���� �ƽ�Ű 48~ 57�� 0~9
        if (47 < v && v < 58)
        {
            answer.push_back(v - 48);
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}