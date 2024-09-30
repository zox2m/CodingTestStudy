// 양꼬치 가격 계산 
#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    return n * 12000 + (k - n / 10) * 2000;
}