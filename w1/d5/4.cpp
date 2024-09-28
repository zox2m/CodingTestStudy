// 벡터 뒤집기
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;

    // 인덱스는 0부터이므로 1을 빼줘야 함 
    for (int i = num_list.size() - 1; i >= 0; i--) {
        answer.push_back(num_list[i]);
    }
    return answer;
}