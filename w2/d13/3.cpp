#include <string>
#include <unordered_set>  // 중복 체크를 위한 unordered_set 사용

using namespace std;

string solution(string my_string) {
    string answer = "";  // 결과 문자열
    unordered_set<char> seen;  // 등장한 문자를 기록할 집합

    for (char ch : my_string) {
        // 문자가 처음 등장한 경우만 answer에 추가
        if (seen.find(ch) == seen.end()) {
            answer += ch;   // 문자 추가
            seen.insert(ch);  // 문자 기록
        }
    }

    return answer;
}
