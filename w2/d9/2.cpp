// �𽺺�ȣ
// map���� �����صΰ� �˻���
// �Է��� ���� �������� ������ ����� �𸣰ھ ã�ƺ� -> sstream
#include <string>
#include <vector>
#include <sstream>  // stringstream�� ����ϱ� ���� ���
#include <unordered_map>  // map ����� ���� ���

using namespace std;

string solution(string letter) {
    // �𽺺�ȣ�� �����Ǵ� ���ĺ��� �����ϴ� map
    unordered_map<string, char> morse = {
        {".-", 'a'}, {"-...", 'b'}, {"-.-.", 'c'}, {"-..", 'd'}, {".", 'e'}, {"..-.", 'f'},
        {"--.", 'g'}, {"....", 'h'}, {"..", 'i'}, {".---", 'j'}, {"-.-", 'k'}, {".-..", 'l'},
        {"--", 'm'}, {"-.", 'n'}, {"---", 'o'}, {".--.", 'p'}, {"--.-", 'q'}, {".-.", 'r'},
        {"...", 's'}, {"-", 't'}, {"..-", 'u'}, {"...-", 'v'}, {".--", 'w'}, {"-..-", 'x'},
        {"-.--", 'y'}, {"--..", 'z'}
    };

    stringstream ss(letter);  // �Էµ� letter�� ���� �������� �и��ϱ� ���� stringstream
    string morse_letter;      // �𽺺�ȣ �ϳ��� ������ �ӽ� ���ڿ�
    string answer = "";       // ���� ����� ������ ���ڿ�

    // ������ �������� �𽺺�ȣ�� �и�
    while (ss >> morse_letter) {
        // �и��� �𽺺�ȣ�� ���ĺ����� ��ȯ�Ͽ� ����� �߰�
        answer += morse[morse_letter];
    }

    return answer;
}
