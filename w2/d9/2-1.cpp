// sstream을 쓰지 않는 다른 풀이 
#include <string>
#include <vector>

using namespace std;
const string morse[] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };

string solution(string letter) {
    string answer = "";
    letter += ' ';
    string tmp = "";
    for (int i = 0; i < letter.size(); i++) {
        if (letter[i] == ' ') {
            for (int j = 0; j < 26; j++) {
                if (tmp == morse[j]) {
                    answer += j + 'a';
                }
            }
            tmp = "";
        }
        else {
            tmp += letter[i];
        }
    }

    return answer;
}