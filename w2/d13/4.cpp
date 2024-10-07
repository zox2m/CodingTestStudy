#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> sides) {
    // 세 변을 오름차순으로 정렬
    sort(sides.begin(), sides.end());

    return sides[0] + sides[1] > sides[2] ? 1 : 2;
}