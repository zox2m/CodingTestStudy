// 경우의 수 - 조합 
// 다른사람들 풀이는 다양하던데, 다시 살펴볼 것 
#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    //주어진 공 balls, 중에서 share 개를 뽑는 경우의 수     
    long long answer = 1;

    if (balls == 1 && share == 1) {
        return answer;
    }

    for (int i = 0; i < share; i++) { // m번 돈다 
        answer *= balls - i; // n 부터 m 개 빠진다
        answer /= i + 1; // 1부터 m까지 올라간다

    }
    // 5C3  
    // 5 4 3 
    // 3 2 1 

    // 4 3 
    // 2 1


    //  n~ m개 곱
    //  1~m 까지 곱 

    return answer;
}