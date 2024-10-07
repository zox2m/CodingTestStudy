#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;  // 최종 2차원 배열을 저장할 벡터
    vector<int> row;  // 한 행을 저장할 임시 벡터
    int counter = 0;  // 몇 번째 열인지 파악하기 위한 변수

    for (int i = 0; i < num_list.size(); i++) {
        row.push_back(num_list[i]);  // 현재 요소를 임시 벡터에 추가
        counter++;  // 카운터 증가

        if (counter == n) {  // 카운터가 n이 되면 한 행이 완성된 것
            answer.push_back(row);  // 완성된 행을 최종 배열에 추가
            row.clear();  // 임시 벡터 초기화
            counter = 0;  // 카운터 초기화
        }
    }

    return answer;
}
