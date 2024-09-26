// �ֺ� ���ϱ� 
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {

    int mostNum = array[0]; // �ֺ����� �ʱ�ȭ
    int mostCount = 1; // �ֺ��� ���� Ƚ��
    int currentCount = 1; // ���� ������ ���� Ƚ��
    int isMultiple = false; // �ֺ��� ���� ������ Ȯ��

    for (int i = 1; i < array.size(); i++) {
        if (array[i] == array[i - 1]) {
            currentCount++; // ���� ���ڿ� �����ϸ� ī��Ʈ ����
        }
        else {
            currentCount = 1; // �ٸ��� ���ο� ���� ����
        }

        // ���ο� �ֺ� �߰�
        if (currentCount > mostCount) {
            mostCount = currentCount;
            mostNum = array[i];
            isMultiple = false; // �ֺ��� ���� ���� �ƴ�
        }
        // �ֺ󰪰� ������ Ƚ���� ���
        else if (currentCount == mostCount) {
            isMultiple = true; // �ֺ��� ���� ����
        }
    }

    // �ֺ��� ���� ���� ��� -1 ��ȯ
    if (isMultiple) {
        return -1;
    }

    return mostNum; // �ֺ� ��ȯ
}
