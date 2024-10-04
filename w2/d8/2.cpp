#include <string>

using namespace std;

string solution(int age) {
    string answer = "";

    // 각 자릿수를 구하기 위해 문자열로 변환
    string age_str = to_string(age);

    // 각 자리 숫자를 대응되는 문자로 변환
    for (char digit : age_str) {
        answer += (digit - '0') + 'a';  // 숫자(0~9)를 문자('a'~'j')로 변환
    }

    return answer;
}
