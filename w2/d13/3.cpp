#include <string>
#include <unordered_set>  // �ߺ� üũ�� ���� unordered_set ���

using namespace std;

string solution(string my_string) {
    string answer = "";  // ��� ���ڿ�
    unordered_set<char> seen;  // ������ ���ڸ� ����� ����

    for (char ch : my_string) {
        // ���ڰ� ó�� ������ ��츸 answer�� �߰�
        if (seen.find(ch) == seen.end()) {
            answer += ch;   // ���� �߰�
            seen.insert(ch);  // ���� ���
        }
    }

    return answer;
}
