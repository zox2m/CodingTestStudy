// 문자열 가위바위보
// 문자열 뜯어서 읽고, 새로운 문자열 생성 
#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for (char c : rsp)
    {
        if (c == '2') answer += "0";
        else if (c == '5') answer += "2";
        else if (c == '0') answer += "5";

    }
    return answer;
}