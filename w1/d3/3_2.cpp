#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> array) {
    unordered_map<int, int> countMap; // ���ڿ� �� ������ ���� Ƚ���� ������ ��
    int mostNum = array[0]; // �ֺ����� �ʱ�ȭ
    int mostCount = 0; // �ֺ��� ���� Ƚ��
    bool isMultiple = false; // �ֺ��� ���� ������ Ȯ���ϴ� ����

    // �迭�� �� ������ ���� Ƚ���� ����
    for (int num : array) {
        countMap[num]++; // �ش� ������ ���� Ƚ���� ������Ŵ
    }

    // ���� Ƚ���� Ȯ���Ͽ� �ֺ��� ã�´�
    // auto : �����Ϸ��� Ÿ���� �߷���. ���⼱ pair<int, int> ���� �߷��� 
    // & : ���������� �ϹǷ�, �޸𸮿� ���� ���� �������� ����. �� ȿ������
    for (auto& entry : countMap) {
        int num = entry.first;
        int count = entry.second;

        // ���ο� �ֺ� �߰� �� ����
        if (count > mostCount) {
            mostCount = count;
            mostNum = num;
            isMultiple = false; // �ֺ��� ���� ���� �ƴ�
        }
        // ������ Ƚ���� �ֺ��� ���� ���
        else if (count == mostCount) {
            isMultiple = true; // �ֺ��� ���� ����
        }
    }

    // �ֺ��� ���� ���� ��� -1 ��ȯ
    if (isMultiple) {
        return -1;
    }

    return mostNum; // �ֺ� ��ȯ
}
