#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> array) {
    unordered_map<int, int> countMap; // 숫자와 그 숫자의 등장 횟수를 저장할 맵
    int mostNum = array[0]; // 최빈값으로 초기화
    int mostCount = 0; // 최빈값의 등장 횟수
    bool isMultiple = false; // 최빈값이 여러 개인지 확인하는 변수

    // 배열의 각 숫자의 등장 횟수를 센다
    for (int num : array) {
        countMap[num]++; // 해당 숫자의 등장 횟수를 증가시킴
    }

    // 등장 횟수를 확인하여 최빈값을 찾는다
    // auto : 컴파일러가 타입을 추론함. 여기선 pair<int, int> 임을 추론함 
    // & : 참조연산을 하므로, 메모리에 같은 값을 복제하지 않음. 즉 효율적임
    for (auto& entry : countMap) {
        int num = entry.first;
        int count = entry.second;

        // 새로운 최빈값 발견 시 갱신
        if (count > mostCount) {
            mostCount = count;
            mostNum = num;
            isMultiple = false; // 최빈값이 여러 개가 아님
        }
        // 동일한 횟수의 최빈값이 나올 경우
        else if (count == mostCount) {
            isMultiple = true; // 최빈값이 여러 개임
        }
    }

    // 최빈값이 여러 개일 경우 -1 반환
    if (isMultiple) {
        return -1;
    }

    return mostNum; // 최빈값 반환
}
