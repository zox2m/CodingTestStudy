// 장군개미5, 병정개미3, 일개미 1. greedy 알고리즘

#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;

    // 5의 공격력을 가진 장군개미로 최대한 많이 사용
    answer += hp / 5;
    hp %= 5;

    // 3의 공격력을 가진 병정개미로 최대한 많이 사용
    answer += hp / 3;
    hp %= 3;

    // 남은 체력은 1의 공격력을 가진 일개미로 처리
    answer += hp / 1;  // 사실상 hp가 남은 수이므로 answer += hp로도 가능

    return answer;
}
