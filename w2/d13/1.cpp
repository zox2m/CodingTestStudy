// ���鿡 �°� ���ڿ� ������ 
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int pre = 0;
    string temp;
    // ���ڿ��� �������� ���� 
    stringstream ss(s);

    // ss ���� �� �� ���� �ݺ�
    while (ss >> temp)
    {
        // Z��?
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