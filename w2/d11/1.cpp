// 직육면체에 정육면체가 몇개 들어가는지
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    return (box[0] / n) * (box[1] / n) * (box[2] / n);
}