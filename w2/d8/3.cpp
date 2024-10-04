#include <string>
#include <vector>
#include <algorithm> // sort를 위한 헤더

using namespace std;

vector<int> solution(vector<int> emergency) {
    // pair 와 map 의 차이 메모 
    vector<pair<int, int>> emergency_with_index;

    // emergency 배열의 값과 해당 인덱스를 함께 저장
    for (int i = 0; i < emergency.size(); i++) {
        emergency_with_index.push_back({ emergency[i], i });
    }

    // 응급도(emergency의 값)를 기준으로 내림차순 정렬
    sort(emergency_with_index.begin(), emergency_with_index.end(), greater<>());

    // 각 환자의 진료 순위를 저장할 벡터
    vector<int> answer(emergency.size());

    // 정렬된 순서대로 순위를 매긴다.
    for (int i = 0; i < emergency_with_index.size(); i++) {
        // 원래 인덱스에 순위(i + 1)를 저장
        answer[emergency_with_index[i].second] = i + 1;
    }

    return answer;
}
