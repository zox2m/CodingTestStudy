// 문자열에서 특정 문자 제거
#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (char c : my_string)
    {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') answer.push_back(c);
    }
    return answer;
}