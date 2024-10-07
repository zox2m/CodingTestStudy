#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;  // ���� 2���� �迭�� ������ ����
    vector<int> row;  // �� ���� ������ �ӽ� ����
    int counter = 0;  // �� ��° ������ �ľ��ϱ� ���� ����

    for (int i = 0; i < num_list.size(); i++) {
        row.push_back(num_list[i]);  // ���� ��Ҹ� �ӽ� ���Ϳ� �߰�
        counter++;  // ī���� ����

        if (counter == n) {  // ī���Ͱ� n�� �Ǹ� �� ���� �ϼ��� ��
            answer.push_back(row);  // �ϼ��� ���� ���� �迭�� �߰�
            row.clear();  // �ӽ� ���� �ʱ�ȭ
            counter = 0;  // ī���� �ʱ�ȭ
        }
    }

    return answer;
}
