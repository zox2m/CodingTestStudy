// 7���� ���ڸ� n���� ����� 1���� �̻� �Ա� ���� �ʿ��� ������ �� 
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    /*
    int answer = 0;

    if (n % 7) {
        answer = n / 7 + 1;
    }
    else {
        answer = n / 7 ;
    }
    return answer;
    */

    return n % 7 == 0 ? n / 7 : n / 7 + 1;
}