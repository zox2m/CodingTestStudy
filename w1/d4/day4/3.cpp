// 2�������� 10�������� ���ϴ´�� �߶���
// slice ������ ���ڸ� n ���� �ּ� 1���� ���� ��, �� �� �ʿ�?  
#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    return n % slice == 0 ? n/slice :  n / slice + 1;
}