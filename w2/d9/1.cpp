// �屺����5, ��������3, �ϰ��� 1. greedy �˰���

#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;

    // 5�� ���ݷ��� ���� �屺���̷� �ִ��� ���� ���
    answer += hp / 5;
    hp %= 5;

    // 3�� ���ݷ��� ���� �������̷� �ִ��� ���� ���
    answer += hp / 3;
    hp %= 3;

    // ���� ü���� 1�� ���ݷ��� ���� �ϰ��̷� ó��
    answer += hp / 1;  // ��ǻ� hp�� ���� ���̹Ƿ� answer += hp�ε� ����

    return answer;
}
