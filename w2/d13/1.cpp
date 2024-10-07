// 공백에 맞게 문자열 나누기 
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int pre = 0;
    string temp;
    // 문자열을 공백으로 나눔 
    stringstream ss(s);

    // ss 값이 빌 때 까지 반복
    while (ss >> temp)
    {
        // Z면?
        if (temp == "Z")
        {
            answer -= pre;
        }
        else
        {
            pre = stoi(temp);
            answer += pre;
        }
    }
    return answer;
}