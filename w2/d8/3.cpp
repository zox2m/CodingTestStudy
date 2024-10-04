#include <string>
#include <vector>
#include <algorithm> // sort�� ���� ���

using namespace std;

vector<int> solution(vector<int> emergency) {
    // pair �� map �� ���� �޸� 
    vector<pair<int, int>> emergency_with_index;

    // emergency �迭�� ���� �ش� �ε����� �Բ� ����
    for (int i = 0; i < emergency.size(); i++) {
        emergency_with_index.push_back({ emergency[i], i });
    }

    // ���޵�(emergency�� ��)�� �������� �������� ����
    sort(emergency_with_index.begin(), emergency_with_index.end(), greater<>());

    // �� ȯ���� ���� ������ ������ ����
    vector<int> answer(emergency.size());

    // ���ĵ� ������� ������ �ű��.
    for (int i = 0; i < emergency_with_index.size(); i++) {
        // ���� �ε����� ����(i + 1)�� ����
        answer[emergency_with_index[i].second] = i + 1;
    }

    return answer;
}
