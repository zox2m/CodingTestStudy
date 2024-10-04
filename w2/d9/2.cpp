// 모스부호
// map으로 저장해두고 검색함
// 입력을 공백 기준으로 나누는 방법을 모르겠어서 찾아봄 -> sstream
#include <string>
#include <vector>
#include <sstream>  // stringstream을 사용하기 위한 헤더
#include <unordered_map>  // map 사용을 위한 헤더

using namespace std;

string solution(string letter) {
    // 모스부호와 대응되는 알파벳을 저장하는 map
    unordered_map<string, char> morse = {
        {".-", 'a'}, {"-...", 'b'}, {"-.-.", 'c'}, {"-..", 'd'}, {".", 'e'}, {"..-.", 'f'},
        {"--.", 'g'}, {"....", 'h'}, {"..", 'i'}, {".---", 'j'}, {"-.-", 'k'}, {".-..", 'l'},
        {"--", 'm'}, {"-.", 'n'}, {"---", 'o'}, {".--.", 'p'}, {"--.-", 'q'}, {".-.", 'r'},
        {"...", 's'}, {"-", 't'}, {"..-", 'u'}, {"...-", 'v'}, {".--", 'w'}, {"-..-", 'x'},
        {"-.--", 'y'}, {"--..", 'z'}
    };

    stringstream ss(letter);  // 입력된 letter를 공백 기준으로 분리하기 위한 stringstream
    string morse_letter;      // 모스부호 하나를 저장할 임시 문자열
    string answer = "";       // 최종 결과를 저장할 문자열

    // 공백을 기준으로 모스부호를 분리
    while (ss >> morse_letter) {
        // 분리된 모스부호를 알파벳으로 변환하여 결과에 추가
        answer += morse[morse_letter];
    }

    return answer;
}
