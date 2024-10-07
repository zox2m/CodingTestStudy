// 2명씩 증가하며 반복하는 공던지기 
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 1;
    for (int i = 1; i < k; i++)
    {
        answer += 2;
        if (answer > numbers.size())answer = (answer % numbers.size());
    }
    return answer;
}