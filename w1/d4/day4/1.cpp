// 7조각 피자를 n명의 사람이 1조각 이상 먹기 위해 필요한 피자의 수 
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