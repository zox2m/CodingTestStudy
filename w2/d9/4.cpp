// ����� �� - ���� 
// �ٸ������ Ǯ�̴� �پ��ϴ���, �ٽ� ���캼 �� 
#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    //�־��� �� balls, �߿��� share ���� �̴� ����� ��     
    long long answer = 1;

    if (balls == 1 && share == 1) {
        return answer;
    }

    for (int i = 0; i < share; i++) { // m�� ���� 
        answer *= balls - i; // n ���� m �� ������
        answer /= i + 1; // 1���� m���� �ö󰣴�

    }
    // 5C3  
    // 5 4 3 
    // 3 2 1 

    // 4 3 
    // 2 1


    //  n~ m�� ��
    //  1~m ���� �� 

    return answer;
}