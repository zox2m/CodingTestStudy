#include <string>

using namespace std;

string solution(int age) {
    string answer = "";

    // �� �ڸ����� ���ϱ� ���� ���ڿ��� ��ȯ
    string age_str = to_string(age);

    // �� �ڸ� ���ڸ� �����Ǵ� ���ڷ� ��ȯ
    for (char digit : age_str) {
        answer += (digit - '0') + 'a';  // ����(0~9)�� ����('a'~'j')�� ��ȯ
    }

    return answer;
}
