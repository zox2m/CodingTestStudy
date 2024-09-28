// 10만 원 이상 사면 5%, 30만 원 이상 사면 10%, 50만 원 이상 사면 20%를 할인해줍니다.
// 할인 가격 계산
#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    if (price >= 500000) {
        return price * 0.8;
    }
    else if (price >= 300000) {
        return price * 0.9;

    }
    else if (price >= 100000) {
        return price * 0.95;
    }
    else return price;
}