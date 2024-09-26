// 최빈값 구하기 
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {

    int mostNum = array[0]; // 최빈값으로 초기화
    int mostCount = 1; // 최빈값의 등장 횟수
    int currentCount = 1; // 현재 숫자의 등장 횟수
    int isMultiple = false; // 최빈값이 여러 개인지 확인

    for (int i = 1; i < array.size(); i++) {
        if (array[i] == array[i - 1]) {
            currentCount++; // 이전 숫자와 동일하면 카운트 증가
        }
        else {
            currentCount = 1; // 다르면 새로운 숫자 시작
        }

        // 새로운 최빈값 발견
        if (currentCount > mostCount) {
            mostCount = currentCount;
            mostNum = array[i];
            isMultiple = false; // 최빈값이 여러 개가 아님
        }
        // 최빈값과 동일한 횟수인 경우
        else if (currentCount == mostCount) {
            isMultiple = true; // 최빈값이 여러 개임
        }
    }

    // 최빈값이 여러 개인 경우 -1 반환
    if (isMultiple) {
        return -1;
    }

    return mostNum; // 최빈값 반환
}
